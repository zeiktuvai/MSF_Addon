params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _type = "Vehicle";

if (missionNamespace getVariable ["MSF_OFE_Init", false]) then {
	private _def = ["POI", _type] call MSF_fnc_OFE_GetComposition;
	private _position = position _logic;
	private _side = missionNamespace getVariable ["MSF_OFE_EnemyFaction", east];
	private _aside = [1] call MSF_fnc_GetModuleActivationSide;
	[true, _position, _def, _type, _side, resistance, _aside] call MSF_fnc_OFE_SpawnPOI;
};
