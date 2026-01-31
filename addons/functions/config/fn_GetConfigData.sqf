params [["_type", "inv", [""]], ["_side", east, [east]]];

switch (_type) do {

	case "unit": {
		private _typeConfig = (["SpawnConfigOverride", "MSF", createHashMap] call MSF_fnc_GetConfigValue) getOrDefault [_side, createHashMap];
		private _oldOverride = [[_side] call BIS_fnc_sideID] call MSF_fnc_GetOldCfg;
		
		private _return = createHashMapFromArray
		[
			["Vehicles", getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> (str _side) >> 'Vehicles')],
			["Armor", getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> (str _side) >> 'Armor')],
			["Air", getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> (str _side) >> 'Air')],
			["Turrets", getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> (str _side) >> 'Turrets')],
			["Units", getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> (str _side) >> 'Units')]
		];

		if (count _typeConfig > 0) then {
			if (count (_typeConfig getOrDefault ["Vehicles", []]) > 0) then {_return set ["Vehicles", (_typeConfig get "Vehicles")]};
			if (count (_typeConfig getOrDefault ["Armor", []]) > 0) then {_return set ["Armor", (_typeConfig get "Armor")]};
			if (count (_typeConfig getOrDefault ["Air", []]) > 0) then {_return set ["Air", (_typeConfig get "Air")]};
			if (count (_typeConfig getOrDefault ["Turrets", []]) > 0) then {_return set ["Turrets", (_typeConfig get "Turrets")]};
			if (count (_typeConfig getOrDefault ["Units", []]) > 0) then {_return set ["Units", (_typeConfig get "Units")]};
		};
		
		if (count _oldOverride > 0) then {
			if (count (_oldOverride getOrDefault ["Vehicles", []]) > 0) then {_return set ["Vehicles", (_oldOverride get "Vehicles")]};
			if (count (_oldOverride getOrDefault ["Armor", []]) > 0) then {_return set ["Armor", (_oldOverride get "Armor")]};
			if (count (_oldOverride getOrDefault ["Air", []]) > 0) then {_return set ["Air", (_oldOverride get "Air")]};
			if (count (_oldOverride getOrDefault ["Turrets", []]) > 0) then {_return set ["Turrets", (_oldOverride get "Turrets")]};
			if (count (_oldOverride getOrDefault ["Units", []]) > 0) then {_return set ["Units", (_oldOverride get "Units")]};
		};

		_return;
	};

	case "inv": {
		createHashMapFromArray
		[
			["Items", getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'items')],
			["Launcher", getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'launcherRounds')],
			["Grenades", getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'grenades')],
			["Medical", getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'aceMedical')],
			["Food", getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'aceFood')]
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
			["Armory", getArray (configFile >> 'MSFConfig' >> 'CargoSets' >> 'WeaponBoxes')],
			["Ammo", getArray (configFile >> 'MSFConfig' >> 'CargoSets' >> 'AmmoBoxes')],
			["Launcher", getArray (configFile >> 'MSFConfig' >> 'CargoSets' >> 'LauncherBoxes')],
			["Ordinance", getArray (configFile >> 'MSFConfig' >> 'CargoSets' >> 'OrdinanceBoxes')]			
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

