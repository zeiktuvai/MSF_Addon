/*
	Author: zeik_tuvai

	Description:
		This MSF helper gets all vehicles with the provided attribute set to true.
	
	Properties:
		string - Property name
		int - comparison value
		bool - false for > (default) true for <

	Examples:
		["MyObjectVariable"] call MSF_fnc_GetVehiclesByProperty;

	Function Ver 1.0
	Implemented in: MSF Addon v1.0
*/
params ["_property", "_value", ["_comparer", false, [false]]];

if (_comparer) then {
	vehicles select { _x getVariable _property < _value; };
} else {
	vehicles select { _x getVariable _property > _value; };
};