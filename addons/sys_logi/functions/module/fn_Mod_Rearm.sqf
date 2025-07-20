params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

{
	[_x] call MSF_Logi_fnc_SetupRearmInteraction;
	_x setVariable ["MSF_Logi_isRarm", true];
} forEach _units;
