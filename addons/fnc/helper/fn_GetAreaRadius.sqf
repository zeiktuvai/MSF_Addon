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

params [["_obj", objNull, [objNull]], ["_isTrigger", true, [true]]];
private ["_x", "_y"];

if (_isTrigger) then {
	_x = (triggerArea _obj) select 0;
	_y = (triggerArea _obj) select 1;
}
else
{
	_x = (_obj getVariable ["objectArea", [100, 100]]) select 0;
	_y = (_obj getVariable ["objectArea", [100, 100]]) select 1;
};

[_x, _y] select (_x <= _y);