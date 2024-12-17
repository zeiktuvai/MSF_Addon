params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _EnemySide = _logic getVariable ["EnemySide", 0];
missionNamespace setVariable ["MSF_OFE_EnemyFaction", _EnemySide, true];