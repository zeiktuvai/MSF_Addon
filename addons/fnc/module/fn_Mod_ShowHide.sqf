params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

_units = [_units, synchronizedObjects _logic select { _x isKindOf "EmptyDetector" } select 0] call MSF_fnc_GetShowHideVehicleInTrigger;

if (_activated) then {
	[_units, true] call MSF_fnc_ShowHideObjects;
} else {
	[_units, false] call MSF_fnc_ShowHideObjects;
};