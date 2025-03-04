params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

{
	[_x] call MSF_Logi_fnc_SetupRearmInteraction;
} forEach _units;
