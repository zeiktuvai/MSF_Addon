params [
	["_logic", objNull, [objNull]],
	["_units", [], [[]]],
	["_activated", true, [true]]
];

private _area = [_logic, false] call MSF_fnc_GetAreaRadius;	
hint str (nearestObjects [position _logic, ["Module_F"], _area]);