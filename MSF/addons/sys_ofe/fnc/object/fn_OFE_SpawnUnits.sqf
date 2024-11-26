params [["_objects", [], [[]]], "_trigger"];

private _side = missionNamespace getVariable ["MSF_OFE_EnemyFaction", east];
private _group = createGroup [_side, true];
private _unitTypes = [_side] call MSF_fnc_GetUnitClasses;
private _center = position _trigger;

[_unitTypes select 5, _objects select {typeOf _x == "MSF_Placeholder_Infantry"}, _group] call MSF_fnc_OFE_SpawnInfantryOnPlaceholder;
[_unitTypes select 5, _objects, _group] call MSF_fnc_OFE_SpawnInfantryInBuildings;
[_unitTypes select 1, _objects select {typeOf _x == "MSF_Placeholder_Vehicle"}, _side, _center] call MSF_fnc_OFE_SpawnMannedVic;