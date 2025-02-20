private _droneOps = allPlayers select { _x getUnitTrait "UavHacker" };
private _count = count ((missionNamespace getVariable "MSF") get "UAV_Inventory");
if (isNil "_count") then {_count = 0;};

private _action = {
	private _msfLocal = localNamespace getVariable "MSF_Local";
	private _spawnTime = _msfLocal getOrDefault ["UAV_SpawnTimer", 0];

	if (serverTime > _spawnTime) then {
		[] call MSF_Inv_fnc_DisplayDeployUAV;
	}
	else
	{
		hint "Drones are not ready yet.";
	};
};
private _condition = {
	count ((missionNamespace getVariable "MSF") get "UAV_Inventory") > 0;
};

if (_count > 0 && count _droneOps > 0) then {

	{		
		[_x, "Deploy Drone", _action, _condition, [], "\A3\Drones_F\Air_F_Gamma\UAV_02\Data\UI\Map_UAV_02_CA.paa", true] call MSF_fnc_AddAceMenuItem;
	} forEach _droneOps;
};