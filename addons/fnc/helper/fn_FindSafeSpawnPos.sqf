/*
	Author: zeik_tuvai

	Description:
		Finds a safe spawn position for units.
    	
	Function Ver 1.0
	Implemented in: MSF Addon v2.1.0
*/
params [["_trigger", objNull, [objNull]]];

private _randPos = [_trigger] call BIS_fnc_randomPosTrigger;
_randPos findEmptyPosition [0, 50];