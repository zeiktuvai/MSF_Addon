params [["_objects", [], [[]]], ["_value", 500, [500]]];

private _boxTypes = ["Box_IND_AmmoVeh_F", "Box_East_AmmoVeh_F", "Box_EAF_AmmoVeh_F", "Box_NATO_AmmoVeh_F"];
private _boxes = [];

{
	private _box = selectRandom _boxTypes createVehicle position _x;
	[_box, _value] call ace_rearm_fnc_setSupplyCount;
	_boxes pushBack _box;
} forEach _objects;

_boxes;