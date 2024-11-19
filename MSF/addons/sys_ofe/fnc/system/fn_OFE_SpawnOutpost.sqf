params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _def = [] call MSF_fnc_OFE_GetOutpostComposition;
private _supply = _logic getVariable ["Supplies", true];
private _vic = _logic getVariable ["Vehicle", true];
private _vicChance = _logic getVariable ["Probability", 1];
private _position = position _logic;
private _types = [east] call MSF_fnc_GetUnitClasses;
private _group = createGroup [east, true];
private ["_vics"];

private _objects = [_position, 0, _def] call BIS_fnc_objectsMapper;

[_types select 5, _objects select {typeOf _x == "MSF_Placeholder_Infantry"}, _group] call MSF_fnc_OFE_SpawnInfantryOnPlaceholder;
[_types select 5, _objects, _group, 5] call MSF_fnc_OFE_SpawnInfantryInBuildings;
private _boxes = [_objects select {typeOf _x == "MSF_Placeholder_Supplies"}] call MSF_fnc_OFE_SpawnAndFillBoxes;
private _vicAmmoBoxes = [_objects select {typeOf _x == "MSF_Placeholder_VehicleAmmo"}, 150] call MSF_fnc_OFE_SpawnVehicleAmmo;

if (_vic && [_vicChance] call MSF_fnc_GetSpawnChance) then {
	_vics = [_types select 1, _objects select {typeOf _x == "MSF_Placeholder_Vehicle_U"}] call MSF_fnc_OFE_SpawnUnmannedVic;
};

private _allObjs = units _group;
_allObjs append _objects;
if (count _boxes > 0) then {_allObjs append _boxes};
if (count _vicAmmoBoxes > 0) then {_allObjs append _vicAmmoBoxes};
if (count _vics > 0) then {_allObjs append _vics};

[_allObjs, false] call MSF_fnc_ShowHideObjects;

[_logic, 250, 250, "west", "present", false, _allObjs] call MSF_fnc_OFE_CreateModuleActivationTrigger;
[_logic, 50, 50] call MSF_fnc_OFE_CreateModuleClearTrigger;

// This will need to integrate with intel system.
_marker = createMarkerLocal ["Checkpoint_" + (str _position), _position];
_marker setMarkerTypeLocal "mil_triangle";
_marker setMarkerText "Outpost";