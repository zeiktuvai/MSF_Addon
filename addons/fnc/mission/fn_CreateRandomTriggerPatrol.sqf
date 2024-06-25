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

if (count (_trigger getVariable ["MSF_Patrol_Group_ID", []]) == 0) then {
	private _grpN = _trigger getVariable ["MSF_Trig_Patrol_Group", "OIA_InfTeam"];
	private _grpName = _grpN trim ["""", 0];
	private _amount = 8;
	private _type = [configfile >> "CfgGroups", 4] call BIS_fnc_returnChildren select { configName _x == _grpName } select 0;		
	private _ids = [];
	private _count = [1, 2] select ((_trigger getVariable ["MSF_Trig_Patrol_SpawnCount", false]) == true);

	for "_g" from 1 to _count do {
		private _start = [_trigger] call BIS_fnc_randomPosTrigger;
		private _pos = [_start, 1, 50, 3, 0, 20, 0] call BIS_fnc_findSafePos;
		private _group = [_pos, east, _type] call BIS_fnc_spawnGroup;
		_group deleteGroupWhenEmpty true;
		if (_trigger getVariable ["MSF_Trig_Patrol_Zeus", true]) then {
			{ _x addCuratorEditableObjects [units _group]} forEach allCurators;
		};
		_ids pushBack _group;

		for "_i" from 1 to _amount do {
			private _location = [_trigger] call BIS_fnc_randomPosTrigger;
			_wp = _group addWaypoint [_location, 10, _i ];

			if ( _i == 1 ) then {
				[_group, _i] setWaypointBehaviour "SAFE";
				[_group, _i] setWaypointCombatMode "RED";
				[_group, _i] setWaypointFormation "COLUMN";
			};    
		};

		_wp = _group addWaypoint [_start, 10, _amount];
		[_group, _amount] setWaypointType "CYCLE";	
	};

	[_trigger, ["MSF_Patrol_Group_ID", _ids]] remoteExec ["setVariable"];
};