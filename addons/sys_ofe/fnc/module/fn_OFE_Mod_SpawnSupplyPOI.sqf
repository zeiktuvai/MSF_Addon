params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

if (missionNamespace getVariable ["MSF_OFE_Init", false]) then {
	private _def = [] call MSF_fnc_OFE_GetSupplyComposition;
	private _position = position _logic;
	private _side = missionNamespace getVariable ["MSF_OFE_EnemyFaction", east];
	private _aside = [1] call MSF_fnc_GetModuleActivationSide;
	[true, _position, _def, 3, _side, resistance, _aside, 50, 250] call MSF_fnc_OFE_SpawnPOI;
};