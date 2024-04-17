
if (isServer && getMissionConfigValue "MSF_Mission_Persistence") then {
	if (getMissionConfigValue "MSF_Mission_Saving") then {
		_saveTrig = createTrigger ["EmptyDetector", [0,0,0]];
		_saveTrig setVehicleVarName "save_trig";
		_saveTrig setTriggerStatements ["triggerActivated trig_end_mission", "[] call MSF_fnc_Persist_SaveData; hint 'Persistence Saved';", ""];			
	};
	
	if (getMissionConfigValue "MSF_Mission_Loading") then {
		[] call MSF_fnc_Persist_LoadData;
	};
};

// Persist TODO
// Enable deletion of previous missions var to save space/reset progress for future play throughs.
// Saving any vehicles in a named trigger area
// Possibly Enabling both styles (would have to look out for conflicts i.e. named vic in trigger)