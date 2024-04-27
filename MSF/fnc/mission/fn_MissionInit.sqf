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
	[] call MSF_fnc_SetVehicleDamageReduction;
	[] call MSF_fnc_SetUnitDialogOption;
	
	if (getMissionConfigValue "MSF_Mission_GM") then {
		[] call MSF_fnc_ApplyGMActions;
	};

	if (getMissionConfigValue "MSF_Mission_EndMission") then {
		[] call MSF_fnc_ApplyEndMission;
	};
};
