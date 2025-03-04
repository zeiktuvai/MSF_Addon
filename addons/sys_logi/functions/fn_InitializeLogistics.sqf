[] call MSF_Logi_fnc_SetupUAVSystem;

private _logiInv = createHashMapFromArray [
	["Crate_AmmoResupply", ["Crate_AmmoResupply", "Ammo Resupply Crate", "a3\ui_f\data\map\vehicleicons\iconcrateammo_ca.paa", "Ammo", -1]],
	["Crate_Medical", ["Crate_Medical", "Medical Crate", "a3\ui_f\data\map\vehicleicons\iconcrate_ca.paa", "Medical", -1]],
	["Crate_HeavyAmmo", ["Crate_HeavyAmmo", "Ordinance Crate", "a3\ui_f\data\map\vehicleicons\iconcrateord_ca.paa", "Armory", -1]]
];

["MSF", "LogiInventory", _logiInv] call MSF_fnc_SetConfigValue;

//ace_dragging_canCarry = 1;