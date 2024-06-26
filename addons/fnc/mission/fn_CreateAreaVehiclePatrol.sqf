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
private _num = 10;
private _skip = 0;
private _skipVal = parseNumber((count _roads) / _num - 1 toFixed 0);
private _start = getPosATL (_roads select _skip);
private _gen = [_start, 0, selectRandom _vehicles, EAST] call BIS_fnc_spawnVehicle;
private _group = _gen select 2;

if (_trigger getVariable ["MSF_Trig_Patrol_Zeus", true]) then {
{ _x addCuratorEditableObjects [[_gen select 0], true]} forEach allCurators;
};

for "_i" from 1 to _num do {
	private _pos = getPosATL (_roads select _skip);

	if ( _i == 1 ) then {
		[_group, _i] setWaypointBehaviour _behv;
		[_group, _i] setWaypointCombatMode _mode;
		[_group, _i] setWaypointFormation "COLUMN";
	};    
		
	_wp = _group addWaypoint [_pos, 10, _i ];   

_skip = _skip + _skipVal;
};
_wp = _group addWaypoint [_start, 10, _num];
[_group, _num] setWaypointType "CYCLE";	