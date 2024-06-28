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

[_trigger] spawn {
	params ["_trigger"];

	if (count (_trigger getVariable ["MSF_Patrol_Group_ID", []]) == 0) then {	
		private _groupTypes = parseSimpleArray(_trigger getVariable ["MSF_Trig_Patrol_Group", []]);	
		private _amount = _trigger getVariable ["MSF_Trig_Patrol_WaypointCount", 8];	
		private _mode = _trigger getVariable ["MSF_Trig_Patrol_CombatMode", "RED"];
		private _behv = _trigger getVariable ["MSF_Trig_Patrol_Behav", "AWARE"];
		private _speed = _trigger getVariable ["MSF_Trig_Patrol_Speed", "NORMAL"];
		private _side = east;
		switch (_trigger getVariable ["MSF_Trig_Patrol_Side", 0]) do {
			case 0: { _side = east; };
			case 1: { _side = resistance; };
			case 2: { _side = west; };
			default { _side = east };
		};
		private _ids = [];
		private _count = [1, 2] select ((_trigger getVariable ["MSF_Trig_Patrol_SpawnCount", false]) == true);

		for "_g" from 1 to _count do {
			private _start = [_trigger] call BIS_fnc_randomPosTrigger;
			private _group = [_start, _side, _groupTypes] call MSF_fnc_SpawnGroupInSafePos;		
			_group deleteGroupWhenEmpty true;
			_group setSpeedMode _speed;
			_group setCombatMode _mode;
			_group setBehaviour _behv;
			if (_trigger getVariable ["MSF_Trig_Patrol_Zeus", true]) then {
				{ _x addCuratorEditableObjects [units _group]} forEach allCurators;
			};
			_ids pushBack _group;

			for "_i" from 1 to _amount do {
				private _location = [_trigger] call BIS_fnc_randomPosTrigger;
				_wp = _group addWaypoint [_location, 10, _i ];

				if ( _i == 1 ) then {
					[_group, _i] setWaypointBehaviour _behv;
					[_group, _i] setWaypointCombatMode _mode;
					[_group, _i] setWaypointFormation "COLUMN";
				};    
			};

			_wp = _group addWaypoint [_start, 10, _amount];
			[_group, _amount] setWaypointType "CYCLE";	
		};

		[_trigger, ["MSF_Patrol_Group_ID", _ids]] remoteExec ["setVariable"];
	};
};