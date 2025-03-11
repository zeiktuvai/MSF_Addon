params [["_type", "inv", [""]], ["_side", east, [east]]];

switch (_type) do {

	case "unit": {		
		private _override = [[_side] call BIS_fnc_sideID] call MSF_fnc_GetUnitOverrideCfg;
		private _isOverride = count _override > 0;

		createHashMapFromArray
		[
			["Groups", if (_isOverride && {if (_isOverride) then { count (_override select 0) > 0} else {false}}) then {_override select 0} else {getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> (str _side) >> 'Groups')}],
			["Vehicles", if (_isOverride && {if (_isOverride) then { count (_override select 1) > 0} else {false}}) then {_override select 1} else {getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> (str _side) >> 'Vehicles')}],
			["Armor", if (_isOverride && {if (_isOverride) then { count (_override select 2) > 0} else {false}}) then {_override select 2} else {getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> (str _side) >> 'Armor')}],
			["Air", if (_isOverride && {if (_isOverride) then { count (_override select 3) > 0} else {false}}) then {_override select 3} else {getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> (str _side) >> 'Air')}],
			["Turrets", if (_isOverride && {if (_isOverride) then { count (_override select 4) > 0} else {false}}) then {_override select 4} else {getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> (str _side) >> 'Turrets')}],
			["Units", if (_isOverride && {if (_isOverride) then { count (_override select 5) > 0} else {false}}) then {_override select 5} else {getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> (str _side) >> 'Units')}],
			["VehiclePatrols", if (_isOverride && {if (_isOverride) then { count (_override select 6) > 0} else {false}}) then {_override select 6} else {getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> (str _side) >> 'VehiclePatrols')}]
		];
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