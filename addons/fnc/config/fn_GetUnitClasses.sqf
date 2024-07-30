/*
	_units = [0] call MSF_fnc_GetUnitClasses; 
	_units params ["_infGroups", "_vics", "_armor", "_air", "_turrets", "_infUnits"];
*/

params [["_type", 0, [0]]];

private ["_cfg", "_return", "_faction", "_groups", "_vics", "_armor", "_air", "_turrets", "_units"];
_return = [];
_cfg = [] call MSF_fnc_GetLocalConfig;

switch (_type) do {
	case 0: { _faction = "Set1" };
	case 1: { _faction = "Set2" };
	default { _faction = "Set1" };
};

// Get default unit set
_groups = getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> _faction >> 'Groups');
_vics 	= getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> _faction >> 'Vehicles');
_armor 	= getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> _faction >> 'Armor');
_air 	= getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> _faction >> 'Air');
_turrets = getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> _faction >> 'Turrets');
_units 	= getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> _faction >> 'Units');

if (!isNull _cfg) then {
	if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'PatrolSets' >> _faction >> 'Groups')) then {
		_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'PatrolSets' >> _faction >> 'Groups');
	} else { _return pushBack _groups; };
	if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'PatrolSets' >> _faction >> 'Vehicles')) then {
		_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'PatrolSets' >> _faction >> 'Vehicles');
	} else { _return pushBack _vics; };
	if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'PatrolSets' >> _faction >> 'Armor')) then {
		_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'PatrolSets' >> _faction >> 'Armor');
	} else { _return pushBack _armor; };
	if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'PatrolSets' >> _faction >> 'Air')) then {
		_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'PatrolSets' >> _faction >> 'Air');
	} else { _return pushBack _air; };
	if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'PatrolSets' >> _faction >> 'Turrets')) then {
		_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'PatrolSets' >> _faction >> 'Turrets');
	} else { _return pushBack _turrets; };
	if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'PatrolSets' >> _faction >> 'Units')) then {
		_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'PatrolSets' >> _faction >> 'Units');
	} else { _return pushBack _units; };
}
else 
{
	_return pushBack _groups;
	_return pushBack _vics;
	_return pushBack _armor;
	_return pushBack _air;
	_return pushBack _turrets;
	_return pushBack _units;
};

_return;