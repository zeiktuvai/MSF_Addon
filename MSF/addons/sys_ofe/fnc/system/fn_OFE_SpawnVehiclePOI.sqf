params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _def = [] call MSF_fnc_OFE_GetVehicleComposition;
private _position = position _logic;
private _types = ["B_MRAP_01_hmg_F"];
private _group = createGroup [resistance, true];
private _unitTypes = ([resistance] call MSF_fnc_GetUnitClasses) select 5;

private _objects = [_position, 0, _def] call BIS_fnc_objectsMapper;
private	_vics = [_types, _objects select {typeOf _x == "MSF_Placeholder_Vehicle_U"}] call MSF_fnc_OFE_SpawnUnmannedVic;
[_unitTypes, _objects select {typeOf _x == "MSF_Placeholder_Infantry"}, _group] call MSF_fnc_OFE_SpawnInfantryOnPlaceholder;

{
	_x setDamage 1;
} forEach units _group;

{
	_x setVehicleAmmo random 1;
	_x setDamage random [0, 0.45, 0.75];
	_x setFuel random [0.2, 0.40, 0.60];
} forEach _vics;

private _allObjs = _objects;
_allObjs append _vics;
_allObjs append units _group;

[_allObjs, false] call MSF_fnc_ShowHideObjects;
[_logic, 250, 250, "west", "present", false, _allObjs, true] call MSF_fnc_OFE_CreateModuleActivationTrigger;

// This will need to integrate with intel system.
_marker = createMarkerLocal ["VicPOI_" + (str _position), _position];
_marker setMarkerTypeLocal "hd_unknown";
_marker setMarkerText "Point of Interest";