// Main MSF Initialization for missions

if (isServer) then {
	[] call MSF_fnc_ACEMedUnconcious;
	[] call MSF_fnc_HideShowHideModUnits;

	if (getMissionConfigValue ["MSF_Mission_VicCustomization", true]) then {
		[] call MSF_fnc_RespawnVehicleCustomization;
	};

	if (MSF_AU_Enemy_Plane) then {
		["au_planes", {[] call MSF_fnc_AntistasiEnemyPlaneService;}, 0] call MSF_fnc_RegisterServiceWorker;
	};
	["infFuel", {[] call MSF_fnc_InfiniteFuelService;}, MSF_Fuel_Tick] call MSF_fnc_RegisterServiceWorker;
	
	//TODO: Remove this before release
	//["Debug", {[format ["interval %1", time]] remoteExec ["systemChat"];}, 2] call MSF_fnc_RegisterServiceWorker;
	
	[] call MSF_fnc_InitializeMSFService;
};

if (!isServer) then
{	
	[player] call MSF_fnc_ConfigRespawnOnPlayer;
	[player, didJIP] call MSF_fnc_JIPSpawnNearPlayer;
	//[] call MSF_fnc_ApplyDamageReduction;
};

if (!isDedicated) then
{
	if (MSF_Unit_EnableOverride_W) then {
		[] call MSF_fnc_AddInventoryOverrideOption;
		[] call MSF_fnc_SetWeaponOverrideEH;
	};
};

if (hasInterface) then {
	[] call MSF_UI_fnc_InitUI;
};

[] call MSF_fnc_RandomSpawn;
