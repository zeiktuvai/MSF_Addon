params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _def = [] call MSF_fnc_OFE_GetStaticComposition;
private _position = position _logic;
private _types = ([] call MSF_fnc_OFE_GetUnmannedClasses) select 2;
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
} forEach _vics;

private _allObjs = _objects;
_allObjs append _vics;
_allObjs append units _group;

[_allObjs, false] call MSF_fnc_ShowHideObjects;
[_logic, 250, 250, "west", "present", false, _allObjs, true] call MSF_fnc_OFE_CreateModuleActivationTrigger;
[5, _position] call MSF_fnc_OFE_CreateMapMarker;