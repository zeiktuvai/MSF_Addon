params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _position = position _logic;
private _activationSide = _logic getVariable ["ActivationSide", 1];
private _spawnSide = _logic getVariable ["SpawnSide", 0];
private _victimSide = _logic getVariable ["VictimSide", 2];
private _type = _logic getVariable ["SpawnType", "Supply"];
private _supplyCount = _logic getVariable ["NumItems", 50];
private _min = _logic getVariable ["VicAmmoMin", 250];
private _max = _logic getVariable ["VicAmmoMax", 750];

private _stype = if (_type == "Random") then { selectRandom ["Vehicle", "Armor", "Supply", "Medical", "Armory", "Food"] } else { _type };

private _def = ["POI", _stype] call MSF_fnc_OFE_GetComposition;

[false, _position, _def, _stype, [_spawnSide] call BIS_fnc_sideType, [_victimSide] call BIS_fnc_sideType,
	[_activationSide] call MSF_fnc_GetModuleActivationSide, _supplyCount, random [_min, (_min + _max) / 2, _max]] call MSF_fnc_OFE_SpawnPOI;

["SUP", position _logic, "Reported Military Area", civilian, ["Color1_FD_F", "hd_warning"]] call MSF_Intel_fnc_AddIntelItem;