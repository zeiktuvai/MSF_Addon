params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

if (_activated) then {
	[_units, true] call MSF_fnc_ShowHideObjects;
} else {
	[_units, false] call MSF_fnc_ShowHideObjects;
};