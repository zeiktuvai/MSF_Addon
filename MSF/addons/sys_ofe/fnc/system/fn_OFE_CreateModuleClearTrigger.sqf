params [
	["_logic", objNull, [objNull]],
	["_x", 50, [1]],
	["_y", 50, [1]],
	["_type", 0, [0]]
];

private ["_clearVar"];
private _faction = missionNamespace getVariable ["MSF_OFE_EnemyFaction", 0];
private _trig = createTrigger ["emptyDetector", getPos _logic];

switch (_type) do {
	case 0: { _clearVar = "MSF_OFE_cpClear"; };
	case 1: { _clearVar = "MSF_OFE_opClear"; };
	case 2: { _clearVar = "MSF_OFE_baseClear"; };
	case 3: { _clearVar = "MSF_OFE_baseClear"; };
	default { _clearVar = "MSF_OFE_airbaseClear"; };
};

_trig setTriggerArea [_x, _y, 0, false];
_trig setTriggerActivation [[_faction] call BIS_fnc_sideNameUnlocalized, "NOT PRESENT", false];
_trig setTriggerStatements [
	"this && count (allPlayers select { _x inArea thisTrigger}) > 0",
	format ["private _count = missionNamespace getVariable ['%1', 0]; _count = _count + 1; missionNamespace setVariable ['%1', _count, true];", _clearVar],
	""
];
_trig;