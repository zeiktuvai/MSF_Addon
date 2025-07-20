params [["_array", [], [[]]], ["_startValue", 1, [1]]];

private _count = count _array;
private _slct = _startValue;
private _idx = 0;
private _sorted = [];

for "_i" from 1 to _count do
{
  _idx = _array find _slct;
  _sorted pushBack _slct;
  
  if (_idx == (_count - 1)) then {
    _idx = -1;
  };

  _slct = _array select (_idx + 1);
};

_sorted
