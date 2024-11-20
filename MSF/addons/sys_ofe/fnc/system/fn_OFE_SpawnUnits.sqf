params [["_objects", [], [[]]]];

private _group = createGroup [east, true];
private _unitTypes = [east] call MSF_fnc_GetUnitClasses;

[_unitTypes select 5, _objects select {typeOf _x == "MSF_Placeholder_Infantry"}, _group] call MSF_fnc_OFE_SpawnInfantryOnPlaceholder;
[_unitTypes select 5, _objects, _group] call MSF_fnc_OFE_SpawnInfantryInBuildings;
