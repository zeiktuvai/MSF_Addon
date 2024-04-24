/*
	Author: zeik_tuvai

	Description:
		This MSF helper gets all vehicles with the provided attribute set to true.

	Properties:
	  	string - Property name    
	
	Examples:
		["MyObjectVariable"] call MSF_fnc_GetVehiclesByProperty;

	Function Ver 1.0
	Implemented in: MSF Addon v1.0
*/
params ["_property"];

vehicles select { _x getVariable _property == true; };