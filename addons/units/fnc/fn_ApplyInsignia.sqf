/*
	Author: zeik_tuvai

	Description:
		MSF Function. Adds TFY insignia to MSF units on init.  Meant to be used in 
		unit init fields or event handlers.

	Parameter(s):
        object - Unit object (player or unit).        

	Examples:
		[unit] call MSF_fnc_ApplyInsignia;

	Function Ver 1.0
	Implemented in: MSF Addon v1.7
*/

params ["_unit"];

_unit setObjectTexture ["insignia", "z\msf\addons\client\patch\TFY.paa"];