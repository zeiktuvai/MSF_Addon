params [["_trigger", objNull, [objNull]]];

[_trigger] spawn {
	private _trigger = _this select 0;

	_units = [0] call MSF_fnc_GetUnitClasses; 
	_units params ["_infantryGroupClasses", "_vicTypes", "_armorTypes", "_airClasses", "_turrets", "_infUnits"];

	private _side = _trigger getVariable ["MSF_Trig_Wave_Side", east];
	private _waves = _trigger getVariable ["MSF_Trig_Waves_Num", 2];
	private _interval = _trigger getVariable ["MSF_Trig_Waves_Interval", 300];
	private _waveCount = 0;
	private _run = true;

	while {_run} do {

		for "_g" from 1 to (_trigger getVariable ["MSF_Trig_Wave_Infantry_Num", 0]) do {
			private _pos = _trigger getRelPos [400, random 350];		
			private _group = [_pos, _side, _infantryGroupClasses] call MSF_fnc_SpawnGroupInSafePos;
			
			if (getMissionConfigValue ["MSF_Mission_Zeus", true]) then {
				{ _x addCuratorEditableObjects [units _group]} forEach allCurators;
			};
			
			private _wp = _group addWaypoint [position _trigger, 0];
			_wp setWaypointSpeed "FULL";
			_wp setWaypointType "SAD";
		};

		//  vics
		private _vicNum = _trigger getVariable ["MSF_Trig_Wave_Vehicle_Num", 0];
		if (_vicNum > 0) then {
			[_trigger, _vicNum, _side, 400, _vicTypes, 1] call MSF_fnc_SpawnSeekAndDestroyVehicles;
		};

		// armored vics
		private _aNum = _trigger getVariable ["MSF_Trig_Wave_Armor_Num", 0];
		if (_aNum > 0) then {
			[_trigger, _aNum, _side, 400, _armorTypes, 1] call MSF_fnc_SpawnSeekAndDestroyVehicles;
		};

		// Air units
		private _airNum = _trigger getVariable ["MSF_Trig_Wave_Air_Num", 0];
		if (_airNum > 0) then {
			[_trigger, _airNum, _side, 1000, _airClasses, 1] call MSF_fnc_SpawnSeekAndDestroyVehicles;			
		};

		_waveCount = _waveCount + 1;
		if (_waveCount == _waves) then { break; };

		sleep _interval;
	};
};