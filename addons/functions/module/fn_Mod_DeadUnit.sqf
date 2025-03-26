params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

[] call MSF_Intel_fnc_GetIsIntelEnabled;

private _type = _logic getVariable ["UnitTypes", "Civ_African"];
private _infSpawns = _units select { typeOf _x == "MSF_Placeholder_Infantry_D"};
private _vicSpawns = _units select { typeOf _x == "MSF_Placeholder_Vehicle_U"};
private _armorSpawns = _units select { typeOf _x == "MSF_Placeholder_Armor_U"};
private _ftSpawns = _units select { typeOf _x == "MSF_Placeholder_FuelTruck"};
private _atSpawns = _units select { typeOf _x == "MSF_Placeholder_AmmoTruck"};

private _uTypes = ["empty"] call MSF_fnc_GetConfigData;
private _activationSide = _logic getVariable ["ActivationSide", 1];
private _override = _logic getVariable ["UnitClasses", ""];
private _vicDefault = _logic getVariable ["VicClassOverride", true];
private _armorDefault = _logic getVariable ["ArmorClassOverride", true];
private _area = _logic getVariable ["objectArea", [0,0,0,false,-1]];
private _intel = _logic getVariable ["IntelIntegration", true];
private _intelP = _logic getVariable ["IntelProvider", false];
private _interactC = _logic getVariable ["InteractionChance", 0.7];
private _intelC = _logic getVariable ["IntelChance", 0.2];
private _group = objNull;
private _allObjs = [];
private _intelID = "";

if (count _infSpawns > 0) then {
	private _deadUnitTypes = [];
	
	switch (_type) do {
		case "Civ_African";
		case "Civ_Asian";
		case "Civ_European";
		case "Civ_Livionian";
		case "Civ_Tanoan": {
			_deadUnitTypes = ["civs"] call MSF_fnc_GetConfigData get _type;
			_group = createGroup [civilian, true];
		};
		case "Mil_NATO": {
			_deadUnitTypes = ["unit", west] call MSF_fnc_GetConfigData get "Units";
			_group = createGroup [west, true];
		};
		case "Mil_OPFOR": {
			_deadUnitTypes = ["unit", east] call MSF_fnc_GetConfigData get "Units";
			_group = createGroup [east, true];
		};
		case "Mil_IND": {
			_deadUnitTypes = ["unit", independent] call MSF_fnc_GetConfigData get "Units";
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
		_vicTypes =	_uTypes get "UnmannedVic";
	} else {
		_vicTypes = [_logic, "VicClasses", "Parsing Vehicle Class Override Dead Unit module"] call MSF_fnc_ParseValidArray;
	};

	_allObjs append ([_vicTypes, _vicSpawns] call MSF_fnc_OFE_SpawnUnmannedVic);
};

if (count _armorSpawns > 0) then {
	private _types = [];
	
	if (_armorDefault) then {			
		_types = _uTypes get "UnmannedArmor";
	} else {
		_types = [_logic, "ArmorClasses", "Parsing Armor Class Override Dead Unit module"] call MSF_fnc_ParseValidArray;
	};

	_allObjs append ([_types, _armorSpawns] call MSF_fnc_OFE_SpawnUnmannedVic);
};

if (count _ftSpawns > 0) then {
	private _types = _uTypes get "FuelTruck";
	
	_allObjs append ([_types, _ftSpawns] call MSF_fnc_OFE_SpawnUnmannedVic);	
};

if (count _atSpawns > 0) then {
	private _types = _uTypes get "AmmoTruck";
	
	_allObjs append ([_types, _atSpawns] call MSF_fnc_OFE_SpawnUnmannedVic);
};

// intel system
if (_intelP && _type in ["Mil_NATO", "Mil_OPFOR", "Mil_IND"]) then
{
	{		
		if ([_interactC] call MSF_fnc_CalculateProbability) then {
			[_x, _intelC] call MSF_Intel_fnc_AddIntelInteraction;
		};		
	} forEach units _group;
};

[_allObjs, false] call MSF_fnc_ShowHideObjects;

if (_intel) then {
	private _desc = "Reported Military Activity";
	_intelID = ["DEADUNIT_MOD", position _logic, _desc, ["CIV", "OBJ"], 1, ["hd_warning", "Color1_FD_F"], ["MapUpdate", format ["Map updated with %1.", _desc]], []] call MSF_Intel_fnc_AddIntelItem;
};

[_logic, _area select 0, _area select 1, [_activationSide] call MSF_fnc_GetModuleActivationSide, "present", _area select 3, _allObjs, "POI", [], _intelID] call MSF_fnc_OFE_CreateModuleActivationTrigger;
