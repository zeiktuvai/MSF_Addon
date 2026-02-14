params [["_type", "", [""]]];


private _obj = player getVariable ["MSF_SupplySource", objNull];
private _bpClasses = ["B_Kitbag_sgg"];
private _pos = [_obj] call MSF_Logi_fnc_CheckSupplyPointExists;
private _bp = createVehicle [(selectRandom _bpClasses), _pos, [], 4, "CAN_COLLIDE"];

switch (_type) do {
	case "BP_Medical": {
		private _items = parseSimpleArray (getText (configFile >> "MSFConfig" >> "BackPackSets" >> "MedicBackpack"));

		{
			_x params ["_item", "_count"];
			for "_i" from 1 to _count do {
				_bp addItemCargo [_item, 1];
			};
		} forEach _items;
	};
	case "BP_Ammo": {
		//TODO: Rewrite this so that it picks the mag inserted into the primary/secondary weapon for each player.
		private _items = ([] call MSF_Logi_fnc_GetPlayerWeaponInventory) get "Mags";
		private _max = 0.9;

		while { load _bp < _max } do {
			_bp addMagazineCargo [(selectRandom _items), 1];
		};
	};
	case "BP_Std": {
		private _items = parseSimpleArray (getText (configFile >> "MSFConfig" >> "BackPackSets" >> "StandardBackpack"));
		private _mag = primaryWeaponMagazine player;

		{
			_x params ["_item", "_count"];
			for "_i" from 1 to _count do {
				_bp addItemCargo [_item, 1];
			};
		} forEach _items;

		if (_mag isNotEqualTo []) then {
			for "_i" from 1 to 3 do {
				_bp addMagazineCargo [(_mag # 0), 1];
			};
		};

		if (player getUnitTrait "UavHacker" == true) then {
			_bp addItemCargo ["ACE_UAVBattery", 2];
		}
	};
};


