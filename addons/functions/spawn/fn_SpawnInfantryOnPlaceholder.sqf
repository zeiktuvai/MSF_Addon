params [["_unitTypes", [], [[]]], ["_objects", [], [[]]], ["_side", east, [east]]];

private _group = createGroup [_side, true];

{
	(selectRandom _unitTypes) createUnit [getPos _x, _group];
} forEach _objects;

{ _x disableAI "path"; } forEach units _group;

units _group;
