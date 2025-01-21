params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

if (_activated) then {
	private _type = _logic getVariable ["UnitTypes", "Civ_African"];
	private _infSpawns = _units select { typeOf _x == "MSF_Placeholder_Infantry_D"};
	private _vicSpawns = _units select { typeOf _x == "MSF_Placeholder_Vehicle_U"};
	private _armorSpawns = _units select { typeOf _x == "MSF_Placeholder_Armor_U"};
	private _ftSpawns = _units select { typeOf _x == "MSF_Placeholder_FuelTruck"};
	private _atSpawns = _units select { typeOf _x == "MSF_Placeholder_AmmoTruck"};

	private _uTypes = [2] call MSF_fnc_GetConfigClasses;
	private _override = _logic getVariable ["UnitClasses", ""];
	private _vicDefault = _logic getVariable ["VicClassOverride", true];
	private _armorDefault = _logic getVariable ["ArmorClassOverride", true];

	if (count _infSpawns > 0) then {
		private _group = createGroup [civilian, true];
		private _deadUnitTypes = [];
		
		switch (_type) do {
			case "Civ_African";
			case "Civ_Asian";
			case "Civ_European";
			case "Civ_Livionian";
			case "Civ_Tanoan": {
				_deadUnitTypes = [4, sideEmpty, _type] call MSF_fnc_GetConfigClasses;
			};
			case "Mil_NATO": {
				_deadUnitTypes = [0, west] call MSF_fnc_GetConfigClasses select 5;
			};
			case "Mil_OPFOR": {
				_deadUnitTypes = [0, east] call MSF_fnc_GetConfigClasses select 5;
			};
			case "Mil_IND": {
				_deadUnitTypes = [0, independent] call MSF_fnc_GetConfigClasses select 5;
			};
		};
	
		if (_override != "") then {
			_deadUnitTypes = [_logic, "UnitClasses", "Parsing Infantry Class Override Dead Unit module"] call MSF_fnc_ParseValidArray;
		};

		[_deadUnitTypes, _infSpawns, _group] call MSF_fnc_OFE_SpawnInfantryOnPlaceholder;

		{
			_x setDamage 1;
		} forEach units _group;
	
		_logic setVariable ["MSF_DeadUnit_Group", _group];
	};

	if (count _vicSpawns > 0) then {
		private _vicTypes = [];
		
		if (_vicDefault) then {			
			_vicTypes =	_uTypes select 0;
		} else {
			_vicTypes = [_logic, "VicClasses", "Parsing Vehicle Class Override Dead Unit module"] call MSF_fnc_ParseValidArray;
		};

		[_vicTypes, _vicSpawns] call MSF_fnc_OFE_SpawnUnmannedVic;
	};

	if (count _armorSpawns > 0) then {
		private _types = [];
		
		if (_armorDefault) then {			
			_types = _uTypes select 1;
		} else {
			_types = [_logic, "ArmorClasses", "Parsing Armor Class Override Dead Unit module"] call MSF_fnc_ParseValidArray;
		};

		[_types, _armorSpawns] call MSF_fnc_OFE_SpawnUnmannedVic;
	};

	if (count _ftSpawns > 0) then {
		private _types = _uTypes select 5;
		
		[_types, _ftSpawns] call MSF_fnc_OFE_SpawnUnmannedVic;
	};

	if (count _atSpawns > 0) then {
		private _types = _uTypes select 6;
		
		[_types, _atSpawns] call MSF_fnc_OFE_SpawnUnmannedVic;
	};
} else {
	private _group = _logic getVariable "MSF_DeadUnit_Group";

	{
		deleteVehicle _x;
	} forEach units _group;
};