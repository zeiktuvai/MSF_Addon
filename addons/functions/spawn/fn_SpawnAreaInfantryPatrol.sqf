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
	private _types = ["unit", _side] call MSF_fnc_GetConfigData get "Units";
	private _ids = [];
	private _count = [1, 2] select (_spawnCount);

	for "_g" from 1 to _count do {
		private _route = [_trigger, _amount, ([_trigger, true] call MSF_fnc_GetAreaRadius) * 2, false] call MSF_fnc_GetRadialPositionRoute;
		private _group = createGroup _side;

		for "_s" from 0 to (random [4, 5, 6]) do {
			_group createUnit [selectRandom _types, _route select 0, [], 5, "NONE"]
		};

		_group deleteGroupWhenEmpty true;
		_group setSpeedMode _speed;
		_group setCombatMode _mode;
		_group setBehaviour _behv;
		if (getMissionConfigValue ["MSF_Mission_Zeus", true]) then {
			{ _x addCuratorEditableObjects [units _group, true]} forEach allCurators;
		};
		_ids pushBack _group;

		[_route, _group, [_mode, _behv, _speed]] call MSF_fnc_GeneratePatrolRoute;
	};
	
	_trigger setVariable ["MSF_Patrol_Group_ID", _ids, true];
};
