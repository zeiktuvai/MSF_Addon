params ["_trigger"];

private _objects = thisTrigger getVariable 'objects';
private _side = missionNamespace getVariable ["MSF_OFE_EnemyFaction", east];
private _group = createGroup [_side, true];
private _unitTypes = ["unit", _side] call MSF_fnc_GetConfigData;
private _uTypes = ["empty"] call MSF_fnc_GetConfigData;
private _center = position _trigger;
private _type = _trigger getVariable ["type", "Outpost"];
private _locationData = ["Location", _type] call MSF_fnc_OFE_GetLocationType;
private _params = _trigger getVariable ["vars", []];
private _str = [] call MSF_fnc_OFE_CalculateStrengthValues select 2;
private _vicAmmo = _locationData get "VehicleAmmo";
private _supplyCnt = _locationData get "SupplyItemCount";

_params params ["_vic", "_vicChance", "_supply"];

[_objects, true] call MSF_fnc_ShowHideObjects;

[_unitTypes get "Vehicles", _objects select {typeOf _x == "MSF_Placeholder_Vehicle"}, _side, _center] call MSF_fnc_OFE_SpawnMannedVic;
[_unitTypes get "Armor", _objects select {typeOf _x == "MSF_Placeholder_Armor"}, _side, _center] call MSF_fnc_OFE_SpawnMannedVic;
[_unitTypes get "Turrets", _objects select {typeOf _x == "MSF_Placeholder_Static"}, _side, _center] call MSF_fnc_OFE_SpawnMannedVic;
[_unitTypes get "Units", _objects select {typeOf _x == "MSF_Placeholder_Infantry"}, _group] call MSF_fnc_OFE_SpawnInfantryOnPlaceholder;
[_unitTypes get "Units", _objects, _group] call MSF_fnc_OFE_SpawnInfantryInBuildings;

if (_type in ["AirBase","HeliBase","Bastion"]) then {
	[_uTypes get "UnmannedHeli", _objects select {typeOf _x == "MSF_Placeholder_Heli"}] call MSF_fnc_OFE_SpawnEscapeVic;
};

if (_type == "AirBase") then {
	[_uTypes get "UnmannedPlane", _objects select {typeOf _x == "MSF_Placeholder_Aircraft"}] call MSF_fnc_OFE_SpawnEscapeVic;
};

[_uTypes get "FuelTruck", _objects select {typeOf _x == "MSF_Placeholder_FuelTruck"}] call MSF_fnc_OFE_SpawnUnmannedVic;
[_uTypes get "AmmoTruck", _objects select {typeOf _x == "MSF_Placeholder_AmmoTruck"}] call MSF_fnc_OFE_SpawnUnmannedVic;

if (_supply) then {
	private _sbox = true;
	if (_str > 0.80) then {
		_sbox = [0.5] call MSF_fnc_CalculateProbability;
	};

	if (_sbox) then {
		if (count (_objects select {typeOf _x == "MSF_Placeholder_VehicleAmmo"}) > 0) then {
			_vicAmmoBoxes = [_objects select {typeOf _x == "MSF_Placeholder_VehicleAmmo"}, _vicAmmo - (_vicAmmo * _str)] call MSF_fnc_OFE_SpawnVehicleAmmo;
		};
		if (count (_objects select {typeOf _x == "MSF_Placeholder_Supplies"}) > 0) then {
			[_objects select {typeOf _x == "MSF_Placeholder_Supplies"}, _supplyCnt - (_supplyCnt * _str), 0, true] call MSF_fnc_OFE_SpawnAndFillBoxes;
		};
	};
};

if (_vic && [_vicChance - _str] call MSF_fnc_CalculateProbability) then {
	private _vics = [_uTypes get "UnmannedVic", _objects select {typeOf _x == "MSF_Placeholder_Vehicle_U"}] call MSF_fnc_OFE_SpawnUnmannedVic;
	[_vics] call MSF_fnc_SetRandomVehicleState;
};

if (_type == "Bastion") then {
	private _ant = nearestObjects [_center, ["Land_Radar_01_antenna_F"], 50];

	if (count _ant > 0) then {
		private _obj = _ant select 0;
		private _loc = position _obj;
		_obj setPos [_loc select 0, _loc select 1, 0];
	}
}; 
