params [
	["_logic", objNull, [objNull]],
	["_x", 50, [1]],
	["_y", 50, [1]],
	["_activationBy", "WEST", ["WEST"]],
	["_activationType", "present", ["present"]],
	["_isRectangle", false, [false]],
	["_objects", [], [[]]],
	["_type", "", [""]], 
	["_params", [], [[]]],
	["_intelID", "", [""]]
];

private _actStatement = {
	[thisTrigger getVariable "objects", true] call MSF_fnc_ShowHideObjects;
};

private _poiDeactStatement = {
	private _objs = thisTrigger getVariable "objects";
	_objs select { _x isKindOf "vehicle"};
	[, false] call MSF_fnc_ShowHideObjects;
};

private _intelAct = {
	private _intelID = thisTrigger getVariable "IntelID";
	if (_intelID != "") then {
		[_intelID] call MSF_Intel_fnc_GetDiscoveredIntelItem;
	};
};

private _trig = createTrigger ["emptyDetector", getPos _logic];

_trig setTriggerArea [_x, _y, 0, _isRectangle];
_trig setTriggerActivation [_activationBy, _activationType, false];
_trig setVariable ["objects", _objects, true];
_trig setVariable ["type", _type, true];
_trig setVariable ["vars", _params, true];
_trig setVariable ["IntelID", _intelID, true];
switch (_type) do {
	case "Checkpoint";
	case "Bastion": { 
		_trig setTriggerStatements [
			"this",
			toString _actStatement + toString _intelAct,
			""
		];
	};
	case "POI": { 
		_trig setTriggerStatements [
			"this",
			toString _actStatement + toString _intelAct,
			toString _poiDeactStatement
		];
		_trig setTriggerActivation [_activationBy, _activationType, true];
	};
	default {
		_trig setTriggerStatements [
			"this",
			"[thisTrigger] call MSF_fnc_OFE_SpawnLocation;" + toString _intelAct,
			""
		];
	 };
};

_trig;