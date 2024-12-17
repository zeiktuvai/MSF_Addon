params ["_trigger"];

private _objects = thisTrigger getVariable 'objects';
private _side = missionNamespace getVariable ["MSF_OFE_EnemyFaction", east];
private _group = createGroup [_side, true];
private _unitTypes = [_side] call MSF_fnc_GetUnitClasses;
private _uTypes = [] call MSF_fnc_OFE_GetUnmannedClasses;
private _center = position _trigger;
private _type = _trigger getVariable ["type", 0];
private _params = _trigger getVariable ["vars", []];
private _str = [] call MSF_fnc_OFE_CalculateStrengthValues select 2;
// private _supply = false;
// private _vic = false;
// private _vicChance = false;
_params params ["_vic", "_vicChance", "_supply"];
private ["_vicAmmo", "_supplyCnt"];

[_objects, true] call MSF_fnc_ShowHideObjects;

[_unitTypes select 1, _objects select {typeOf _x == "MSF_Placeholder_Vehicle"}, _side, _center] call MSF_fnc_OFE_SpawnMannedVic;
[_unitTypes select 2, _objects select {typeOf _x == "MSF_Placeholder_Armor"}, _side, _center] call MSF_fnc_OFE_SpawnMannedVic;
[_unitTypes select 4, _objects select {typeOf _x == "MSF_Placeholder_Static"}, _side, _center] call MSF_fnc_OFE_SpawnMannedVic;
[_unitTypes select 5, _objects select {typeOf _x == "MSF_Placeholder_Infantry"}, _group] call MSF_fnc_OFE_SpawnInfantryOnPlaceholder;
[_unitTypes select 5, _objects, _group] call MSF_fnc_OFE_SpawnInfantryInBuildings;

if (_type == 3 || _type == 4 || _type == 7 || _type == 8) then {
	[_uTypes select 3, _objects select {typeOf _x == "MSF_Placeholder_Heli"}] call MSF_fnc_OFE_SpawnEscapeVic;
};

if (_type == 8) then {
	[_uTypes select 4, _objects select {typeOf _x == "MSF_Placeholder_Aircraft"}] call MSF_fnc_OFE_SpawnEscapeVic;
};

[_uTypes select 5, _objects select {typeOf _x == "MSF_Placeholder_FuelTruck"}] call MSF_fnc_OFE_SpawnUnmannedVic;
[_uTypes select 6, _objects select {typeOf _x == "MSF_Placeholder_AmmoTruck"}] call MSF_fnc_OFE_SpawnUnmannedVic;

switch (_type) do {
	case 5;
	case 1: {
		_vicAmmo = 500;
		_supplyCnt = 70;
	};
	case 6;
	case 2: {
		_vicAmmo = 750;
		_supplyCnt = 120;
	};
	case 3;
	case 4;
	case 7;
	case 8: {
		_vicAmmo = 1000;
		_supplyCnt = 140;
	};
	default {
		_vicAmmo = 100;
		_supplyCnt = 30;
	};
};

if (_supply) then {
	private _sbox = true;
	if (_str > 0.80) then {
		_sbox = [0.5] call MSF_fnc_GetSpawnChance;
	};

	if (_sbox) then {
		_vicAmmoBoxes = [_objects select {typeOf _x == "MSF_Placeholder_VehicleAmmo"}, _vicAmmo - (_vicAmmo * _str)] call MSF_fnc_OFE_SpawnVehicleAmmo;
		[_objects select {typeOf _x == "MSF_Placeholder_Supplies"}, _supplyCnt - (_supplyCnt * _str)] call MSF_fnc_OFE_SpawnAndFillBoxes;
	};
};

if (_vic && [_vicChance - _str] call MSF_fnc_GetSpawnChance) then {
	private _vics = [_uTypes select 0, _objects select {typeOf _x == "MSF_Placeholder_Vehicle_U"}] call MSF_fnc_OFE_SpawnUnmannedVic;
	[_vics] call MSF_fnc_SetRandomVehicleState;
};

if (_type == 4) then {
	private _ant = nearestObjects [_center, ["Land_Radar_01_antenna_F"], 50];

	if (count _ant > 0) then {
		private _obj = _ant select 0;
		private _loc = position _obj;
		_obj setPos [_loc select 0, _loc select 1, 130.507];
	}
};