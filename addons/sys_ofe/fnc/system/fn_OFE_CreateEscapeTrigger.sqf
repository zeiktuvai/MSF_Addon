params ["_position", ["_area", 500, [1]], ["_isRectangle", false, [false]], ["_enemyStr", 2, [2]]];

private _friendSide = str side (allPlayers select 0);
private _trig = createTrigger ["emptyDetector", _position, true];

_trig setTriggerArea [_area, _area, 0, _isRectangle];
_trig setTriggerStatements [
	format ["count (allPlayers select { !(_x inArea thisTrigger) }) > 0 && missionNamespace getVariable ['MSF_OFE_EnemyStr', 4] <= %1;", _enemyStr],
	"['OFE_escaped'] call BIS_fnc_endMission; hint 'escaped';",
	""
];

_trig;