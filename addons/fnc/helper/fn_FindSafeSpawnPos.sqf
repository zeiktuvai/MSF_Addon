params [["_trigger", objNull, [objNull]]];

private _randPos = [_trigger] call BIS_fnc_randomPosTrigger;
_randPos findEmptyPosition [0, 50];