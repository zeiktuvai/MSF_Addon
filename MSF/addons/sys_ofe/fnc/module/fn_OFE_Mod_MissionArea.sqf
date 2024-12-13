params [
	["_mode", "", [""]],
	["_input", [], [[]]]
];

switch _mode do
{
	case "init":
	{
		_input params [["_logic", objNull, [objNull]],	["_isActivated", true, [true]],	["_isCuratorPlaced", false, [true]]];
		
		private _position = position _logic;
		private _enemyStr = _logic getVariable ["EnemyStr", 2];
		private _area = [_logic, false] call MSF_fnc_GetAreaRadius;
		private _isRectangle = (_logic getVariable ["objectArea", [0,0,0,false]]) select 3;

		if (missionNamespace getVariable ["MSF_OFE_Init", false]) then {
			[_position, _area, _isRectangle, _enemyStr] call MSF_fnc_OFE_CreateEscapeTrigger;
		};
	};

	case "attributesChanged3DEN": {
		_input params [
			["_logic", objNull, [objNull]]
		];
		if (count ("MSF_Module_OFE" allObjects 0) > 1) then
		{
			do3DENAction "Undo";
			["Only one module of this type is allowed.", 1, 10, true] call BIS_fnc_3DENNotification;
		};
	};

	case "registeredToWorld3DEN": {
		_input params [
			["_logic", objNull, [objNull]]
		];
		if (count ("MSF_Module_OFE" allObjects 0) > 1) then
		{
			do3DENAction "Undo";		
		};
	};
};
true;