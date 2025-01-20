// type 0: units, 1: Inventory, 2: Empty vehicles, 3: Cargo, 4: Civ Types
params [["_type", 0, [0]], ["_side", east, [east]], ["_civType", "Civ_African", [""]]];

private _return = [];

switch (_type) do {
	case 0: {
		private _faction = "Set1";
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
		};
	
		private _isOverride = count _override > 0;
		_return =
		[
			if (_isOverride && {if (_isOverride) then { count (_override select 0) > 0} else {false}}) then {_override select 0} else {getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Groups')},
			if (_isOverride && {if (_isOverride) then { count (_override select 1) > 0} else {false}}) then {_override select 1} else {getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Vehicles')},
			if (_isOverride && {if (_isOverride) then { count (_override select 2) > 0} else {false}}) then {_override select 2} else {getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Armor')},
			if (_isOverride && {if (_isOverride) then { count (_override select 3) > 0} else {false}}) then {_override select 3} else {getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Air')},
			if (_isOverride && {if (_isOverride) then { count (_override select 4) > 0} else {false}}) then {_override select 4} else {getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Turrets')},
			if (_isOverride && {if (_isOverride) then { count (_override select 5) > 0} else {false}}) then {_override select 5} else {getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Units')},
			if (_isOverride && {if (_isOverride) then { count (_override select 6) > 0} else {false}}) then {_override select 6} else {getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'VehiclePatrols')}
		];
		hint format ["isover: %1; faction: %2, return: %3", _isOverride, _faction, _return];
	};
	
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

	case 4: {
		_return = getArray (configFile >> 'MSFConfig' >> 'CivUnits' >> _civType);
	}
};

_return;