params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _west = _units select {getNumber (configOf _x >> "side") == 1};
private _east = _units select {getNumber (configOf _x >> "side") == 0};
private _ind = _units select {getNumber (configOf _x >> "side") == 2};

private _config = ["SpawnConfigOverride", "MSF", createHashMap] call MSF_fnc_GetConfigValue;

if (count _west > 0) then {		
	_config set [west, [_west, _config getOrDefault [west, createHashMap]] call MSF_fnc_GetSyncedUntConfig];
};
if (count _east > 0) then {	_config set [east, [_east, _config getOrDefault [east, createHashMap]] call MSF_fnc_GetSyncedUntConfig]; };
if (count _ind > 0) then { _config set [independent, [_ind, _config getOrDefault [independent, createHashMap]] call MSF_fnc_GetSyncedUntConfig]; };

["MSF", "SpawnConfigOverride", _config] call MSF_fnc_SetConfigValue;

missionNamespace setVariable ["msftest", _units];
{
	if !(isNull objectParent (crew _x # 0)) then {
		deleteVehicleCrew _x;
		deleteVehicle _x; 
	}
	else
	{
		deleteVehicle _x;
	};  
} forEach _units;

deleteVehicle _logic;
