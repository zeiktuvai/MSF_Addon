/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script creates a vehicle patrol in a the designated area with 10 waypoints.
        
	Examples:
		[Trigger Objct] call MSF_fnc_CreateAreaVehiclePatrol;

	Function Ver 1.0
	Implemented in: MSF Addon v1.5.2
*/
params ["_trigger"];


private _radius = [triggerArea _trigger select 0, triggerArea _trigger select 1] select ((triggerArea _trigger select 0) <= (triggerArea _trigger select 1));
private _roads = (position _trigger) nearRoads _radius;
private _vehicles = parseSimpleArray(_trigger getVariable ["MSF_Trig_Patrol_Vic_Types", []]);
private _mode = _trigger getVariable ["MSF_Trig_Patrol_CombatMode", "RED"];
private _behv = _trigger getVariable ["MSF_Trig_Patrol_Behav", "AWARE"];
private _speed = _trigger getVariable ["MSF_Trig_Patrol_Speed", "NORMAL"];
private _num = _trigger getVariable ["MSF_Trig_Patrol_WaypointCount", 10];
private _skip = 0;
private _skipVal = parseNumber((count _roads) / _num - 1 toFixed 0);
private _initial = [];
private _count = [1, 2] select ((_trigger getVariable ["MSF_Trig_Patrol_SpawnCount", false]) == true);
private _side = east;
switch (_trigger getVariable ["MSF_Trig_Patrol_Side", 0]) do {
	case 0: { _side = east; };
	case 1: { _side = resistance; };
	case 2: { _side = west; };
	default { _side = east };
};

for "_g" from 1 to _count do {
	if (_g == 1) then {	_initial = getPosATL (_roads select _skip);	} else { _initial = getPosATL (_roads select (count _roads - 1)); };
	private _gen = [_initial, 0, selectRandom _vehicles, _side] call BIS_fnc_spawnVehicle;
	private _group = _gen select 2;
	_group setSpeedMode _speed;
	_group setCombatMode _mode;
	_group setBehaviour _behv;

	if (_trigger getVariable ["MSF_Trig_Patrol_Zeus", true]) then {
	{ _x addCuratorEditableObjects [[_gen select 0], true]} forEach allCurators;
	};

	for "_i" from 1 to _num do {
		private _pos = getPosATL (_roads select (_skip - 1));

		if ( _i == 1 ) then {
			[_group, _i] setWaypointBehaviour _behv;
			[_group, _i] setWaypointCombatMode _mode;
			[_group, _i] setWaypointFormation "COLUMN";
		};    
			
		_wp = _group addWaypoint [_pos, 10, _i ];
		if (_g == 1) then {_skip = _skip + _skipVal;} else {_skip = _skip - (_skipVal - random 5);};
	};	
	_wp = _group addWaypoint [_initial, 10, _num];
	[_group, _num] setWaypointType "CYCLE";	
};