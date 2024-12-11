params [["_vicTypes", [], [[]]], ["_objects", [], [[]]]];

private _vics = [];

{
	private _vic = selectRandom _vicTypes createVehicle position _x;	
	private _dirPlaceholders = nearestObjects [_vic, ["MSF_Placeholder_Direction"], 2.5];
	
	if (count _dirPlaceholders > 0) then {
		private _dir = _x getRelDir (_dirPlaceholders select 0);	
		_x setDir (getDir _x + _dir);		
	};

	_vics pushBack _vic;
} forEach _objects;

_vics;