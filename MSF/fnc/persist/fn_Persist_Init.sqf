
if (isServer && getMissionConfigValue "MSF_Mission_Persistence") then {
	if (getMissionConfigValue "MSF_Mission_Saving") then {
		_saveTrig = createTrigger ["EmptyDetector", [0,0,0]];
		_saveTrig setTriggerStatements ["triggerActivated trig_end_mission", "[] call MSF_fnc_Persist_SaveData; hint 'Persistence Saved';", ""];			
	};
	
	if (getMissionConfigValue "MSF_Mission_Loading") then {
		[] call MSF_fnc_Persist_LoadData;
	};
};
