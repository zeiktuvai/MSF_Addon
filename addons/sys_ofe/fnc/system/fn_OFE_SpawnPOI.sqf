params [["_isOFE", true, [true]], ["_position", [], [[]]], ["_def", [], [[]]], ["_type", 0, [0]], ["_enemySide", east, [east]],
	["_victimSide", resistance, [resistance]], ["_activationSide", "west", [""]], ["_fillCount", 50, [50]], ["_vicAmmo", 250, [250]]
];

private ["_types"];
private _objects = [_position, 0, _def] call BIS_fnc_objectsMapper;
private _allObjs = _objects;
private _group = createGroup [_victimSide, true];
private _eGroup = createGroup [_enemySide, true];
private _deadUnitTypes = ([_victimSide] call MSF_fnc_GetUnitClasses) select 5;
private _enemyTypes = ([_enemySide] call MSF_fnc_GetUnitClasses) select 5;

[_deadUnitTypes, _objects select {typeOf _x == "MSF_Placeholder_Infantry_D"}, _group] call MSF_fnc_OFE_SpawnInfantryOnPlaceholder;

if ([0.5] call MSF_fnc_GetSpawnChance) then
{
	[_enemyTypes, _objects select {typeOf _x == "MSF_Placeholder_Infantry"}, _eGroup] call MSF_fnc_OFE_SpawnInfantryOnPlaceholder;
};

{
	_x setDamage 1;
} forEach units _group;

switch (_type) do {
	case 0: { //vics
		_types = ([] call MSF_fnc_GetUnmannedClasses) select _type;
	};
	case 1: { //armor
		_types = ([] call MSF_fnc_GetUnmannedClasses) select _type;
	};
	case 2: { //static
		_types = ([] call MSF_fnc_GetUnmannedClasses) select _type;
	};
};

switch (_type) do {
	case 0;
	case 1;
	case 2: { 
		private _vicDir = _objects select {typeOf _x == "MSF_Placeholder_Direction"};

		private	_vics = [_types, _objects select {typeOf _x == "MSF_Placeholder_Vehicle_U"}] call MSF_fnc_OFE_SpawnUnmannedVic;
		if (count _vicDir > 0) then {
			{
				_x setDir (getDir _x + (_x getRelDir (position (_vicDir select 0))))
			} forEach _vics;
		};

		switch (_type) do {
			case 0; //vics	
			case 1: { //armor
				{
					_x setVehicleAmmo random 1;
					_x setDamage random [0, 0.45, 0.75];
					_x setFuel random [0.2, 0.40, 0.60];
				} forEach _vics;

				if (_type == 1) then
				{
					_unt = _group createUnit [selectRandom _deadUnitTypes, getPos ((_objects select {typeOf _x == "MSF_Placeholder_Infantry_D"}) select 0), [], 0, "CAN_COLLIDE"];
					_unt setDamage 1;
					_unt moveInDriver (_vics select 0);
				}
			};
			case 2: { //static
				{
					_x setVehicleAmmo random 1;
				} forEach _vics;		
			};	
		};

		_allObjs append _vics;
		_allObjs append units _group;
		_allObjs append units _eGroup;
	};

	case 3;
	case 4;
	case 5: {
		private _vap = _objects select {typeOf _x == "MSF_Placeholder_VehicleAmmo"};
		private _bp = _objects select {typeOf _x == "MSF_Placeholder_Supplies"};
		private _med = _objects select {typeOf _x == "MSF_Placeholder_Logi_Medical"};
		private _food = _objects select {typeOf _x == "MSF_Placeholder_Logi_Food"};

		if (count _vap > 0) then 
		{
			_vicAmmoBoxes = [_vap, _vicAmmo] call MSF_fnc_OFE_SpawnVehicleAmmo;
			_allObjs append _vicAmmoBoxes;
		};
		if (count _bp > 0) then {
			_boxes = [_bp, _fillCount, 0, _isOFE] call MSF_fnc_OFE_SpawnAndFillBoxes;
			_allObjs append _boxes;
		};
		if (count _med > 0) then {
			private _medboxes = [_med, _fillCount, 1, _isOFE] call MSF_fnc_OFE_SpawnAndFillBoxes;
			_allObjs append _medboxes;
		};
		if (count _food > 0) then {
			private _foodboxes = [_food, _fillCount, 2, _isOFE] call MSF_fnc_OFE_SpawnAndFillBoxes;
			_allObjs append _foodboxes;
		};
	};
};

[_allObjs, false] call MSF_fnc_ShowHideObjects;
[_logic, 400, 400, _activationSide, "present", false, _allObjs, 5] call MSF_fnc_OFE_CreateModuleActivationTrigger;

if (_isOFE) then {
	[9, _position] call MSF_fnc_OFE_CreateMapMarker;	
};