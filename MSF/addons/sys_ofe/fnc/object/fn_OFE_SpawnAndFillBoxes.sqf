params [["_objects", [], [[]]]];

private _boxTypes = [] call MSF_fnc_OFE_GetCargoClasses select 0;
private _boxes = [];

{
	private _box = selectRandom _boxTypes createVehicle position _x;
	[_box, 20] call MSF_fnc_OFE_FillContainers;
	_boxes pushBack _box;
} forEach _objects;

_boxes;