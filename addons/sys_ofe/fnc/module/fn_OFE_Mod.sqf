params [
	["_mode", "", [""]],
	["_input", [], [[]]]
];

switch _mode do
{
	case "init":
	{
		_input params [
			["_logic", objNull, [objNull]],		// Module logic
			["_isActivated", true, [true]],		// True when the module was activated, false when it is deactivated
			["_isCuratorPlaced", false, [true]]	// True if the module was placed by Zeus
		];
		
		private _EnemySide = [_logic getVariable ["EnemySide", 0]] call BIS_fnc_sideType;
		missionNamespace setVariable ["MSF_OFE_EnemyFaction", _EnemySide, true];
		missionNamespace setVariable ["MSF_OFE_Init", true, true];
	};
	// When some attributes were changed (including position and rotation)
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
	// When added to the world (e.g., after undoing and redoing creation)
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