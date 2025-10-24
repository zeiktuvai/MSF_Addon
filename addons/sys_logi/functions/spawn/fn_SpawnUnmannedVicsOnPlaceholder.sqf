params [["_vicTypes", [], [[]]], ["_objects", [], [[]]]];

private _vics = [];

{
	private _vic = selectRandom _vicTypes createVehicle position _x;
	_vic setDir direction _x;
	
	_vics pushBack _vic;
} forEach _objects;

_vics;
