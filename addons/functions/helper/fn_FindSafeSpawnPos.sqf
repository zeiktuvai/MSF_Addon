/*
	Author: zeik_tuvai

	Description:
		Finds a safe spawn position for units.
    	
	Function Ver 1.1
	Implemented in: MSF Addon v2.1.0
*/
params [["_trigger", objNull, [objNull]]];

private _found = false;
private _randPos = [];

// private _randPos = [_trigger] call BIS_fnc_randomPosTrigger;
//_randPos findEmptyPosition [0, 50];

// _pos inArea [position pt1, 100, 100, 0, false];

while {!_found} do {
	private _check = [_trigger] call BIS_fnc_randomPosTrigger;
	private _intersect = false;	

	{
		if (_check inArea [position _x, 100, 100, 0, false]) then {
			_intersect = true;
		};
	} forEach allPlayers;
	
	if (!_intersect) then 
	{
		_found = true;
		_randPos = _check;
	};
};
