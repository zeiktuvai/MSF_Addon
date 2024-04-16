
if (isServer && MSF_Persist_Enable) then {
	if (MSF_Persist_SaveEnable) then {
		_saveTrig = createTrigger ["EmptyDetector", [0,0,0]];
		_saveTrig setTriggerStatements ["triggerActivated trig_end_mission", "[] call MSF_fnc_Persist_SaveData;", ""];			
	};
	
	if (MSF_Persist_LoadEnable) then {
		[] call TFY_fnc_RestoreVicDataByName;
	};
};

// Persist TODO
// Enable deletion of previous missions var to save space/reset progress for future play throughs.
// Saving any vehicles in a named trigger area
// Possibly Enabling both styles (would have to look out for conflicts i.e. named vic in trigger)