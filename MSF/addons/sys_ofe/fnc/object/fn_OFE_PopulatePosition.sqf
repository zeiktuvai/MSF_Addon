// _type: 0 Checkpoint, 1 Outpost, 2 Base, 3 helibase, 4 bastion

params ["_side", ["_objects", [], [[]]], ["_type", 0, [0]], "_params"];

private _unitTypes = [_side] call MSF_fnc_GetUnitClasses;
private _uTypes = [] call MSF_fnc_OFE_GetUnmannedClasses;
private _group = createGroup [_side, true];
private ["_vics"];
private _boxes = [];
private _vicAmmoBoxes = [];

switch (_type) do {
	case 0: {
		[_unitTypes select 5, _objects select {typeOf _x == "MSF_Placeholder_Infantry"}, _group] call MSF_fnc_OFE_SpawnInfantryOnPlaceholder;
		[_unitTypes select 5, _objects, _group] call MSF_fnc_OFE_SpawnInfantryInBuildings;
		_params params ["_supply"];

		if (_supply) then {
			_vicAmmoBoxes = [_objects select {typeOf _x == "MSF_Placeholder_VehicleAmmo"}, 100] call MSF_fnc_OFE_SpawnVehicleAmmo;
			_boxes = [_objects select {typeOf _x == "MSF_Placeholder_Supplies"}] call MSF_fnc_OFE_SpawnAndFillBoxes;
		};
	 };
	case 1: {
		_params params ["_vic", "_vicChance", "_supply"];
		if (_supply) then {
			_vicAmmoBoxes = [_objects select {typeOf _x == "MSF_Placeholder_VehicleAmmo"}, 250] call MSF_fnc_OFE_SpawnVehicleAmmo;
			_boxes = [_objects select {typeOf _x == "MSF_Placeholder_Supplies"}] call MSF_fnc_OFE_SpawnAndFillBoxes;
		};

		if (_vic && [_vicChance] call MSF_fnc_GetSpawnChance) then {
			_vics = [_uTypes select 0, _objects select {typeOf _x == "MSF_Placeholder_Vehicle_U"}] call MSF_fnc_OFE_SpawnUnmannedVic;
		};
	};
	default {
		_vicAmmoBoxes = [_objects select {typeOf _x == "MSF_Placeholder_VehicleAmmo"}, 100] call MSF_fnc_OFE_SpawnVehicleAmmo;
		_boxes = [_objects select {typeOf _x == "MSF_Placeholder_Supplies"}] call MSF_fnc_OFE_SpawnAndFillBoxes;
	 };
};


private _allObjs = units _group;
_allObjs append _objects;
if (count _boxes > 0) then {_allObjs append _boxes};
if (count _vicAmmoBoxes > 0) then {_allObjs append _vicAmmoBoxes};
if (!isNil "_vics" ) then {
	if (count _vics > 0) then {_allObjs append _vics};
};

_allObjs;