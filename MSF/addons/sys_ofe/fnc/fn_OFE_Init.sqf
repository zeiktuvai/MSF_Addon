if (missionNamespace getVariable ["MSF_OFE_Setup", false]) then 
{
	missionNamespace setVariable ["MSF_OFE_EnemyStr", 4, true];
	missionNamespace setVariable ["MSF_OFE_Notoriety", 0, true];
	missionNamespace setVariable ["MSF_OFE_cpClear", 0, true];
	missionNamespace setVariable ["MSF_OFE_opClear", 0, true];
	missionNamespace setVariable ["MSF_OFE_baseClear", 0, true];
	missionNamespace setVariable ["MSF_OFE_airbaseClear", 0, true];
	missionNamespace setVariable ["MSF_OFE_Setup", true, true];
	[] remoteExec ["MSF_fnc_Esc_InitStatusDisplay"];
} ;
