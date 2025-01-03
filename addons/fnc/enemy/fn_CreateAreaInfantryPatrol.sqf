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

if (count (_trigger getVariable ["MSF_Patrol_Group_ID", []]) == 0) then {
	private _side = [_sideVal] call BIS_fnc_sideType;
	private _classes = [_side] call MSF_fnc_GetUnitClasses;
	private _groupTypes = _classes select 0;
	private _ids = [];
	private _count = [1, 2] select (_spawnCount);

	for "_g" from 1 to _count do {
		private _start = [_trigger] call BIS_fnc_randomPosTrigger;
		private _group = [_start, _side, _groupTypes] call MSF_fnc_SpawnGroupInSafePos;		
		_group deleteGroupWhenEmpty true;
		_group setSpeedMode _speed;
		_group setCombatMode _mode;
		_group setBehaviour _behv;
		if (getMissionConfigValue ["MSF_Mission_Zeus", true]) then {
			{ _x addCuratorEditableObjects [units _group]} forEach allCurators;
		};
		_ids pushBack _group;

		for "_i" from 1 to _amount do {
			private _location = [_trigger] call BIS_fnc_randomPosTrigger;
			_wp = _group addWaypoint [_location, 10, _i ];

			if ( _i == 1 ) then {
				[_group, _i] setWaypointBehaviour _behv;
				[_group, _i] setWaypointCombatMode _mode;
				[_group, _i] setWaypointSpeed _speed;
				[_group, _i] setWaypointFormation "COLUMN";
			};    
		};

		_wp = _group addWaypoint [_start, 10, _amount];
		[_group, _amount] setWaypointType "CYCLE";	
	};

	[_trigger, ["MSF_Patrol_Group_ID", _ids]] remoteExec ["setVariable"];
};