params [["_objects", [], [[]]], ["_fillCount", 50, [1]], ["_type", "", [""]], ["_isOFE", true, [true]], ["_weaponClasses", [], [[]]]];


private _str = 1;
private _boxTypes = ["cargo"] call MSF_fnc_GetConfigData get _type;
private _probabilities = [];
private _boxes = [];
private _weapTypes = [];

if (_isOFE) then {
	_str = 1 - ([] call MSF_fnc_OFE_CalculateStrengthValues select 2);
};

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
		default { [_box, true, round (_fillCount * _str), false, _probabilities] call MSF_Logi_fnc_GenerateInventory; };
	};

	_boxes pushBack _box;
} forEach _objects;

if (_type == "Armory") then {
	[_boxes, _weapTypes];
} else {
	_boxes;
};
