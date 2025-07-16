with uiNamespace do { 
	[] spawn { 
		waitUntil {!isNull findDisplay 46}; 
		disableSerialization; 
		
		_ctrl = findDisplay 46 ctrlCreate ["RscStructuredText", -1]; 
		_ctrl ctrlSetPosition [safeZoneX + safeZoneW * 0.4, safeZoneY, safeZoneW * 0.2, safeZoneH * 0.025];
		_ctrl ctrlSetBackgroundColor [0,0,0,0.3];
		_ctrl ctrlCommit 0; 
		
		while {true} do { 
			_ctrl ctrlSetStructuredText parseText format[ 
				"<t color='#ffffff' align='center' size='1'> Enemy Strength: %1  |  Notoriety: %2</t>", 
				[missionNamespace getVariable ["MSF_OFE_EnemyStr", 4]] call MSF_fnc_OFE_GetStrengthText,
				[missionNamespace getVariable ["MSF_OFE_Notoriety", 0]] call MSF_fnc_OFE_GetNotorietyText
			]; 
			sleep 5;
		}; 
	}; 
};
