params [["_array", [], [[]]], ["_comperator", "", [""]], ["_value", [], [[]]]];

private _idx = _array findIf {{ if (_x isEqualTo _comperator) exitWith {true}; } forEach _x};

if (_idx != -1) then {
	{
		if (_x != _value # _forEachIndex) then {
			(_array # _idx) set [_forEachIndex,  _value # _forEachIndex];
		};
	} forEach (_array # _idx);	
}
else
{
	_array pushBack _value;
};

_array