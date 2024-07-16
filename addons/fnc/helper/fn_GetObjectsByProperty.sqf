/*
	Author: zeik_tuvai

	Description:
		This MSF helper gets all objects with the provided attribute set to true.
        
	Examples:
		["MyObjectVariable"] call MSF_fnc_GetObjectsByProperty;

	Function Ver 1.0
	Implemented in: MSF Addon v2.0
*/
params ["_property"];

allMissionObjects "" select { _x getVariable _property == true; };