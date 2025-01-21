params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

if (_activated) then {
	private _type = _logic getVariable ["UnitTypes", "Civ_African"];

	private _spawns = _units select { typeOf _x == "MSF_Placeholder_Infantry_D"};
	private _override = _logic getVariable ["UnitClasses", ""];

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
		_deadUnitTypes = [_logic, "UnitClasses", "Parsing Class Override Dead Unit module"] call MSF_fnc_ParseValidArray;
	};

	[_deadUnitTypes, _spawns, _group] call MSF_fnc_OFE_SpawnInfantryOnPlaceholder;

	{
		_x setDamage 1;
	} forEach units _group;

	_logic setVariable ["MSF_DeadUnit_Group", _group];
} else {
	private _group = _logic getVariable "MSF_DeadUnit_Group";

	{
		deleteVehicle _x;
	} forEach units _group;
};