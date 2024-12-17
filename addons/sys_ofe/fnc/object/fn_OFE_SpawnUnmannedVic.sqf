params [["_vicTypes", [], [[]]], ["_objects", [], [[]]]];

private _vics = [];

{
	private _vic = selectRandom _vicTypes createVehicle position _x;
	[_vic] call MSF_fnc_OFE_SetSpawnDir;
	
	_vics pushBack _vic;
} forEach _objects;

_vics;