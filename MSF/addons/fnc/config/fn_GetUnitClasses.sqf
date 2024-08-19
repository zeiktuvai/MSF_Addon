/*
	_units = [0] call MSF_fnc_GetUnitClasses; 
	_units params ["_infGroups", "_vics", "_armor", "_air", "_turrets", "_infUnits"];
*/

params [["_side", east, [east]]];

private ["_cfg", "_return", "_faction", "_groups", "_vics", "_armor", "_air", "_turrets", "_units", "_vicPatrol"];
_return = [];
_cfg = [] call MSF_fnc_GetLocalConfig;

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


// Get default unit set
_groups = getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Groups');
_vics 	= getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Vehicles');
_armor 	= getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Armor');
_air 	= getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Air');
_turrets = getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Turrets');
_units 	= getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Units');
_vicPatrol 	= getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'VehiclePatrols');

if (!isNull _cfg) then {
	if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'UnitSets' >> _faction >> 'Groups')) then {
		_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'UnitSets' >> _faction >> 'Groups');
	} else { _return pushBack _groups; };
	if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'UnitSets' >> _faction >> 'Vehicles')) then {
		_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'UnitSets' >> _faction >> 'Vehicles');
	} else { _return pushBack _vics; };
	if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'UnitSets' >> _faction >> 'Armor')) then {
		_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'UnitSets' >> _faction >> 'Armor');
	} else { _return pushBack _armor; };
	if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'UnitSets' >> _faction >> 'Air')) then {
		_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'UnitSets' >> _faction >> 'Air');
	} else { _return pushBack _air; };
	if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'UnitSets' >> _faction >> 'Turrets')) then {
		_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'UnitSets' >> _faction >> 'Turrets');
	} else { _return pushBack _turrets; };
	if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'UnitSets' >> _faction >> 'Units')) then {
		_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'UnitSets' >> _faction >> 'Units');
	} else { _return pushBack _units; };
	if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'UnitSets' >> _faction >> 'VehiclePatrols')) then {
		_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'UnitSets' >> _faction >> 'VehiclePatrols');
	} else { _return pushBack _vicPatrol; };
}
else 
{
	_return pushBack _groups;
	_return pushBack _vics;
	_return pushBack _armor;
	_return pushBack _air;
	_return pushBack _turrets;
	_return pushBack _units;
	_return pushBack _vicPatrol;
};

_return;