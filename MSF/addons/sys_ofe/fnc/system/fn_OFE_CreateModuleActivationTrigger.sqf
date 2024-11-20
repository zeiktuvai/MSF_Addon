params [
	["_logic", objNull, [objNull]],
	["_x", 50, [1]],
	["_y", 50, [1]],
	["_activationBy", "WEST", ["WEST"]],
	["_activationType", "present", ["present"]],
	["_isRectangle", false, [false]],
	["_objects", [], [[]]],
	["_checkpoint", false, [false]]
];

private _trig = createTrigger ["emptyDetector", getPos _logic];


_trig setTriggerArea [_x, _y, 0, _isRectangle];
_trig setTriggerActivation [_activationBy, _activationType, false];
_trig setVariable ["objects", _objects, true];
if (_checkpoint) then {
	_trig setTriggerStatements [
		"this",
		"[thisTrigger getVariable 'objects', true] call MSF_fnc_ShowHideObjects",
		""
	];	
} else {
	_trig setTriggerStatements [
		"this",
		"private _objs = thisTrigger getVariable 'objects'; [_objs, true] call MSF_fnc_ShowHideObjects; [_objs] call MSF_fnc_OFE_SpawnUnits;",
		""
	];
};
_trig;
