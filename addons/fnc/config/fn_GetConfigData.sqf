params [["_type", "inv", [""]]]; //, ["_side", east, [east]]];

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
			["UnmannedVic", getArray (configFile >> 'MSFConfig' >> 'EmptyUnitSets' >> 'UnmannedVic')],
			["UnmannedArmor", getArray (configFile >> 'MSFConfig' >> 'EmptyUnitSets' >> 'UnmannedArmor')],
			["UnmannedStatic", getArray (configFile >> 'MSFConfig' >> 'EmptyUnitSets' >> 'UnmannedStatic')],
			["UnmannedHeli", getArray (configFile >> 'MSFConfig' >> 'EmptyUnitSets' >> 'UnmannedHeli')],
			["UnmannedPlane", getArray (configFile >> 'MSFConfig' >> 'EmptyUnitSets' >> 'UnmannedPlane')],
			["FuelTruck", getArray (configFile >> 'MSFConfig' >> 'EmptyUnitSets' >> 'FuelTruck')],
			["AmmoTruck", getArray (configFile >> 'MSFConfig' >> 'EmptyUnitSets' >> 'AmmoTruck')]
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
		createHashMapFromArray
		[
			["Civ_African", getArray (configFile >> 'MSFConfig' >> 'CivUnits' >> 'Civ_African')],
			["Civ_Asian", getArray (configFile >> 'MSFConfig' >> 'CivUnits' >> 'Civ_Asian')],
			["Civ_European", getArray (configFile >> 'MSFConfig' >> 'CivUnits' >> 'Civ_European')],
			["Civ_Livionian", getArray (configFile >> 'MSFConfig' >> 'CivUnits' >> 'Civ_Livionian')],
			["Civ_Tanoan", getArray (configFile >> 'MSFConfig' >> 'CivUnits' >> 'Civ_Tanoan')]
		];
	};
};