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
	Implemented in: MSF Addon v2.0
*/

params ["_unit"];

[_unit, ""] call BIS_fnc_setUnitInsignia; 
[_unit, "tfy_insignia"] call BIS_fnc_setUnitInsignia;