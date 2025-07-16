params [["_unitTypes", [], [[]]], ["_objects", [], [[]]], "_group"];

{
	(selectRandom _unitTypes) createUnit [getPos _x, _group];
} forEach _objects;

{
    _x disableAI "path";
} forEach units _group;
