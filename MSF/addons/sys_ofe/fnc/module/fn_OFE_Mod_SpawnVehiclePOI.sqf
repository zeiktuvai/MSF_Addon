params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

if (missionNamespace getVariable ["MSF_OFE_Init", false]) then {
	private _def = [] call MSF_fnc_OFE_GetVehicleComposition;
	private _position = position _logic;
	[_position, _def, 0] call MSF_fnc_OFE_SpawnPOI;
};