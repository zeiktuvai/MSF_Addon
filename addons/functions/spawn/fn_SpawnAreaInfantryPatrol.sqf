/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script creates a patrol in a the designated trigger area with 8 waypoints.
        
	Examples:
		[Trigger Objct] call MSF_fnc_CreateRandomTriggerPatrol;

	Function Ver 1.0
	Implemented in: MSF Addon v1.5.2
*/

params ["_trigger"];

private _vals = _trigger getVariable ["module_params", []];
_vals params ["_sideVal", "_amount", "_mode", "_behv", "_speed", "_spawnCount"];

//TODO: Update to spawn number of units instead of group.
if (count (_trigger getVariable ["MSF_Patrol_Group_ID", []]) == 0) then {
	private _side = [_sideVal] call BIS_fnc_sideType;
	private _groupTypes = ["unit", _side] call MSF_fnc_GetConfigData get "Groups";
	private _ids = [];
	private _count = [1, 2] select (_spawnCount);

	for "_g" from 1 to _count do {
		private _route = [_trigger, _amount, ([_trigger, true] call MSF_fnc_GetAreaRadius) * 2, false] call MSF_fnc_GetRadialPositionRoute;
		private _group = [_route select 0, _side, _groupTypes] call MSF_fnc_SpawnGroupInSafePos;		
		_group deleteGroupWhenEmpty true;
		_group setSpeedMode _speed;
		_group setCombatMode _mode;
		_group setBehaviour _behv;
		if (getMissionConfigValue ["MSF_Mission_Zeus", true]) then {
			{ _x addCuratorEditableObjects [units _group]} forEach allCurators;
		};
		_ids pushBack _group;

		[_route, _group] call MSF_fnc_GeneratePatrolRoute;
	};
	
	_trigger setVariable ["MSF_Patrol_Group_ID", _ids, true];
};
