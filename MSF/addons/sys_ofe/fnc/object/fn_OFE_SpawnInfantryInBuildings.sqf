params [["_unitTypes", [], [[]]], ["_objects", [], [[]]], "_group", ["_count", 0, [0]]];

{
	private _i = 0;
	{
		_group createUnit [(selectRandom _unitTypes), _x, [], 0, "NONE"];
		_i = _i + 1;
		if (_count > 0 && _i >= _count) exitWith {};
	} forEach (_x buildingPos -1);
} forEach (_objects select {_x isKindOf "House_F"});