/*
	_units = [0] call MSF_fnc_GetUnitClasses; 
	_units params ["_infGroups", "_vics", "_armor", "_air", "_turrets", "_infUnits"];
*/

params [["_type", 0, [0]]];

private _return = [];

switch (_type) do {
	case 0: {
		_return pushBack parseSimpleArray (getMissionConfigValue ["MSFProp_Group_Types", str getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'AFRF_Classes' >> 'Groups')]);
		_return pushBack parseSimpleArray (getMissionConfigValue ["MSFProp_Vic_Types", str getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'AFRF_Classes' >> 'Vehicles')]);
		_return pushBack parseSimpleArray (getMissionConfigValue ["MSFProp_Armor_Types", str getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'AFRF_Classes' >> 'Armor')]);
		_return pushBack parseSimpleArray (getMissionConfigValue ["MSFProp_Air_Types", str getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'AFRF_Classes' >> 'Air')]);
		_return pushBack parseSimpleArray (getMissionConfigValue ["MSFProp_Turrets_Types", str getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'AFRF_Classes' >> 'Turrets')]);
		_return pushBack parseSimpleArray (getMissionConfigValue ["MSFProp_Unit_Types", str getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'AFRF_Classes' >> 'Units')]);
	 };	
};

_return;