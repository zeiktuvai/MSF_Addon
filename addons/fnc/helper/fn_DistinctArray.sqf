params [["_array", [], [[]]]];

private _list = [];

{
	if (!(_x in _list)) then {
		_list pushBack _x;
	};
} forEach _array; 

_list;