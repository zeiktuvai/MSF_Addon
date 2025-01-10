params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _position = position _logic;
private _activationSide = _logic getVariable ["ActivationSide", 1];
private _spawnSide = _logic getVariable ["SpawnSide", 0];
private _victimSide = _logic getVariable ["VictimSide", 2];
private _type = _logic getVariable ["SpawnType", 0];
private _supplyCount = _logic getVariable ["NumItems", 50];
private _min = _logic getVariable ["VicAmmoMin", 250];
private _max = _logic getVariable ["VicAmmoMax", 750];
private _def = [];

private _stype = if (_type == 10) then { selectRandom [0, 1, 3, 4, 5] } else { _type };

switch (_stype) do {
	case 0: { _def = [] call MSF_fnc_OFE_GetVehicleComposition; };
	case 1: { _def = [] call MSF_fnc_OFE_GetArmorComposition; };
	case 3: { _def = [] call MSF_fnc_OFE_GetSupplyComposition; };
	case 4: { _def = [] call MSF_fnc_OFE_GetMedicalComposition; };
	case 5: { _def = [] call MSF_fnc_OFE_GetSupplyComposition; };
};

[false, _position, _def, _stype, [_spawnSide] call BIS_fnc_sideType, [_victimSide] call BIS_fnc_sideType,
	[_activationSide] call MSF_fnc_GetModuleActivationSide, _supplyCount, random [_min, (_min + _max) / 2, _max]] call MSF_fnc_OFE_SpawnPOI;