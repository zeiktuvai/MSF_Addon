params [["_objects", [], [[]]], ["_fillCount", 50, [1]], ["_type", "", [""]], ["_weaponClasses", [], [[]]]];

private ["_probabilities", "_weapTypes"];
private _boxTypes = ["cargo"] call MSF_fnc_GetConfigData get _type;
private _boxes = [];

switch (_type) do {
	case "Supply": { _probabilities = [0.25,0.1,0.15,0,1,0.5]; };
	case "Medical": { _probabilities = [0,0,0,0,1,0]; };
	case "Food": { _probabilities = [0,0,0,0,0,1]; };
	default { _probabilities = [0.25,0.1,0.15,0,1,0.5]; };
};

{
	private _box = createVehicle [selectRandom _boxTypes, position _x, [], 0, "CAN_COLLIDE"];
	
	switch (_type) do {
		case "Armory": { _weapTypes = [_box, _fillCount] call MSF_Logi_fnc_GenerateRandomArmory; };
		case "Ammo": { [_box, _weaponClasses] call MSF_Logi_fnc_GenerateArmoryAmmo; };
		default { [_box, true, _fillCount, false, _probabilities] call MSF_Logi_fnc_GenerateInventory; };
	};

	_boxes pushBack _box;
} forEach _objects;

if (_type == "Armory") then {
	[_boxes, _weapTypes];
} else {
	_boxes;
};
