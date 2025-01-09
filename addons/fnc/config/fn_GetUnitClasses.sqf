/*
	_units = [0] call MSF_fnc_GetUnitClasses; 
	_units params ["_infGroups", "_vics", "_armor", "_air", "_turrets", "_infUnits"];
*/

params [["_side", east, [east]]];

private ["_faction"];
private _override = [[_side] call BIS_fnc_sideID] call MSF_fnc_GetOverrideCfg;
private _return = [];

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
private _groups = getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Groups');
private _vics 	= getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Vehicles');
private _armor 	= getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Armor');
private _air 	= getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Air');
private _turrets = getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Turrets');
private _units 	= getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'Units');
private _vicPatrol 	= getArray (configFile >> 'MSFConfig' >> 'UnitSets' >> _faction >> 'VehiclePatrols');

if (count _override > 0) then {
	_override params ["_groupsOvr", "_vicsOvr", "_armorOvr", "_airOvr", "_turretsOvr", "_unitsOvr", "_vicPatrolOvr"];
	
	if (count _groupsOvr > 0) then { _return pushBack _groupsOvr; } else { _return pushBack _groups; };
	if (count _vicsOvr > 0) then { _return pushBack _vicsOvr; } else { _return pushBack _vics; };
	if (count _armorOvr > 0) then {	_return pushBack _armorOvr; } else { _return pushBack _armor; };
	if (count _airOvr > 0) then { _return pushBack _airOvr;	} else { _return pushBack _air; };
	if (count _turretsOvr > 0) then { _return pushBack _turretsOvr; } else { _return pushBack _turrets; };
	if (count _unitsOvr > 0) then { _return pushBack _unitsOvr; } else { _return pushBack _units; };
	if (count _vicPatrolOvr > 0) then { _return pushBack _vicPatrolOvr;	} else { _return pushBack _vicPatrol; };
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