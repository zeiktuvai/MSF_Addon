params [["_logic", objNull, [objNull]],	["_x", 50, [1]], ["_y", 50, [1]], ["_side", east, [east]]];

private _trig = createTrigger ["emptyDetector", getPos _logic];
_trig setTriggerArea [_x, _y, 0, false];
_trig setTriggerActivation [[_side] call BIS_fnc_sideNameUnlocalized, "PRESENT", false];
_trig setTriggerStatements [
	"count (thisList select { behaviour _x == 'COMBAT' }) > 0;",
	"{ _x enableAI 'path' } forEach thisList",
	""
];

_trig;
