/*
	_units = [0] call MSF_fnc_GetUnitClasses; 
	_units params ["_infGroups", "_vics", "_armor", "_air", "_turrets", "_infUnits"];
*/

params [["_type", 0, [0]]];

private ["_cfg", "_return"];
_return = [];
_cfg = [] call MSF_fnc_GetLocalConfig;

if (!isNull _cfg) then {
	
	_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'PatrolSets' >> 'Set1' >> 'Groups');
	_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'PatrolSets' >> 'Set1' >> 'Vehicles');
	_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'PatrolSets' >> 'Set1' >> 'Armor');
	_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'PatrolSets' >> 'Set1' >> 'Air');
	_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'PatrolSets' >> 'Set1' >> 'Turrets');
	_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'PatrolSets' >> 'Set1' >> 'Units');
}
else 
{
	_return pushBack getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'Set1' >> 'Groups');
	_return pushBack getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'Set1' >> 'Vehicles');
	_return pushBack getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'Set1' >> 'Armor');
	_return pushBack getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'Set1' >> 'Air');
	_return pushBack getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'Set1' >> 'Turrets');
	_return pushBack getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'Set1' >> 'Units');
};

_return;