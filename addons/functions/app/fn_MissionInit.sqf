/*
	Author: zeik_tuvai

	Description:
		MSF Mission Initialization script.  Is used to automatically apply settings and handlers to enabled objects.
        
	Examples:
		[] call MSF_fnc_Init;

	Function Ver 2.0
	Implemented in: MSF Addon v1.0
*/


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
	["Debug", {[format ["interval %1", time]] remoteExec ["systemChat"];}, 2] call MSF_fnc_RegisterServiceWorker;
	
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

[] call MSF_fnc_RandomSpawn;
