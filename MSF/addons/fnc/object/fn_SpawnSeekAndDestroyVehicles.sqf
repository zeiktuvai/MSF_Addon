/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script creates a number of units to attack a position.
        
	Parameters:
		object  Object to spawn near.
		int 	Number of spawns
		side	Side to spawn units on
		array	List of heli class names
		int		Probability of spawn
		int		Probability to fill vehicle (If it has slots)

	Examples:
		[Trigger, 2, east, ["Heli"], 1, 0] call MSF_fnc_

	Function Ver 2.0
	Implemented in: MSF Addon v2.1.0
*/
params [
	["_trigger", objNull, [objNull]],
	["_num", 0, [0]],
	["_side", east, [east]],
	["_distance", 250, [250]],
	["_vehicleTypes", [], [[]]],
	["_spawnChance", 1, [1]],
	["_fillChance", 0, [0]],
	["_fillUnits", [], [[]]]
];

private _zeus = getMissionConfigValue ["MSF_Mission_Zeus", true];

for "_i" from 1 to _num do {
	if ([_spawnChance] call MSF_fnc_GetSpawnChance) then {	
		private _type = selectRandom _vehicleTypes;
		private _pos = _trigger getRelPos [_distance, random 350];
		private _vic = [_pos, 0, _type, _side] call BIS_fnc_spawnVehicle;

		if (_zeus) then {
			{ _x addCuratorEditableObjects [[_vic select 0], true]} forEach allCurators;
		};
		
		if ([_fillChance] call MSF_fnc_GetSpawnChance) then {
			private _totalSlots = [_type, true] call BIS_fnc_crewCount;
			private _cargoSlots = [_type, false] call BIS_fnc_crewCount;
			private _availSlots = _totalSlots - _cargoSlots - count crew (_vic select 0);

			if (_availSlots > 0) then {
				for "_k" from 1 to _availSlots do {
					private _crewD = (_vic select 2) createUnit [selectRandom (_fillUnits select 5), _pos, [], 0, "FORM"];
					[_crewD] join (_vic select 2);
					_crewD moveInAny (_vic select 0);
					if (_zeus) then { { _x addCuratorEditableObjects [[_crewD], true]; } forEach allCurators; };
				};
			};
		};
		
		private _wp = (_vic select 2) addWaypoint [position _trigger, 0];
		_wp setWaypointSpeed "FULL";
		_wp setWaypointType "SAD";
	};

};