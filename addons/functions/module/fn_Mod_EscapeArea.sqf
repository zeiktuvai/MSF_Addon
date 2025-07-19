params [["_mode", "", [""]], ["_input", [], [[]]]];

switch _mode do
{
	case "init":
	{
		_input params [["_logic", objNull, [objNull]],	["_isActivated", true, [true]],	["_isCuratorPlaced", false, [true]]];
		
		private _position = position _logic;
		private _enemyStr = _logic getVariable ["EnemyStr", 2];
		private _area = [_logic, false] call MSF_fnc_GetAreaRadius;
		private _isRectangle = (_logic getVariable ["objectArea", [0,0,0,false]]) select 3;

		if !(["EscapeAreaModule", "MSF", false] call MSF_fnc_GetConfigValue) then {
			["MSF", "EscapeAreaModule", true] call MSF_fnc_SetConfigValue;
			[_position, _area, _isRectangle] spawn {
				params ["_position", "_area", "_isRectangle"];

				sleep 10;				
				private _trig = createTrigger ["emptyDetector", _position, true];

				_trig setTriggerArea [_area, _area, 0, _isRectangle];
				_trig setTriggerStatements [
					"count (allPlayers select { !(_x inArea thisTrigger) }) > 0;",
					"['end1', true] remoteExecCall ['BIS_fnc_endMission'];",
					""
				];
			};
		};
	};

	case "attributesChanged3DEN": {
		_input params [
			["_logic", objNull, [objNull]]
		];
		if (count ("MSF_Module_OFE_MissArea" allObjects 0) > 1) then
		{
			do3DENAction "Undo";
			["Only one module of this type is allowed.", 1, 10, true] call BIS_fnc_3DENNotification;
		};
	};

	case "registeredToWorld3DEN": {
		_input params [
			["_logic", objNull, [objNull]]
		];
		if (count ("MSF_Module_OFE_MissArea" allObjects 0) > 1) then
		{
			do3DENAction "Undo";		
		};
	};
};

true;

