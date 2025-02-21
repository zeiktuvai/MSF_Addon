params [
	["_unit", objNull, [objNull]],
	["_uavType", ["B_UAV_02_dynamicLoadout_F", "YABHON-R3"] , [[]]],
	["_side", west, [west]]
];

_uavType params ["_class", "_name"];

private _msf = ((missionNamespace getVariable "MSF") get "UAV_Inventory");
private _count = _msf get _name select 1;
private _spawnPos = [0,0,1000];

if (_class isKindOf "Land") then {
	_spawnPos = position (selectRandom (allMissionObjects "MSF_Module_UGVSpawn"));
}
else
{
	private _pos = position (selectRandom (allMissionObjects "MSF_Module_UAVSpawn"));
	_spawnPos = [_pos select 0, _pos select 1, 1000];
};

if (_count > 0) then {
	if (_count - 1 == 0) then {
		_msf deleteAt _name;
	}
	else
	{
		_msf set [_name, [_class, _count -1]];
	};

	["MSF", "UAV_Inventory", _msf] call MSF_fnc_SetConfigValue;

	private _msfLocal = localNamespace getVariable "MSF_Local";
	_msfLocal set ["UAV_SpawnTimer", serverTime + MSF_UAV_SpawnDelay];


	private _uav = [_spawnPos, [_unit, _spawnPos] call BIS_fnc_relativeDirTo, _class, _side] call BIS_fnc_SpawnVehicle;
	_unit connectTerminalToUAV (_uav select 0);
	(_uav select 2) addWaypoint [position _unit, 0];

	[["MSFDrone", "DroneDeployed"], 15, "", 35, "", true, true, false, true] call BIS_fnc_advHint;

	_uav;
};