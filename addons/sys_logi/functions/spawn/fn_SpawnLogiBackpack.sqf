params [["_unit", objNull, [objNull]], ["_type", "", [""]]];

switch (_type) do {
	case "BP_Medical": {
		//TODO: Fix this (See Task)
		private _configs = configProperties [configFile >> "CfgVehicles" >> "MSF_mc_MedicBackpack" >> "TransportItems"];
		private _items = [];
		{
			_items pushBack [getText (_x >> "name"), getNumber (_x >> "count")];
		} forEach _configs;

		_unit addBackpack "B_Kitbag_sgg";

		{
			_x params ["_item", "_count"];
		for "_i" from 1 to _count do {
			_unit addItemToBackpack _item;
		};
		} forEach _items;
	};
	case "BP_Ammo": {
		private _items = ([] call MSF_Logi_fnc_GetPlayerWeaponInventory) get "Mags";
		private _max = 0.9;

		_unit addBackpack "B_Kitbag_sgg";

		while { loadBackpack _unit < _max } do {
			_unit addItemToBackpack (selectRandom _items);
		};
	};
};

