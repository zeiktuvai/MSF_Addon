/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This helper picks the largest radius of a trigger.

	Parameters:
		Object: Trigger to calculate radius.
	
	Examples:
		[Trigger Objct] call MSF_fnc_GetAreaRadius;

	Function Ver 1.0
	Implemented in: MSF Addon v1.5.2
*/

params [["_trigger", objNull, [objNull], 1]];

private _x = triggerArea _trigger select 0;
private _y = triggerArea _trigger select 1;

private _radius = [_x, _y] select (_x <= _y);

_radius;