params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _def = [] call MSF_fnc_OFE_GetCheckpointComposition;
private _supply = _logic getVariable ["Supplies", true];
private _position = position _logic;
private _unitTypes = ([east] call MSF_fnc_GetUnitClasses) select 5;
private _dir = [_position] call MSF_fnc_GetRoadDirection;
private _objects = [_position, _dir, _def] call BIS_fnc_objectsMapper;
private _group = createGroup [east, true];

[_unitTypes, _objects select {typeOf _x == "MSF_Placeholder_Infantry"}, _group] call MSF_fnc_OFE_SpawnInfantryOnPlaceholder;
[_unitTypes, _objects, _group] call MSF_fnc_OFE_SpawnInfantryInBuildings;
private _boxes = [_objects select {typeOf _x == "MSF_Placeholder_Supplies"}] call MSF_fnc_OFE_SpawnAndFillBoxes;
private _vicAmmoBoxes = [_objects select {typeOf _x == "MSF_Placeholder_VehicleAmmo"}] call MSF_fnc_OFE_SpawnVehicleAmmo;

private _allObjs = units _group;
_allObjs append _objects;
if (count _boxes > 0) then {_allObjs append _boxes};
if (count _vicAmmoBoxes > 0) then {_allObjs append _vicAmmoBoxes};

[_allObjs, false] call MSF_fnc_ShowHideObjects;

[_logic, 250, 250, "west", "present", false, _allObjs, true] call MSF_fnc_OFE_CreateModuleActivationTrigger;
[_logic, 50, 50] call MSF_fnc_OFE_CreateModuleClearTrigger;

// This will need to integrate with intel system.
_marker = createMarkerLocal ["Checkpoint_" + (str _position), _position];
_marker setMarkerTypeLocal "mil_dot";
_marker setMarkerText "Checkpoint";