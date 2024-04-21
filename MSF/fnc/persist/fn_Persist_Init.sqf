/*
	Author: zeik_tuvai

	Description:
		Part of MSF Persistence module.  This is the initialization script for persistence that is ran on mission init.
        
	Examples:
		[] call MSF_fnc_Init;

	Function Ver 2.0
	Implemented in: MSF Addon v1.0
*/
if (isServer && getMissionConfigValue "MSF_Mission_Persistence") then {
	if (getMissionConfigValue "MSF_Mission_Saving") then {
		_saveTrig = createTrigger ["EmptyDetector", [0,0,0]];
		private _con = "triggerActivated " + getMissionConfigValue "MSF_Mission_EndTrig"
		_saveTrig setTriggerStatements [_con, "[] call MSF_fnc_Persist_SaveData; hint 'Persistence Saved';", ""];			
	};
	
	if (getMissionConfigValue "MSF_Mission_Loading") then {
		[] call MSF_fnc_Persist_LoadData;
	};
};
