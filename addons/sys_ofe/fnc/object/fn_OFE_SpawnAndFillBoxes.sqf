params [["_objects", [], [[]]], ["_fillCount", 50, [1]]];

private _str = 1 - ([] call MSF_fnc_OFE_CalculateStrengthValues select 2);
private _boxTypes = [] call MSF_fnc_OFE_GetCargoClasses select 0;
private _boxes = [];

{
	private _box = selectRandom _boxTypes createVehicle position _x;
	[_box, _fillCount * _str] call MSF_fnc_OFE_FillContainers;
	_boxes pushBack _box;
} forEach _objects;

_boxes;