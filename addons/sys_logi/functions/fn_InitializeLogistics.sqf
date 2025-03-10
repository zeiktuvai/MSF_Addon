#include "\z\msf\addons\main\cfg\MSF_Macros.hpp"
[] call MSF_Logi_fnc_SetupUAVSystem;

private _logiInv = createHashMapFromArray [
	["Crate_AmmoResupply", ["Crate_AmmoResupply", "Ammo Resupply Crate", "Spawns an ammo supply crate that adds primary/secondary ammo to a players inventory upon interaction.", "a3\ui_f\data\map\vehicleicons\iconcrateammo_ca.paa", MSF_CARGO_AMMO, -1]],
	["Crate_HeavyAmmo", ["Crate_HeavyAmmo", "Ordinance Crate", "Spawns a supply crate containing grenades and launcher ammo.", "a3\ui_f\data\map\vehicleicons\iconcrateord_ca.paa", MSF_CARGO_ORD, -1]],
	["Crate_Medical", ["Crate_Medical", "Medical Crate", "Spawns an ACE advanced medical crate.", "a3\ui_f\data\map\vehicleicons\iconcrate_ca.paa", MSF_CARGO_MED, -1]],
	["Crate_Food", ["Crate_Food", "Food Crate", "Spawns a supply crate containing ACE Rations", "a3\ui_f\data\map\vehicleicons\iconcrate_ca.paa", MSF_CARGO_FOOD, -1]],
	["BP_Ammo", ["BP_Ammo", "Ammo Bearer Backpack", "Places a backpack filled with ammo for players primary weapons in place of your current backpack", "a3\ui_f\data\igui\cfg\simpletasks\types\backpack_ca.paa", "Backpack", -1]],
	["BP_Medical", ["BP_Medical", "Combat Medic Bag", "Places a backpack with medical supplies in place of your current backpack", "a3\ui_f\data\igui\cfg\simpletasks\types\backpack_ca.paa", "Backpack, -1"]]
];

["MSF", "LogiInventory", _logiInv] call MSF_fnc_SetConfigValue;

//"a3\ui_f\data\map\vehicleicons\iconbackpack_ca.paa"
//"a3\ui_f\data\gui\rsc\rscdisplayarsenal\backpack_ca.paa"