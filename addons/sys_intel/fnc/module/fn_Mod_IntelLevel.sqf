params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _level = _logic getVariable ["IntelLevel", 1];

if (_activated) then {
	[_level] call MSF_Intel_fnc_SetIntelLevel;
};