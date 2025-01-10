params [["_objects", [], [[]]], ["_value", 500, [500]]];

private _boxTypes =  ([] call MSF_fnc_GetCargoClasses) select 1;
private _boxes = [];

{
	private _box = selectRandom _boxTypes createVehicle position _x;
	[_box, _value] call ace_rearm_fnc_setSupplyCount;
	_boxes pushBack _box;
} forEach _objects;

_boxes;