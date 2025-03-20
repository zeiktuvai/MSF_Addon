params [["_unit", objNull, [objNull]], ["_type", "", [""]]];

private _bpClasses = ["B_Kitbag_sgg"];

switch (_type) do {
	case "BP_Medical": {
		private _items = parseSimpleArray (getText (configFile >> "MSFConfig" >> "BackPackSets" >> "MedicBackpack"));
		
		_unit addBackpack (selectRandom _bpClasses);

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

		_unit addBackpack (selectRandom _bpClasses);

		while { loadBackpack _unit < _max } do {
			_unit addItemToBackpack (selectRandom _items);
		};
	};
	case "BP_Std": {
		private _items = parseSimpleArray (getText (configFile >> "MSFConfig" >> "BackPackSets" >> "StandardBackpack"));
		private _mag = primaryWeaponMagazine _unit;

		_unit addBackpack (selectRandom _bpClasses);

		{
			_x params ["_item", "_count"];
			for "_i" from 1 to _count do {
				_unit addItemToBackpack _item;
			};
		} forEach _items;

		if (count _mag > 0) then {
			for "_i" from 1 to 3 do {
				_unit addItemToBackpack (_mag # 0);
			};
		};

		if (_unit getUnitTrait "UavHacker" == true) then {
			_unit addItemToBackpack "ACE_UAVBattery";
		}
	};
};


