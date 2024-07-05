/*
	Author: zeik_tuvai

	Description:
		MSF Function. Adds event handler to add TFY insignia to MSF units on respawn.  Meant to be used in 
		unit init fields or event handlers.

	Parameter(s):
        object - Unit object (player or unit).        

	Examples:
		[unit] call MSF_fnc_SetInsigniaHandler;

	Function Ver 1.0
	Implemented in: MSF Addon v2.0
*/

params ["_unit"];

_unit addMPEventHandler ["MPRespawn", {
 	params ["_unit"]; 
 
 	[_unit] spawn {
   		params ["_unit"]; 

   		uiSleep 1;
   		[_unit] call MSF_fnc_ApplyInsignia;  
	};
}];