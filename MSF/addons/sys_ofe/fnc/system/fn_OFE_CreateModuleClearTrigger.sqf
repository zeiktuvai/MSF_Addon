params [
	["_logic", objNull, [objNull]],
	["_x", 50, [1]],
	["_y", 50, [1]]	
];

private _faction = missionNamespace getVariable ["MSF_OFE_EnemyFaction", 0];
private _trig = createTrigger ["emptyDetector", getPos _logic];
_trig setTriggerArea [_x, _y, 0, false];
_trig setTriggerActivation [[_faction] call BIS_fnc_sideNameUnlocalized, "NOT PRESENT", false];
_trig setTriggerStatements [
	"this && player inArea thisTrigger",
	"private _count = missionNamespace getVariable ['MSF_OFE_cpClear', 0]; _count = _count + 1; missionNamespace setVariable ['MSF_OFE_cpClear', _count, true];",
	""
];
_trig;