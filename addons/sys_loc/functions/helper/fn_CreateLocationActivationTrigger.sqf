params [["_logic", objNull, [objNull]],	["_x", 50, [1]], ["_y", 50, [1]], ["_activationBy", west, [west]], ["_activationType", "present", ["present"]],
	["_isRectangle", false, [false]], ["_objects", [], [[]]], ["_type", "", [""]], ["_params", [], [[]]], ["_intelID", "", [""]]];

private ["_intelAct"];
private _actStatement = {
	[thisTrigger] call MSF_fnc_OFE_SpawnLocation;
};

private _hideStatement = {
	private _objs = thisTrigger getVariable 'objects';
	_objs = [_objs, thisTrigger] call MSF_fnc_GetShowHideVehicleInTrigger;
	[_objs, false] call MSF_fnc_ShowHideObjects;
};

if (getMissionConfigValue ["MSF_Intel_EnableDiscovery", true]) then
{
	_intelAct = {
		private _intelID = thisTrigger getVariable "IntelID";
		if (_intelID != "") then {
			[_intelID] call MSF_Intel_fnc_GetDiscoveredIntelItem;
		};
	};
};

private _trig = createTrigger ["emptyDetector", getPos _logic];

_trig setTriggerArea [_x, _y, 0, _isRectangle];
_trig setTriggerActivation [[_activationBy] call BIS_fnc_sideNameUnlocalized, _activationType, false];
_trig setVariable ["objects", _objects, true];
_trig setVariable ["type", _type, true];
_trig setVariable ["vars", _params, true];
_trig setVariable ["IntelID", _intelID, true];

if (_type isEqualTo "POI") then 
{
	_trig setTriggerStatements [
		"this",
		toString _actStatement + toString _intelAct,
		toString _hideStatement
		//"[thisTrigger getVariable 'objects', false] call MSF_fnc_ShowHideObjects;"
	];
	_trig setTriggerActivation [[_activationBy] call BIS_fnc_sideNameUnlocalized, _activationType, true];
}
else
{
	_trig setTriggerStatements [
		"this",
		toString _actStatement + toString _intelAct,			
		""
	];

};

_trig;
