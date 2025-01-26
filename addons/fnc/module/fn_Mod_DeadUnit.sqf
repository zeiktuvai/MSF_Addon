params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _type = _logic getVariable ["UnitTypes", "Civ_African"];
private _infSpawns = _units select { typeOf _x == "MSF_Placeholder_Infantry_D"};
private _vicSpawns = _units select { typeOf _x == "MSF_Placeholder_Vehicle_U"};
private _armorSpawns = _units select { typeOf _x == "MSF_Placeholder_Armor_U"};
private _ftSpawns = _units select { typeOf _x == "MSF_Placeholder_FuelTruck"};
private _atSpawns = _units select { typeOf _x == "MSF_Placeholder_AmmoTruck"};

private _uTypes = [2] call MSF_fnc_GetConfigClasses;
private _activationSide = _logic getVariable ["ActivationSide", 1];
private _override = _logic getVariable ["UnitClasses", ""];
private _vicDefault = _logic getVariable ["VicClassOverride", true];
private _armorDefault = _logic getVariable ["ArmorClassOverride", true];
private _area = _logic getVariable ["objectArea", [0,0,0,false,-1]];
private _group = objNull;
private _allObjs = [];

if (count _infSpawns > 0) then {
	private _deadUnitTypes = [];
	
	switch (_type) do {
		case "Civ_African";
		case "Civ_Asian";
		case "Civ_European";
		case "Civ_Livionian";
		case "Civ_Tanoan": {
			_deadUnitTypes = [4, sideEmpty, _type] call MSF_fnc_GetConfigClasses;
			_group = createGroup [civilian, true];
		};
		case "Mil_NATO": {
			_deadUnitTypes = [0, west] call MSF_fnc_GetConfigClasses select 5;
			_group = createGroup [west, true];
		};
		case "Mil_OPFOR": {
			_deadUnitTypes = [0, east] call MSF_fnc_GetConfigClasses select 5;
			_group = createGroup [east, true];
		};
		case "Mil_IND": {
			_deadUnitTypes = [0, independent] call MSF_fnc_GetConfigClasses select 5;
			_group = createGroup [independent, true];
		};
	};

	if (_override != "") then {
		_deadUnitTypes = [_logic, "UnitClasses", "Parsing Infantry Class Override Dead Unit module"] call MSF_fnc_ParseValidArray;
	};

	[_deadUnitTypes, _infSpawns, _group] call MSF_fnc_OFE_SpawnInfantryOnPlaceholder;

	{
		_x setDamage 1;
	} forEach units _group;

	_allObjs append units _group;
};

if (count _vicSpawns > 0) then {
	private _vicTypes = [];
	
	if (_vicDefault) then {			
		_vicTypes =	_uTypes select 0;
	} else {
		_vicTypes = [_logic, "VicClasses", "Parsing Vehicle Class Override Dead Unit module"] call MSF_fnc_ParseValidArray;
	};

	_allObjs append ([_vicTypes, _vicSpawns] call MSF_fnc_OFE_SpawnUnmannedVic);
};

if (count _armorSpawns > 0) then {
	private _types = [];
	
	if (_armorDefault) then {			
		_types = _uTypes select 1;
	} else {
		_types = [_logic, "ArmorClasses", "Parsing Armor Class Override Dead Unit module"] call MSF_fnc_ParseValidArray;
	};

	_allObjs append ([_types, _armorSpawns] call MSF_fnc_OFE_SpawnUnmannedVic);
};

if (count _ftSpawns > 0) then {
	private _types = _uTypes select 5;
	
	_allObjs append ([_types, _ftSpawns] call MSF_fnc_OFE_SpawnUnmannedVic);	
};

if (count _atSpawns > 0) then {
	private _types = _uTypes select 6;
	
	_allObjs append ([_types, _atSpawns] call MSF_fnc_OFE_SpawnUnmannedVic);
};

[_allObjs, false] call MSF_fnc_ShowHideObjects;
[_logic, _area select 0, _area select 1, [_activationSide] call MSF_fnc_GetModuleActivationSide, "present", _area select 3, _allObjs, "POI"] call MSF_fnc_OFE_CreateModuleActivationTrigger;

private _desc = "Reported Military Activity";
["DEADUNIT_MOD", position _logic, _desc, ["CIV", "OBJ"], ["hd_warning", "Color1_FD_F"], ["MapUpdate", format ["Map updated with %1.", _desc]], _desc] call MSF_Intel_fnc_AddIntelItem;