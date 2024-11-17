params [["_objects", [], [[]]]];

private _boxTypes = ["Box_FIA_Ammo_F", "Box_FIA_Support_F", "Box_FIA_Wps_F"];
private _boxes = [];

{
	private _box = selectRandom _boxTypes createVehicle position _x;
	[_box, 20, !_supply] call MSF_fnc_OFE_FillContainers;
	_boxes pushBack _box;
} forEach _objects;

_boxes;