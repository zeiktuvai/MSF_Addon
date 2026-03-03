params [["_array", [], [[]]]];

private _sum = 0;
{if (typeName _x == "SCALAR") then {_sum = _sum + _x}} forEach _array;
_sum;
