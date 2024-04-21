/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script is used to initialize object properties.
        
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

	if (getMissionConfigValue "MSF_Mission_EndMission") then {
		[] call MSF_fnc_ApplyEndMission;
	};
};
