/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  Spawns a random group type in a safe position near the given position.
        
	Examples:
		[Trigger Objct] call MSF_fnc_SpawnGroupInSafePosition;

	Function Ver 1.0
	Implemented in: MSF Addon v1.5.2
*/
params [["_position", [0,0,0], [[]], 3], ["_side", east, [east]], ["_groupTypes", [""], [[]]]];

private _grpName = selectRandom _groupTypes;
private _type = [configfile >> "CfgGroups", 4] call BIS_fnc_returnChildren select { configName _x == _grpName } select 0;
private _pos = [_position, 1, 50, 3, 0, 20, 0] call BIS_fnc_findSafePos;
private _group = [_pos, _side, _type] call BIS_fnc_spawnGroup;

_group;