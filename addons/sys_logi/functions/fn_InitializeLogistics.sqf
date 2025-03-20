#include "\z\msf\addons\main\cfg\MSF_Macros.hpp"

if (isServer) then {
	[] call MSF_Logi_fnc_SetupUAVSystem;

	private _logiInv = createHashMapFromArray [
		["Crate_AmmoResupply", ["Crate_AmmoResupply", "Ammo Resupply Crate", "Spawns an ammo supply crate that adds primary/secondary ammo to a players inventory upon interaction.", "a3\ui_f\data\map\vehicleicons\iconcrateammo_ca.paa", MSF_CARGO_AMMO, true]],
		["Crate_HeavyAmmo", ["Crate_HeavyAmmo", "Ordinance Crate", "Spawns a supply crate containing grenades and launcher ammo.", "a3\ui_f\data\map\vehicleicons\iconcrateord_ca.paa", MSF_CARGO_ORD, true]],
		["Crate_Medical", ["Crate_Medical", "Medical Crate", "Spawns an ACE advanced medical crate.", "a3\ui_f\data\map\vehicleicons\iconcrate_ca.paa", MSF_CARGO_MED, true]],
		["Crate_Food", ["Crate_Food", "Food Crate", "Spawns a supply crate containing ACE Rations", "a3\ui_f\data\map\vehicleicons\iconcrate_ca.paa", MSF_CARGO_FOOD, true]],
		["BP_Ammo", ["BP_Ammo", "Ammo Bearer Backpack", "Places a backpack filled with ammo for players primary weapons in place of your current backpack", "a3\ui_f\data\igui\cfg\simpletasks\types\backpack_ca.paa", "BP_Ammo", true]],
		["BP_Medical", ["BP_Medical", "Combat Medic Backpack", "Places a backpack with medical supplies in place of your current backpack", "a3\ui_f\data\igui\cfg\simpletasks\types\backpack_ca.paa", "BP_Medical", true]],
		["BP_Std", ["BP_Std", "Standard Backpack", "Places a backpack with a standard set of items in place of your current backpack", "a3\ui_f\data\igui\cfg\simpletasks\types\backpack_ca.paa", "BP_Std", true]],
		["V_Medical", ["V_Medical", "Vehicle Air-Drop: Ambulance", "Allows you to call in an Ambulance Air-drop. (Only a limited number of these can be used based on available logistics support).", "a3\soft_f_epc\truck_03\data\ui\truck_03_medevac_ca.paa", "V_Medical", false]],
		["V_Ammo", ["V_Ammo", "Vehicle Air-Drop: Ammo Truck", "Allows you to call in an Ammo Truck Air-drop. (Only a limited number of these can be used based on available logistics support).", "a3\soft_f_epc\truck_03\data\ui\truck_03_ammo_ca.paa", "V_Ammo", false]]
	];

	["MSF", "Logi_Inventory", _logiInv] call MSF_fnc_SetConfigValue;
	["MSF", "Logi_Points", 9] call MSF_fnc_SetConfigValue;

	[true, "respawn", {
		params ["_newVeh", "_veh"];
		if (_newVeh getVariable ["MSF_Logi_isRarm", false]) then {
			[_newVeh] call MSF_Logi_fnc_SetupRearmInteraction;
		};
		if (_newVeh getVariable ["MSF_Logi_isInventory", false]) then {
			private _opts = _newVeh getVariable "MSF_Logi_InvGen";
			_opts params ["_clear", "_count", "_fill", "_weights"];
			[_newVeh, _clear, _count, _fill, _weights] call MSF_Logi_fnc_GenerateInventory;	
		};
	}] call BIS_fnc_addScriptedEventHandler;

	[missionNamespace, "MSF_Logi_DropRequested", {
		params ["_side", "_pos", "_type"];
		[_side, _pos, _type] call MSF_Logi_fnc_SpawnVehicleParaDrop;
	}] call BIS_fnc_addScriptedEventHandler;
};


//"a3\ui_f\data\map\vehicleicons\iconbackpack_ca.paa"
//"a3\ui_f\data\gui\rsc\rscdisplayarsenal\backpack_ca.paa"

//fuel truck
//"a3\soft_f_epc\truck_03\data\ui\truck_03_fuel_ca.paa"