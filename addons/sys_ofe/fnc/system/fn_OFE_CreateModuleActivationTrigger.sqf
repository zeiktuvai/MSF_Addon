params [
	["_logic", objNull, [objNull]],
	["_x", 50, [1]],
	["_y", 50, [1]],
	["_activationBy", "WEST", ["WEST"]],
	["_activationType", "present", ["present"]],
	["_isRectangle", false, [false]],
	["_objects", [], [[]]],
	["_type", "", [""]], 
	["_params", [], [[]]]
];

private _trig = createTrigger ["emptyDetector", getPos _logic];


_trig setTriggerArea [_x, _y, 0, _isRectangle];
_trig setTriggerActivation [_activationBy, _activationType, false];
_trig setVariable ["objects", _objects, true];
_trig setVariable ["type", _type, true];
_trig setVariable ["vars", _params, true];
switch (_type) do {
	case "Checkpoint";
	case "Bastion": { 
		_trig setTriggerStatements [
			"this",
			"[thisTrigger getVariable 'objects', true] call MSF_fnc_ShowHideObjects",
			""
		];
	};
	default {
		_trig setTriggerStatements [
			"this",
			"[thisTrigger] call MSF_fnc_OFE_SpawnLocation;",
			""
		];
	 };
};

_trig;