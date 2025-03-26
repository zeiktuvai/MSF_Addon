params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

{
	[_x] call MSF_Logi_fnc_InitializeSupplyTruck;	
	_x setVariable ["MSF_Logi_isSupplyTruck", true];
} forEach _units;