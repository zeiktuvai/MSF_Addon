params [["_type", "inv", [""]]]; //, ["_side", east, [east]], ["_civType", "Civ_African", [""]]];

switch (_type) do {

	case "inv": {
		createHashMapFromArray
		[
			["Items",getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'items')],
			["Launcher" ,getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'launcherRounds')],
			["Grenades" ,getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'grenades')],
			["Medical" ,getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'aceMedical')],
			["Food" ,getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'aceFood')]
		];
	};

	case "empty": {
		createHashMapFromArray
		[
			["Vic", getArray (configFile >> 'MSFConfig' >> 'EmptyUnitSets' >> 'UnmannedVic')],
			["Armor", getArray (configFile >> 'MSFConfig' >> 'EmptyUnitSets' >> 'UnmannedArmor')],
			["Turret", getArray (configFile >> 'MSFConfig' >> 'EmptyUnitSets' >> 'UnmannedStatic')],
			["Heli", getArray (configFile >> 'MSFConfig' >> 'EmptyUnitSets' >> 'UnmannedHeli')],
			["Plane", getArray (configFile >> 'MSFConfig' >> 'EmptyUnitSets' >> 'UnmannedPlane')],
			["Fuel", getArray (configFile >> 'MSFConfig' >> 'EmptyUnitSets' >> 'FuelTruck')],
			["Ammo", getArray (configFile >> 'MSFConfig' >> 'EmptyUnitSets' >> 'AmmoTruck')]
		];
	};

	case "cargo": {
		createHashMapFromArray 
		[
			["Supply", getArray (configFile >> 'MSFConfig' >> 'CargoSets' >> 'SupplyBoxes')],
			["VicAmmo", getArray (configFile >> 'MSFConfig' >> 'CargoSets' >> 'VicAmmoBoxes')],
			["Medical", getArray (configFile >> 'MSFConfig' >> 'CargoSets' >> 'MedicalBoxes')],
			["Food", getArray (configFile >> 'MSFConfig' >> 'CargoSets' >> 'FoodBoxes')],
			["Weapon", getArray (configFile >> 'MSFConfig' >> 'CargoSets' >> 'WeaponBoxes')],
			["Ammo", getArray (configFile >> 'MSFConfig' >> 'CargoSets' >> 'AmmoBoxes')]
		];
	};

	case "civs": {
		_return = getArray (configFile >> 'MSFConfig' >> 'CivUnits' >> _civType);
	}
};