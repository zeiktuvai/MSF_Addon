params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _def = [] call MSF_fnc_OFE_GetArmorComposition;
private _position = position _logic;
[_position, _def, 1] call MSF_fnc_OFE_SpawnPOI;