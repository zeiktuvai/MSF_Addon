/*
	Author: zeik_tuvai

	Description:
		MSF Function. Adds a TFAR radio in place of a regular radio.

	Parameter(s):
        object - Unit object (player or unit).        

	Examples:
		[unit] call MSF_fnc_ApplyInsignia;

	Function Ver 1.0
	Implemented in: MSF Addon v2.0
*/
params ["_unit"];

private _radio = getMissionConfigValue ["MSF_Radio_TFAR", false];

if (_radio && side _unit == west) then {
	_unit linkItem "TFAR_anprc152";
};