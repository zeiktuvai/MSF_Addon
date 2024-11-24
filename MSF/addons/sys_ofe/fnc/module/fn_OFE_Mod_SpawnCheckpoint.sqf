params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _side = missionNamespace getVariable ["MSF_OFE_EnemyFaction", east];
private _def = [] call MSF_fnc_OFE_GetCheckpointComposition;
private _supply = _logic getVariable ["Supplies", true];
private _position = position _logic;
private _dir = [_position] call MSF_fnc_GetRoadDirection;
private _objects = [_position, _dir, _def] call BIS_fnc_objectsMapper;
private _allObjs = [_side, _objects, 0] call MSF_fnc_OFE_PopulatePosition;

[_allObjs, false] call MSF_fnc_ShowHideObjects;

[_logic, 250, 250, "west", "present", false, _allObjs, true] call MSF_fnc_OFE_CreateModuleActivationTrigger;
[_logic, 50, 50] call MSF_fnc_OFE_CreateModuleClearTrigger;
[_logic, 50, 50] call MSF_fnc_OFE_CreateModuleAITrigger;
[0, _position] call MSF_fnc_OFE_CreateMapMarker;