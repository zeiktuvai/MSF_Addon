params [
	["_player", objNull, [objNull]],
	["_uavType", "B_UAV_02_dynamicLoadout_F", ["B_UAV_02_dynamicLoadout_F"]],
	["_side", west, [west]],
	["_heading", 0, [0]],
	["_spawnPos", [100, 100, 1000], [100, 100, 1000]]
];

_uav = [_spawnPos, _heading, _uavType, _side] call BIS_fnc_SpawnVehicle;
_player connectTerminalToUAV (_uav select 0);
(_uav select 2) addWaypoint [position _player, 0];
(_uav select 0) setVariable ["MSF_General_InfiniteFuel", true];

_uav;