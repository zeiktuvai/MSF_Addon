params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _position = position _logic;
private _area = _logic getVariable ["objectArea", [0,0,0,false,-1]];
private _isRectangle = (_logic getVariable ["objectArea", [0,0,0,false]]) select 3;
private _height = _area select 4;
private _activationSide = _logic getVariable ["ActivationSide", 1];

private _supply = _logic getVariable ["SpawnItems", true];
private _ammo = _logic getVariable ["SpawnVehicleAmmo", true];
private _fuel = _logic getVariable ["SpawnFuel", true];
private _supplyCount = _logic getVariable ["NumItems", 50];
private _wmag = _logic getVariable ["MagWeight", 1];
private _wlau = _logic getVariable ["LauncherWeight", 1];
private _wgre = _logic getVariable ["GrenadeWeight", 1];
private _wmed = _logic getVariable ["MedicalWeight", 1];
private _wfoo = _logic getVariable ["FoodWeight", 1];
private _min = _logic getVariable ["VicAmmoMin", 500];
private _max = _logic getVariable ["VicAmmoMax", 1000];
private _fuelCount = _logic getVariable ["FuelCount", 5];

if ((_area select 0) + (_area select 1) >= 100) then {
	[_area select 0, _area select 1, _height, _position, [str ([_activationSide] call BIS_fnc_sideType), "PRESENT"], ["this",
		"[thisTrigger] spawn { params [""_trigger""]; [_trigger] call MSF_fnc_CreateRandomSupplies; };",""],
		_isRectangle, false, false,
		[_supply, _ammo, _fuel, _supplyCount, _wmag, _wlau, _wgre, _wmed, _wfoo, _min, _max, _fuelCount]
	] call MSF_fnc_CreateActivationTrigger;	
};
	