params [["_trigger", objNull, [objNull]], ["_count", 10, [10]], ["_diameter", 1000, [1]], ["_circle", false, [false]]];

private _minDivisor = [0.25, 0.75] select _circle;
private _rad = 360 / _count;
private _min = _diameter * _minDivisor;
private _max = _diameter - 20;
private _mid = (_min - 20) / 2;
private _rads = [];
private _positions = [];

for "_i" from 1 to _count do
{
  _rads pushBack (_rad * _i);  
};

private _sortedRads = [_rads, selectRandom _rads] call MSF_fnc_OrderArrayByStartingValue;

{
	_positions pushBack (_trigger getRelPos [random [_min, _mid, _max], _x]);	
	
} forEach _sortedRads;

_positions;
