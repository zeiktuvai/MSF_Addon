params [
	["_mode", "", [""]],
	["_input", [], [[]]]
];

switch _mode do
{
	case "init":
	{
		_input params [["_logic", objNull, [objNull]],	["_isActivated", true, [true]],	["_isCuratorPlaced", false, [true]]];

		if (missionNamespace getVariable ["MSF_OFE_Init", false]) then {
			private _def = [] call MSF_fnc_OFE_GetBastionComposition;

			private _allObjs = [_logic, _def, 4, [true, 1, true]] call MSF_fnc_OFE_PopulatePosition;
		};
	};

	case "attributesChanged3DEN": {
		_input params [
			["_logic", objNull, [objNull]]
		];
		if (count ("MSF_Mod_OFE_Bastion" allObjects 0) > 1) then
		{
			do3DENAction "Undo";
			["Only one module of this type is allowed.", 1, 10, true] call BIS_fnc_3DENNotification;
		};
	};

	case "registeredToWorld3DEN": {
		_input params [
			["_logic", objNull, [objNull]]
		];
		if (count ("MSF_Mod_OFE_Bastion" allObjects 0) > 1) then
		{
			do3DENAction "Undo";		
		};
	};
};
true;


