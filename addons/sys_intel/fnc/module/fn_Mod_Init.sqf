params [
	["_mode", "", [""]],
	["_input", [], [[]]]
];

switch _mode do
{
	case "init":
	{
		_input params [["_logic", objNull, [objNull]],["_isActivated", true, [true]],["_isCuratorPlaced", false, [true]]];

		if (!(missionNamespace getVariable ["MSF_Intel_Init", false])) then {
			missionNamespace setVariable ["MSF_Intel_Items", createHashMap];
			missionNamespace setVariable ["MSF_Intel_Init", true];
		};
	};
	// When some attributes were changed (including position and rotation)
	case "attributesChanged3DEN": {
		_input params [["_logic", objNull, [objNull]]];

		if (count ("MSF_Module_Intel" allObjects 0) > 1) then
		{
			do3DENAction "Undo";
			["Only one module of this type is allowed.", 1, 10, true] call BIS_fnc_3DENNotification;
		};
	};
	// When added to the world (e.g., after undoing and redoing creation)
	case "registeredToWorld3DEN": {
		_input params [["_logic", objNull, [objNull]]];

		if (count ("MSF_Module_Intel" allObjects 0) > 1) then
		{
			do3DENAction "Undo";		
		};
	};
};
true;