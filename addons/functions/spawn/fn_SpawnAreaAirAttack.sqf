params [["_trigger", objNull, [objNull]], ["_num", 0, [0]], ["_side", east, [east]], ["_vehicleTypes", [], [[]]], ["_spawnChance", 1, [1]]];

for "_i" from 1 to _num do {
	

	if ([_spawnChance] call MSF_fnc_CalculateProbability) then {	
		private _type = selectRandom _vehicleTypes;
		private _pos = _trigger getRelPos [1000, random 350];
		private _vic = [_pos, 0, _type, _side] call BIS_fnc_spawnVehicle;

		if (getMissionConfigValue ["MSF_Mission_Zeus", true]) then {
			{ _x addCuratorEditableObjects [[_vic select 0], true]} forEach allCurators;
		};
		
		private _wp = (_vic select 2) addWaypoint [position _trigger, 0];
		_wp setWaypointSpeed "FULL";
		_wp setWaypointType "SAD";
	};
};
