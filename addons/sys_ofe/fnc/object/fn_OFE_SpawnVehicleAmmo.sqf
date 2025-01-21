params [["_objects", [], [[]]], ["_value", 500, [500]]];

private _boxTypes =  ([3] call MSF_fnc_GetConfigClasses) select 1;
private _boxes = [];

{
	private _box = selectRandom _boxTypes createVehicle position _x;
	[_box, _value] call ace_rearm_fnc_setSupplyCount;
	_boxes pushBack _box;
} forEach _objects;

_boxes;