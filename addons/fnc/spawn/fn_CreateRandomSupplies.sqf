/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This creates a supply box, vehicle ammo crate and fuel canisters in a trigger area.

	Function Ver 1.0
	Implemented in: MSF Addon v2.1.0
*/
params [["_trigger", objNull, [objNull]]];

private _vals = _trigger getVariable ["module_params", []];
_vals params ["_supply", "_ammo", "_fuel", "_supplyCount", "_wmag", "_wlau", "_wgre", "_wmed", "_wfoo", "_min", "_max", "_fuelCount"];

private _probability = [_wmag, _wlau, _wgre, _wmed, _wfoo];

private _position = position _trigger;

// Create supply cache
if (_supply) then {
	private _box = "VirtualReammoBox_camonet_F" createVehicle (_position findEmptyPosition [5, 50, "VirtualReammoBox_camonet_F"]);
	
	// Fill box with supplies
	[_box, _supplyCount, false, _probability] call MSF_fnc_GenerateRandomInventory;
};

// Spawn vehicle ammo box
if (_ammo) then {
	private _vicAmmo = "Box_NATO_AmmoVeh_F" createVehicle (_position findEmptyPosition [5, 50, "Box_NATO_AmmoVeh_F"]);

	// Set vehicle ammo box amount
	[_vicAmmo, parseNumber((random [_min, (_min+_max) / 2, _max]) toFixed 0)] call ace_rearm_fnc_setSupplyCount;
};

// Create fuel canisters.
if (_fuel) then {
	for "_i" from 1 to _fuelCount do {
		"Land_CanisterFuel_Red_F" createVehicle (_position findEmptyPosition [5, 50, "Land_CanisterFuel_Red_F"]);
	};
};