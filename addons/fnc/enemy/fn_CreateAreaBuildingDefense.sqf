/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script creates a number of units and sets them to occupy buildings.
        
	Examples:
		[Trigger Objct] call MSF_fnc_CreateAreaBuildingDefense;

	Function Ver 1.0
	Implemented in: MSF Addon v1.5.2
*/
params [["_trigger", objNull, [objNull]], ["_num", 0, [0]], ["_side", east, [east]], ["_groupTypes", [], [[]]]];
	
private _radius = [_trigger] call MSF_fnc_GetAreaRadius;

for "_i" from 1 to _num do {
	sleep 0.2;
	private _pos = [_trigger] call BIS_fnc_randomPosTrigger;
	private _group = [_pos, _side, _groupTypes] call MSF_fnc_SpawnGroupInSafePos;
	{ _x addCuratorEditableObjects [units _group]} forEach allCurators;

	[_pos, units _group, _radius, false, false, true] call MSF_fnc_ZEN_OccupyHouse;
};