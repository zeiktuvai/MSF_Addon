#include "\z\msf\addons\main\cfg\MSF_Macros.hpp"
[] call MSF_Logi_fnc_SetupUAVSystem;

private _logiInv = createHashMapFromArray [
	["Crate_AmmoResupply", ["Crate_AmmoResupply", "Ammo Resupply Crate", "a3\ui_f\data\map\vehicleicons\iconcrateammo_ca.paa", MSF_CARGO_AMMO, -1]],
	["Crate_HeavyAmmo", ["Crate_HeavyAmmo", "Ordinance Crate", "a3\ui_f\data\map\vehicleicons\iconcrateord_ca.paa", MSF_CARGO_ORD, -1]],
	["Crate_Medical", ["Crate_Medical", "Medical Crate", "a3\ui_f\data\map\vehicleicons\iconcrate_ca.paa", MSF_CARGO_MED, -1]],
	["Crate_Food", ["Crate_Food", "Food Crate", "a3\ui_f\data\map\vehicleicons\iconcrate_ca.paa", MSF_CARGO_FOOD, -1]]
];

["MSF", "LogiInventory", _logiInv] call MSF_fnc_SetConfigValue;
