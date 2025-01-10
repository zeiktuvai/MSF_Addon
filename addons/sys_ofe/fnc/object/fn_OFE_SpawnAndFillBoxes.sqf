params [["_objects", [], [[]]], ["_fillCount", 50, [1]], ["_type", 0, [0]], ["_isOFE", true, [true]]];

private _str = 1;
private _cargoTypes = [] call MSF_fnc_GetCargoClasses;
private _boxTypes = [];
private _probabilities = [];
private _boxes = [];

if (_isOFE) then {
	_str = 1 - ([] call MSF_fnc_OFE_CalculateStrengthValues select 2);
};

switch (_type) do {
	case 0: { _boxTypes = _cargoTypes select 0; _probabilities = [1,1,1,1,1]; }; //supply box
	case 1: { _boxTypes = _cargoTypes select 2; _probabilities = [0,0,0,1,0]; }; //med box
	case 2: { _boxTypes = _cargoTypes select 3; _probabilities = [0,0,0,0,1];}; //food box
	default { _boxTypes = _cargoTypes select 0; _probabilities = [1,1,1,1,1]; };
};

{
	private _box = selectRandom _boxTypes createVehicle position _x;
	
	[_box, round (_fillCount * _str), false, _probabilities] call MSF_fnc_GenerateRandomInventory;
	_boxes pushBack _box;
} forEach _objects;

_boxes;