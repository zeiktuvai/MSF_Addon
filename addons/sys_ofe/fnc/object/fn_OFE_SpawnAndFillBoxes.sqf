params [["_objects", [], [[]]], ["_fillCount", 50, [1]], ["_type", "", [""]], ["_isOFE", true, [true]], ["_weaponClasses", [], [[]]]];

private _str = 1;
private _cargoTypes = [3] call MSF_fnc_GetConfigClasses;
private _boxTypes = [];
private _probabilities = [];
private _boxes = [];
private _weapTypes = [];

if (_isOFE) then {
	_str = 1 - ([] call MSF_fnc_OFE_CalculateStrengthValues select 2);
};

switch (_type) do {
	case "Supply": { _boxTypes = _cargoTypes select 0; _probabilities = [1,1,1,1,1]; };
	case "Medical": { _boxTypes = _cargoTypes select 2; _probabilities = [0,0,0,1,0]; };
	case "Food": { _boxTypes = _cargoTypes select 3; _probabilities = [0,0,0,0,1];};
	case "Armory": { _boxTypes = _cargoTypes select 4;};
	case "Ammo": { _boxTypes = _cargoTypes select 5;};
	default { _boxTypes = _cargoTypes select 0; _probabilities = [1,1,1,1,1]; };
};

{
	private _box = createVehicle  [selectRandom _boxTypes, position _x, [], 0, "CAN_COLLIDE"];
	
	switch (_type) do {
		case "Armory": { _weapTypes = [_box, _fillCount] call MSF_fnc_GenerateRandomArmory; };
		case "Ammo": { [_box, _weaponClasses] call MSF_fnc_GenerateArmoryAmmo; };
		default { [_box, round (_fillCount * _str), false, _probabilities] call MSF_fnc_GenerateRandomInventory; };
	};

	_boxes pushBack _box;
} forEach _objects;

if (_type == "Armory") then {
	[_boxes, _weapTypes];
} else {
	_boxes;
};