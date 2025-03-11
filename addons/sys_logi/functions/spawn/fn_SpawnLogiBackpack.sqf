params [["_unit", objNull, [objNull]], ["_type", "", [""]]];

switch (_type) do {
	case "BP_Medical": {
		private _items = parseSimpleArray (getText (configFile >> "MSFConfig" >> "BackPackSets" >> "MedicBackpack"));
		
		_unit addBackpack "B_Kitbag_sgg";

		{
			_x params ["_item", "_count"];
			for "_i" from 1 to _count do {
				_unit addItemToBackpack _item;
			};
		} forEach _items;
	};
	case "BP_Ammo": {
		//TODO: Rewrite this so that it picks the mag inserted into the primary/secondary weapon for each player.
		private _items = ([] call MSF_Logi_fnc_GetPlayerWeaponInventory) get "Mags";
		private _max = 0.9;

		_unit addBackpack "B_Kitbag_sgg";

		while { loadBackpack _unit < _max } do {
			_unit addItemToBackpack (selectRandom _items);
		};
	};
};

