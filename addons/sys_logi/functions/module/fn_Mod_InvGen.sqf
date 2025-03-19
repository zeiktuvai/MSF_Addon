params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _clear = _logic getVariable ["Clear", true];
private _count = _logic getVariable ["ItemCount", 25];
private _fill = _logic getVariable ["Fill", false];
private _magW = _logic getVariable ["MagWeight", 1];
private _launW = _logic getVariable ["LauncherWeight", 1];
private _grenW = _logic getVariable ["GrenadeWeight", 1];
private _attchW = _logic getVariable ["AttachWeight", 1];
private _medW = _logic getVariable ["MedicalWeight", 1];
private _foodW = _logic getVariable ["FoodWeight", 1];
private _weights = [_magW, _launW, _grenW, _attchW, _medW, _foodW];

private _compatUnits = _units select { _x isKindOf "LandVehicle" || _x isKindOf "Air" || _x isKindOf "Ship" || _x isKindOf "ThingX"};

{
	[_x, _clear, _count, _fill, _weights] call MSF_Logi_fnc_GenerateInventory;
	_x setVariable ["MSF_Logi_isInventory", true];
	_x setVariable ["MSF_Logi_InvGen", [_clear, _count, _fill, _weights]];
} forEach (_compatUnits select { maxLoad _x > 0 });