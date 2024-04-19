params ["_init", "_jip"];

/*
	Author: zeik_tuvai

	Description:
		Part of MSF Persistence module.  This is the initialization script for persistence that is ran on mission init.
        
	Examples:
		[] call MSF_fnc_Init;

	Function Ver 2.0
	Implemented in: MSF Addon v1.0
*/
if (isServer) then {
	[] call MSF_fnc_ACEMedUnconcious;
	
	if (getMissionConfigValue "MSF_Mission_GM") then {
		[] call MSF_fnc_ApplyGMActions;
	};
};
