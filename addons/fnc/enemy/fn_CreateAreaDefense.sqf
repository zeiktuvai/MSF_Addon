/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script creates a number of units and sets them to patrol.
        
	Examples:
		[Trigger Objct] call MSF_fnc_CreateAreaDefense;

	Function Ver 1.0
	Implemented in: MSF Addon v2.1.0
*/
params [["_trigger", objNull, [objNull]], ["_num", 0, [0]], ["_side", east, [east]], ["_groupTypes", [], [[]]], ["_prob", 1, [1]], ["_logicArea", [], [[]]]];

for "_i" from 1 to _num do {
	if (!isDedicated) then {
		sleep 0.1;
	};

	if ([_prob] call MSF_fnc_GetSpawnChance) then {	
		private _pos = [_trigger] call MSF_fnc_FindSafeSpawnPos;
		private _group = [_pos, _side, _groupTypes] call MSF_fnc_SpawnGroupInSafePos;

		if (getMissionConfigValue ["MSF_Mission_Zeus", true]) then {
			{ _x addCuratorEditableObjects [units _group]} forEach allCurators;
		};

		private _start = getPos (units _group select 0);

		for "_w" from 1 to 5 do
		{
			//find random trigger pos
			_wp = _group addWaypoint [[_trigger] call BIS_fnc_randomPosTrigger, 0];
			_wp setWaypointType "MOVE";
			_wp setWaypointBehaviour "SAFE";
			_wp setWaypointCombatMode "YELLOW";
			_wp setWaypointSpeed "LIMITED";
			_wp setWaypointFormation "FILE";
		};

		// add final waypoint for cycle movement
		_wp = _group addWaypoint [_start, 0];
		_wp setWaypointType "CYCLE";
	};
};