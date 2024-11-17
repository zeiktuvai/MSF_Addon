params [["_unitTypes", [], [[]]], ["_objects", [], [[]]], ["_group", objNull, [objNull]]];

{
	(selectRandom _unitTypes) createUnit [getPos _x, _group];
} forEach _objects;