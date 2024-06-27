/*
	Author: zeik_tuvai

	Description:
		This MSF helper gets all player with the provided attribute set to true.
        
	Examples:
		["MyObjectVariable"] call MSF_fnc_GetPlayersByProperty;

	Function Ver 1.0
	Implemented in: MSF Addon v1.0
*/
params ["_property"];

allPlayers select { _x getVariable _property == true; };