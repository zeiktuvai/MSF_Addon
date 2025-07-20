params [	
	["_x", 50, [1]],
	["_y", 50, [1]],
	["_z", 50, [1]],
	["_position", [0,0,0], [[]]],
	["_activation", ["WEST","present"], [[]]],
	["_statements", ["this", "", ""], [[]]],
	["_isRectangle", false, [false]],
	["_onStart", false, [false]],
	["_repeat", false, [false]],
	["_params", [], [[]]],
	["_extendRange", false, [false]]
];

private _actStatement = ["this", "true"] select (_onStart);
private _trig = createTrigger ["emptyDetector", _position];
_trig setTriggerArea [if (_extendRange) then {_x + 500} else {_x}, if (_extendRange) then {_y + 500} else {_y}, 0, _isRectangle, _z];
_trig setTriggerActivation [_activation select 0, _activation select 1, _repeat];
_trig setTriggerStatements [_statements select 0, _statements select 1, _statements select 2];
_trig setVariable ["module_params", _params];

_trig;
