params [["_route", [], [[]]], "_group"];

private _i = 1;
private _startPos = _route select 0;
_route deleteAt (_route find _startPos);

{
	_wp = _group addWaypoint [_x, 10, _i ];

	if (_i == 1) then {
		[_group, _i] setWaypointBehaviour _behv;
		[_group, _i] setWaypointCombatMode _mode;
		[_group, _i] setWaypointSpeed _speed;
		[_group, _i] setWaypointFormation "COLUMN";
	};

	_i = _i + 1;	
} forEach _route;

_wp = _group addWaypoint [_startPos, 10, _i];
[_group, _i] setWaypointType "CYCLE";	