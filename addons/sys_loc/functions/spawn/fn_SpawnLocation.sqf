params ["_trigger"];

private ["_types", "_vGroup"];
private _objects = _trigger getVariable 'objects';
private _side = _trigger getVariable 'side';
private _type = _trigger getVariable ["type", "Outpost"];
private _params = _trigger getVariable ["vars", []];
private _center = position _trigger;
private _units = [];

[_objects, true] call MSF_fnc_ShowHideObjects;

if (_type != "POI") then {
	_params params ["_vic", "_vicChance", "_supply", "_intelProvider", "_spawnReduction"];
	
	private _unitTypes = ["unit", _side] call MSF_fnc_GetConfigData;
	private _uTypes = ["empty"] call MSF_fnc_GetConfigData;
	private _locationData = ["Location", _type] call MSF_Loc_fnc_GetLocationType;
	private _vicAmmo = _locationData get "VehicleAmmo";
	private _supplyCnt = _locationData get "SupplyItemCount";

	[_unitTypes get "Vehicles", _objects select {typeOf _x == "MSF_Placeholder_Vehicle"}, _side, _center] call MSF_fnc_SpawnMannedVicArray;
	[_unitTypes get "Armor", _objects select {typeOf _x == "MSF_Placeholder_Armor"}, _side, _center] call MSF_fnc_SpawnMannedVicArray;
	[_unitTypes get "Turrets", _objects select {typeOf _x == "MSF_Placeholder_Static"}, _side, _center] call MSF_fnc_SpawnMannedVicArray;
	_units append ([_unitTypes get "Units", _objects select {typeOf _x == "MSF_Placeholder_Infantry"}, _side] call MSF_fnc_SpawnInfantryOnPlaceholder);
	_units append ([_unitTypes get "Units", _objects, _side, 1 - _spawnReduction] call MSF_fnc_SpawnInfantryInBuildings);

	if (_supply) then {
		if (count (_objects select {typeOf _x == "MSF_Placeholder_VehicleAmmo"}) > 0) then {
			_vicAmmoBoxes = [_objects select {typeOf _x == "MSF_Placeholder_VehicleAmmo"}, _vicAmmo - (_vicAmmo * _spawnReduction)] call MSF_Logi_fnc_SpawnVehicleAmmoOnPlaceholder;
		};
		if (count (_objects select {typeOf _x == "MSF_Placeholder_Supplies"}) > 0) then {
			[_objects select {typeOf _x == "MSF_Placeholder_Supplies"}, _supplyCnt - (_supplyCnt * _spawnReduction), "Supply"] call MSF_Logi_fnc_SpawnAndFillBoxesOnPlaceholder;
		};
	};

	if (_vic && [_vicChance] call MSF_fnc_CalculateProbability) then {
		private _vics = [_uTypes get "UnmannedVic", _objects select {typeOf _x == "MSF_Placeholder_Vehicle_U"}] call MSF_Logi_fnc_SpawnUnmannedVicsOnPlaceholder;
		[_vics] call MSF_fnc_SetRandomVehicleState;
	};

	// if (_type in ["AirBase","HeliBase","Bastion"]) then {
	// 	[_uTypes get "UnmannedHeli", _objects select {typeOf _x == "MSF_Placeholder_Heli"}] call MSF_fnc_OFE_SpawnEscapeVic;
	// };

	// if (_type == "AirBase") then {
	// 	[_uTypes get "UnmannedPlane", _objects select {typeOf _x == "MSF_Placeholder_Aircraft"}] call MSF_fnc_OFE_SpawnEscapeVic;
	// };

	// if (_type == "Bastion") then {
	// 	private _ant = nearestObjects [_center, ["Land_Radar_01_antenna_F"], 50];

	// 	if (count _ant > 0) then {
	// 		private _obj = _ant select 0;
	// 		private _loc = position _obj;
	// 		_obj setPos [_loc select 0, _loc select 1, 0];
	// 	}
	// }; 
}
else {
	_params params ["_ptype", "_victimSide", "_fillCount", "_vicAmmo", "_intelProvider"];

	private _deadUnitTypes = ["unit", _victimSide] call MSF_fnc_GetConfigData get "Units";
	private _enemyTypes = ["unit", _side] call MSF_fnc_GetConfigData get "Units";
	private _emptyTypes = ["empty"] call MSF_fnc_GetConfigData;
	_units append ([_deadUnitTypes, _objects select {typeOf _x == "MSF_Placeholder_Infantry_D"}, _victimSide] call MSF_fnc_SpawnInfantryOnPlaceholder);

	{ _x setDamage 1; } forEach _units;

	if ([0.5] call MSF_fnc_CalculateProbability) then
	{
		_units append ([_enemyTypes, _objects select {typeOf _x == "MSF_Placeholder_Infantry"}, _side] call MSF_fnc_SpawnInfantryOnPlaceholder);
	};

	switch (_ptype) do {
		case "Vehicle": {
			_types = _emptyTypes get "UnmannedVic";
		};
		case "Armor": {
			_types = _emptyTypes get "UnmannedArmor";
		};
		case "Static": {
			_types = _emptyTypes get "UnmannedStatic";
		};
	};
	
	switch (_ptype) do {
		case "Vehicle"; 
		case "Armor";
		case "Static": { 
			private _vicDir = _objects select {typeOf _x == "MSF_Placeholder_Direction"};

			private	_vics = [_types, _objects select {typeOf _x == "MSF_Placeholder_Vehicle_U"}] call MSF_Logi_fnc_SpawnUnmannedVicsOnPlaceholder;
			if (count _vicDir > 0) then {
				{
					_x setDir (getDir _x + (_x getRelDir (position (_vicDir select 0))))
				} forEach _vics;
			};


			if (_ptype == "Vehicle" || _ptype == "Armor") then { [_vics] call MSF_fnc_SetRandomVehicleState; };
			if (_ptype == "Armor") then
			{
				_unt = (createGroup [_victimSide, true]) createUnit [selectRandom _deadUnitTypes, getPos ((_objects select {typeOf _x == "MSF_Placeholder_Infantry_D"}) select 0), [], 0, "CAN_COLLIDE"];
				_unt setDamage 1;
				_unt moveInDriver (_vics select 0);
			};
			if (_ptype == "Static") then {
				{
					_x setVehicleAmmo random 1;
				} forEach _vics;
			};			
		};
		case "Supply";
		case "Medical";
		case "Armory";
		case "Food": {
			private _vap = _objects select {typeOf _x == "MSF_Placeholder_VehicleAmmo"};
			private _bp = _objects select {typeOf _x == "MSF_Placeholder_Supplies"};
			private _med = _objects select {typeOf _x == "MSF_Placeholder_Logi_Medical"};
			private _food = _objects select {typeOf _x == "MSF_Placeholder_Logi_Food"};
			private _weap = _objects select {typeOf _x == "MSF_Placeholder_Logi_Weapons"};
			private _ammo = _objects select {typeOf _x == "MSF_Placeholder_Logi_Ammo"};
			private _weapTypes = [];

			if (count _vap > 0) then {[_vap, _vicAmmo] call MSF_Logi_fnc_SpawnVehicleAmmoOnPlaceholder;};
			if (count _bp > 0) then {[_bp, _fillCount, "Supply"] call MSF_Logi_fnc_SpawnAndFillBoxesOnPlaceholder;};
			if (count _med > 0) then {[_med, _fillCount, "Medical"] call MSF_Logi_fnc_SpawnAndFillBoxesOnPlaceholder;};
			if (count _food > 0) then {[_food, _fillCount, "Food"] call MSF_Logi_fnc_SpawnAndFillBoxesOnPlaceholder;};
			if (count _weap > 0) then {
				private _weapboxes = [_weap, 15, "Armory"] call MSF_Logi_fnc_SpawnAndFillBoxesOnPlaceholder;				
				_weapTypes = (_weapboxes select 1);
			};
			if (count _ammo > 0) then {[_ammo, 15, "Ammo", _weapTypes] call MSF_Logi_fnc_SpawnAndFillBoxesOnPlaceholder;};
		};
	};
};

[_uTypes get "FuelTruck", _objects select {typeOf _x == "MSF_Placeholder_FuelTruck"}] call MSF_Logi_fnc_SpawnUnmannedVicsOnPlaceholder;
[_uTypes get "AmmoTruck", _objects select {typeOf _x == "MSF_Placeholder_AmmoTruck"}] call MSF_Logi_fnc_SpawnUnmannedVicsOnPlaceholder;

private _intelP = if (_type != "POI") then {	_params # 3 } else { _params # 4 };	

// intel system provider
if (count _intelP > 0) then
{
	_intelP params ["_intelP", "_interactC", "_intelC"];

	if (_intelP) then {
		{		
			if ([_interactC] call MSF_fnc_CalculateProbability) then {
				[_x, _intelC] call MSF_Intel_fnc_AddIntelInteraction;
			};		
 		} forEach _units;
	};
};
