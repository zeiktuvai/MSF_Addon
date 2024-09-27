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
	[] call MSF_fnc_GenerateInventory;
	[] call MSF_fnc_InfiniteFuelHandler;	
	[] call MSF_fnc_SetUnitDialogOption;
	[] call MSF_fnc_ApplyDamageReduction;
	[] call MSF_fnc_ApplyObjectActions;
	[] call MSF_fnc_SetupMSFTriggers;
	//[] call MSF_fnc_SetupUAVSpawnSystem;

	if (getMissionConfigValue ["MSF_Mission_GM", false]) then {
		[] call MSF_fnc_ApplyGMActions;
	};

	if (getMissionConfigValue ["MSF_Mission_EndMission", false]) then {
		[] call MSF_fnc_ApplyEndMission;
	};	

	if (getMissionConfigValue ["MSF_Mission_VicCustomization", true]) then {
		[] call MSF_fnc_RespawnVehicleCustomization;
	};
};

if (!isServer) then
{	
	[player] call MSF_fnc_ConfigRespawnOnPlayer;
	[player, didJIP] call MSF_fnc_JIPSpawnNearPlayer;
	[] call MSF_fnc_ApplyDamageReduction;
}		