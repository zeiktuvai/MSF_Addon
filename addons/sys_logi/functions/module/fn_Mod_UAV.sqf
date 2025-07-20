params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _uavs = [_units select {unitIsUAV _x}] call MSF_fnc_DistinctArray;
private _result = [];

{
	private _type = typeOf _x;
	private _count = count (_units select { typeOf _x == _type });
	_result pushBack [getText (configFile >> "CfgVehicles" >> _type >> "displayName"),[_type,_count]];
	
} forEach _uavs;

if (["MSF", "UAV_Inventory"] call MSF_fnc_ConfigValueExists) then {
	private _msf = (missionNamespace getVariable "MSF") get "UAV_Inventory";
	_msf merge (createHashMapFromArray _result);
	["MSF", "UAV_Inventory", _msf] call MSF_fnc_SetConfigValue;
}
else
{
	["MSF", "UAV_Inventory", createHashMapFromArray _result] call MSF_fnc_SetConfigValue;
};

{
	deleteVehicle _x;	
} forEach _units;
