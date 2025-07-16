params [["_isOFE", true, [true]], ["_position", [], [[]]], ["_def", [], [[]]], ["_type", "", [""]], ["_enemySide", east, [east]],
	["_victimSide", resistance, [resistance]], ["_activationSide", "west", [""]], ["_fillCount", 50, [50]], ["_vicAmmo", 250, [250]],
	["_intelID", "", [""]], ["_intelProvider", [], [[]]]
];

private ["_types"];
private _objects = [_position, 0, _def] call BIS_fnc_objectsMapper;
private _allObjs = _objects;
private _group = createGroup [_victimSide, true];
private _eGroup = createGroup [_enemySide, true];
private _deadUnitTypes = ["unit", _victimSide] call MSF_fnc_GetConfigData get "Units";
private _enemyTypes = ["unit", _enemySide] call MSF_fnc_GetConfigData get "Units";
private _emptyTypes = ["empty"] call MSF_fnc_GetConfigData;

[_deadUnitTypes, _objects select {typeOf _x == "MSF_Placeholder_Infantry_D"}, _group] call MSF_fnc_OFE_SpawnInfantryOnPlaceholder;

if ([0.5] call MSF_fnc_CalculateProbability) then
{
	[_enemyTypes, _objects select {typeOf _x == "MSF_Placeholder_Infantry"}, _eGroup] call MSF_fnc_OFE_SpawnInfantryOnPlaceholder;
};

{
	_x setDamage 1;
} forEach units _group;

_allObjs append units _group;
_allObjs append units _eGroup;

switch (_type) do {
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

switch (_type) do {
	case "Vehicle"; 
	case "Armor";
	case "Static": { 
		private _vicDir = _objects select {typeOf _x == "MSF_Placeholder_Direction"};

		private	_vics = [_types, _objects select {typeOf _x == "MSF_Placeholder_Vehicle_U"}] call MSF_fnc_OFE_SpawnUnmannedVic;
		if (count _vicDir > 0) then {
			{
				_x setDir (getDir _x + (_x getRelDir (position (_vicDir select 0))))
			} forEach _vics;
		};

		switch (_type) do {
			case "Vehicle"; 
			case "Armor": {
				{
					_x setVehicleAmmo random 1;
					_x setDamage random [0, 0.45, 0.75];
					_x setFuel random [0.2, 0.40, 0.60];
				} forEach _vics;

				if (_type == "Armor") then
				{
					_unt = _group createUnit [selectRandom _deadUnitTypes, getPos ((_objects select {typeOf _x == "MSF_Placeholder_Infantry_D"}) select 0), [], 0, "CAN_COLLIDE"];
					_unt setDamage 1;
					_unt moveInDriver (_vics select 0);
				}
			};
			case "Static": {
				{
					_x setVehicleAmmo random 1;
				} forEach _vics;		
			};	
		};

		_allObjs append _vics;
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

		if (count _vap > 0) then 
		{
			_vicAmmoBoxes = [_vap, _vicAmmo] call MSF_fnc_OFE_SpawnVehicleAmmo;
			_allObjs append _vicAmmoBoxes;
		};
		if (count _bp > 0) then {
			_boxes = [_bp, _fillCount, "Supply", _isOFE] call MSF_fnc_OFE_SpawnAndFillBoxes;
			_allObjs append _boxes;
		};
		if (count _med > 0) then {
			private _medboxes = [_med, _fillCount, "Medical", _isOFE] call MSF_fnc_OFE_SpawnAndFillBoxes;
			_allObjs append _medboxes;
		};
		if (count _food > 0) then {
			private _foodboxes = [_food, _fillCount, "Food", _isOFE] call MSF_fnc_OFE_SpawnAndFillBoxes;
			_allObjs append _foodboxes;
		};
		if (count _weap > 0) then {
			private _weapboxes = [_weap, 15, "Armory", _isOFE] call MSF_fnc_OFE_SpawnAndFillBoxes;
			_allObjs append (_weapboxes select 0);
			_weapTypes = (_weapboxes select 1);
		};
		if (count _ammo > 0) then {
			private _ammoboxes = [_ammo, 15, "Ammo", _isOFE, _weapTypes] call MSF_fnc_OFE_SpawnAndFillBoxes;
			_allObjs append _ammoboxes;
		};
	};
};

[_allObjs, false] call MSF_fnc_ShowHideObjects;
[_logic, 400, 400, _activationSide, "present", false, _allObjs, "POI", [], _intelID] call MSF_fnc_OFE_CreateModuleActivationTrigger;

// intel system provider
if (count _intelProvider > 0) then
{
	_intelProvider params ["_intelP", "_interactC", "_intelC"];

	if (_intelP) then {
		private _units = units _group;
		_units append (units _eGroup);

		{		
			if ([_interactC] call MSF_fnc_CalculateProbability) then {
				[_x, _intelC] call MSF_Intel_fnc_AddIntelInteraction;
			};		
		} forEach _units;		
	};
};

if (_isOFE) then {
	["POI", _position] call MSF_fnc_OFE_CreateMapMarker;	
};
