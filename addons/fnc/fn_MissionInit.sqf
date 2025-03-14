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

	[] spawn {
		sleep 10;
		[] call MSF_fnc_InitMSFHandler;	
	};
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
