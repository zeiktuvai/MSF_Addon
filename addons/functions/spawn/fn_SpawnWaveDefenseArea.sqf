params [["_trigger", objNull, [objNull]]];

private _vals = _trigger getVariable ["module_params", []];
_vals params ["_side", "_waves", "_interval", "_infNum", "_vicNum", "_armorNum", "_airNum", "_vicFill"];

private _units = ["unit", _side] call MSF_fnc_GetConfigData;
private _waveCount = 0;
private _run = true;

while {_run} do {

	for "_g" from 1 to _infNum do {
		private _pos = _trigger getRelPos [400, random 350];
		//TODO: same as patrol, update to use units
		private _group = [_pos, _side, _units get "Groups"] call MSF_fnc_SpawnGroupInSafePos;
		
		if (getMissionConfigValue ["MSF_Mission_Zeus", true]) then {
			{ _x addCuratorEditableObjects [units _group]} forEach allCurators;
		};
		
		private _wp = _group addWaypoint [position _trigger, 0];
		_wp setWaypointSpeed "FULL";
		_wp setWaypointType "SAD";
	};

	//  vics
	if (_vicNum > 0) then {
		[_trigger, _vicNum, _side, 400, _units get "Vehicles", 1, _vicFill, _units get "Units"] call MSF_fnc_SpawnSeekAndDestroyVehicles;
	};

	// armored vics
	if (_armorNum > 0) then {
		[_trigger, _armorNum, _side, 400, _units get "Armor", 1] call MSF_fnc_SpawnSeekAndDestroyVehicles;
	};

	// Air units
	if (_airNum > 0) then {
		[_trigger, _airNum, _side, 1000, _units get "Air", 1] call MSF_fnc_SpawnSeekAndDestroyVehicles;			
	};

	_waveCount = _waveCount + 1;
	if (_waveCount == _waves) then { break; };

	sleep _interval;
};
