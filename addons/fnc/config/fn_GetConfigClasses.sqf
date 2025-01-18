// type 0: units, 1: Inventory, 2: Empty vehicles, 3: Cargo
params [["_type", 0, [0]], ["_side", east, [east]]];

private _return = [];

switch (_type) do {
	case 0: {
		private ["_faction"];
		private _override = [[_side] call BIS_fnc_sideID] call MSF_fnc_GetOverrideCfg;

		switch (_side) do {
			case east: {
				_faction = "Set1";
			};
			case resistance: {
				_faction = "Set2";
			};
			case west: {
				_faction = "Set3";
			};
			default {
				_faction = "Set1";
			};
		};
	 };
	
	_return =
	[
		[getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Groups'), _override select 0] select (count (_override select 0) > 0),
		[getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Vehicles'), _override select 1] select (count (_override select 1) > 0),
		[getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Armor'), _override select 2] select (count (_override select 2) > 0),
		[getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Air'), _override select 3] select (count (_override select 3) > 0),
		[getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Turrets'), _override select 4] select (count (_override select 4) > 0),
		[getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Units'), _override select 5] select (count (_override select 5) > 0),
		[getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'VehiclePatrols'), _override select 6] select (count (_override select 6) > 0)
	];

	case 1: {

		private ["_items", "_launch", "_grenade", "_med", "_food"];

		private _mags = [];

		_mags append getArray (configFile >> 'MSFConfig' >> 'MagazineSets' >> "Set1");
		_mags append getArray (configFile >> 'MSFConfig' >> 'MagazineSets' >> "Set2");
		_mags append getArray (configFile >> 'MSFConfig' >> 'MagazineSets' >> "Set3");

		_return =
		[
			getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'items'),
			_mags,
			getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'launcherRounds'),
			getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'grenades'),
			getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'aceMedical'),
			getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'aceFood')
		];
	};

	case 2: {
		_return = 
		[
			getArray (configFile >> 'MSFConfig' >> 'EmptyUnitSets' >> 'UnmannedVic'),
			getArray (configFile >> 'MSFConfig' >> 'EmptyUnitSets' >> 'UnmannedArmor'),
			getArray (configFile >> 'MSFConfig' >> 'EmptyUnitSets' >> 'UnmannedStatic'),
			getArray (configFile >> 'MSFConfig' >> 'EmptyUnitSets' >> 'UnmannedHeli'),
			getArray (configFile >> 'MSFConfig' >> 'EmptyUnitSets' >> 'UnmannedPlane'),	
			getArray (configFile >> 'MSFConfig' >> 'EmptyUnitSets' >> 'FuelTruck'),
			getArray (configFile >> 'MSFConfig' >> 'EmptyUnitSets' >> 'AmmoTruck')
		];
	};

	case 3: {
		_return = 
		[
			getArray (configFile >> 'MSFConfig' >> 'CargoSets' >> 'SupplyBoxes'),
			getArray (configFile >> 'MSFConfig' >> 'CargoSets' >> 'VicAmmoBoxes'),
			getArray (configFile >> 'MSFConfig' >> 'CargoSets' >> 'MedicalBoxes'),
			getArray (configFile >> 'MSFConfig' >> 'CargoSets' >> 'FoodBoxes'),
			getArray (configFile >> 'MSFConfig' >> 'CargoSets' >> 'WeaponsBoxes')
		];
	};
};

_return;