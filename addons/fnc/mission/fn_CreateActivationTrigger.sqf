params [	
	["_x", 50, [1]],
	["_y", 50, [1]],
	["_z", 50, [1]],
	["_position", [0,0,0], [[]]],
	["_activation", ["WEST","present"], [[]]],
	["_statements", ["", "", ""], [[]]],
	["_isRectangle", false, [false]],
	["_onStart", false, [false]],
	["_params", [], [[]]]
];

_activation params ["_aBy", "_aType"];
_statements params ["_cond", "_act", "_deact"];

private _actStatement = ["this", "true"] select (_onStart);
private _trig = createTrigger ["emptyDetector", _position];
_trig setTriggerArea [_x, _y, 0, _isRectangle, _z];
_trig setTriggerActivation [_aBy, _aType, false];
_trig setTriggerStatements [_cond, _act, _deact];
_trig setVariable ["module_params", _params];

_trig;