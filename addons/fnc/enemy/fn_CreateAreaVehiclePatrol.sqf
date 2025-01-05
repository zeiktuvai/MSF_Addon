/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script creates a vehicle patrol in a the designated area with 10 waypoints.
        
	Examples:
		[Trigger Objct] call MSF_fnc_CreateAreaVehiclePatrol;

	Function Ver 1.0
	Implemented in: MSF Addon v1.6.0
*/
params ["_trigger"];

private _vals = _trigger getVariable ["module_params", []];
_vals params ["_sideVal", "_amount", "_mode", "_behv", "_speed", "_spawnCount"];

private _side = [_sideVal] call BIS_fnc_sideType;
private _classes = [_side] call MSF_fnc_GetUnitClasses;
private _radius = [_trigger] call MSF_fnc_GetAreaRadius;
private _roads = (position _trigger) nearRoads _radius;
private _vehicles = _classes select 6;
private _skip = 0;
private _skipVal = parseNumber((count _roads) / _amount - 1 toFixed 0);
private _initial = [];
private _count = [1, 2] select ((_trigger getVariable ["MSF_Trig_Patrol_SpawnCount", false]) == true);


for "_g" from 1 to _count do {
	if (_g == 1) then {	_initial = getPosATL (_roads select _skip);	} else { _initial = getPosATL (_roads select (count _roads - 1)); };
	private _gen = [_initial, 0, selectRandom _vehicles, _side] call BIS_fnc_spawnVehicle;
	private _group = _gen select 2;
	_group setSpeedMode _speed;
	_group setCombatMode _mode;
	_group setBehaviour _behv;

	if (getMissionConfigValue ["MSF_Mission_Zeus", true]) then {
	{ _x addCuratorEditableObjects [[_gen select 0], true]} forEach allCurators;
	};

	if (count _roads < 11) then 
	{
		private _route = [_trigger, _amount, _radius * 2, false] call MSF_fnc_GetRadialPositionRoute;
		[_route, _group] call MSF_fnc_GeneratePatrolRoute;
	}
	else
	{
		for "_i" from 1 to _amount do {
			private _pos = getPosATL (_roads select (_skip - 1));

			if ( _i == 1 ) then {
				[_group, _i] setWaypointBehaviour _behv;
				[_group, _i] setWaypointCombatMode _mode;
				[_group, _i] setWaypointFormation "COLUMN";
			};    
				
			_wp = _group addWaypoint [_pos, 10, _i ];
			if (_g == 1) then {_skip = _skip + _skipVal;} else {_skip = _skip - (_skipVal - random 5);};
		};	
		_wp = _group addWaypoint [_initial, 10, _amount];
		[_group, _amount] setWaypointType "CYCLE";
	};
};