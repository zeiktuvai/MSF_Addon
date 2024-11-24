params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _side = missionNamespace getVariable ["MSF_OFE_EnemyFaction", east];
private _def = [] call MSF_fnc_OFE_GetOutpostComposition;
private _supply = _logic getVariable ["Supplies", true];
private _vic = _logic getVariable ["Vehicle", true];
private _vicChance = _logic getVariable ["Probability", 1];
private _position = position _logic;
private _objects = [_position, 0, _def] call BIS_fnc_objectsMapper;
private _allObjs = [_side, _objects, 1, [_vic, _vicChance]] call MSF_fnc_OFE_PopulatePosition;

[_allObjs, false] call MSF_fnc_ShowHideObjects;

[_logic, 250, 250, "west", "present", false, _allObjs] call MSF_fnc_OFE_CreateModuleActivationTrigger;
[_logic, 50, 50] call MSF_fnc_OFE_CreateModuleClearTrigger;
[_logic, 50, 50] call MSF_fnc_OFE_CreateModuleAITrigger;
[1, _position] call MSF_fnc_OFE_CreateMapMarker;