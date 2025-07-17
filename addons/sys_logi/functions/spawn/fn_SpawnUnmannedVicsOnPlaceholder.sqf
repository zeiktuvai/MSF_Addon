params [["_vicTypes", [], [[]]], ["_objects", [], [[]]]];

private _vics = [];

{
	private _vic = selectRandom _vicTypes createVehicle position _x;
	[_vic] call MSF_Loc_fnc_SetObjectDir;
	
	_vics pushBack _vic;
} forEach _objects;

_vics;
