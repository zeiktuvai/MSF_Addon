params [["_unitTypes", [], [[]]], ["_objects", [], [[]]], ["_group", objNull, [objNull]]];

{
	{
		_group createUnit [(selectRandom _unitTypes), _x, [], 0, "NONE"];
	} forEach (_x buildingPos -1);
} forEach (_objects select {_x isKindOf "House_F"});