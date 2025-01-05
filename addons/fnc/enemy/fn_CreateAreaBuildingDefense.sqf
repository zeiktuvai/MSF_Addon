/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script creates a number of units and sets them to occupy buildings.
        
	Examples:
		[Trigger Objct] call MSF_fnc_CreateAreaBuildingDefense;

	Function Ver 1.0
	Implemented in: MSF Addon v1.6.0
*/
params [["_trigger", objNull, [objNull]], ["_num", 0, [0]], ["_side", east, [east]], ["_groupTypes", [], [[]]], ["_bldgProb", 1, [1]], ["_logicArea", [], [[]]]];

private _x = _logicArea select 0;
private _y = _logicArea select 1;
private _radius = [_x, _y] select (_x <= _y);
private _bldg0 = nearestObjects [getPosATL _trigger, ["house"], _radius]; 
private _bldg1 = nearestObjects [getPosATL _trigger, ["building"], _radius];
private _bldg = _bldg0 arrayIntersect _bldg1;
private _bldgFound = false;

{
	if ( count (_x buildingPos -1) > 0 ) then { _bldgFound = true; };
} forEach _bldg;


if (_bldgFound) then {
	for "_i" from 1 to _num do {
		sleep 0.1;
	
		if ([_bldgProb] call MSF_fnc_GetSpawnChance) then {	
			private _pos = [[[position _trigger, _radius]], []] call BIS_fnc_randomPos;
			//[_trigger] call BIS_fnc_randomPosTrigger;
			private _group = [_pos, _side, _groupTypes] call MSF_fnc_SpawnGroupInSafePos;
			[_pos, units _group, _radius, false, false, true] call MSF_fnc_ZEN_OccupyHouse;

			if (getMissionConfigValue ["MSF_Mission_Zeus", true]) then {
				{ _x addCuratorEditableObjects [units _group]} forEach allCurators;
			};
		};
	};
};