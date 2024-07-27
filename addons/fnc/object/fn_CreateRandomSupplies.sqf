/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This creates a supply box, vehicle ammo crate and fuel canisters in a trigger area.

	Function Ver 1.0
	Implemented in: MSF Addon v2.1.0
*/
params [["_trigger", objNull, [objNull]]];

private _min = _trigger getVariable ["MSF_Trig_Supply_VicAmmo_Min", 500];
private _max = _trigger getVariable ["MSF_Trig_Supply_VicAmmo_Max", 1000];
private _supplyCount = _trigger getVariable ["MSF_Trig_Supply_Items_Num", 25];
private _fuelCount = _trigger getVariable ["MSF_Trig_Supply_Fuel_Count", 5];
private _wmag = _trigger getVariable ["MSF_Trig_Supply_Items_MagWeight", 1];
private _wlau = _trigger getVariable ["MSF_Trig_Supply_Items_LauncherWeight", 1];
private _wgre = _trigger getVariable ["MMSF_Trig_Supply_Items_GrenadeWeight", 1];
private _wmed = _trigger getVariable ["MSF_Trig_Supply_Items_MedicalWeight", 1];
private _wfoo = _trigger getVariable ["MSF_Trig_Supply_Items_FoodWeight", 1];
private _probability = [_wmag, _wlau, _wgre, _wmed, _wfoo];

private _position = 

// Create supply cache
if (_trigger getVariable ["MSF_Trig_Supply_Items", true]) then {
	private _box = "VirtualReammoBox_camonet_F" createVehicle ([_trigger] call MSF_fnc_FindOutsidePositionInTrigger);
	
	// Fill box with supplies
	[_box, _supplyCount, false, _probability] call MSF_fnc_GenerateRandomInventory;
};

// Spawn vehicle ammo box
if (_trigger getVariable ["MSF_Trig_Supply_VehicleAmmo", true]) then {
	private _vicAmmo = "Box_NATO_AmmoVeh_F" createVehicle ([_trigger] call MSF_fnc_FindOutsidePositionInTrigger);

	// Set vehicle ammo box amount
	[_vicAmmo, parseNumber((random [_min, (_min+_max) / 2, _max]) toFixed 0)] call ace_rearm_fnc_setSupplyCount;
};

// Create fuel canisters.
if (_trigger getVariable ["MSF_Trig_Supply_Fuel", true]) then {
	for "_i" from 1 to _fuelCount do {
		"Land_CanisterFuel_Red_F" createVehicle ([_trigger] call MSF_fnc_FindOutsidePositionInTrigger);
	};
};