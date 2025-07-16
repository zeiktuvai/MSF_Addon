if (count (allMissionObjects "MSF_Module_OFE") > 0) then {
	if (!(missionNamespace getVariable ["MSF_OFE_Setup", false])) then 
	{
		if (isServer) then {
			missionNamespace setVariable ["MSF_OFE_EnemyStr", 4, true];
			missionNamespace setVariable ["MSF_OFE_Notoriety", 0, true];
			missionNamespace setVariable ["MSF_OFE_cpClear", 0, true];
			missionNamespace setVariable ["MSF_OFE_opClear", 0, true];
			missionNamespace setVariable ["MSF_OFE_baseClear", 0, true];
			missionNamespace setVariable ["MSF_OFE_airbaseClear", 0, true];

			missionNamespace setVariable ["MSF_OFE_cpCount", [[["MSF_Mod_OFE_Checkpoint", false]]] call MSF_fnc_OFE_EnumerateModules, true];
			missionNamespace setVariable ["MSF_OFE_opCount", [[["MSF_Mod_OFE_Outpost", false], ["MSF_Mod_OFE_ExistingLoc", true, 5]]] call MSF_fnc_OFE_EnumerateModules, true];
			missionNamespace setVariable ["MSF_OFE_baseCount", [[["MSF_Mod_OFE_Base", false], ["MSF_Mod_OFE_ExistingLoc", true, 6]]] call MSF_fnc_OFE_EnumerateModules, true];
			missionNamespace setVariable ["MSF_OFE_airbaseCount", [[["MSF_Mod_OFE_Airbase", false], ["MSF_Mod_OFE_ExistingLoc", true, 7], ["MSF_Mod_OFE_ExistingLoc", true, 8]]] call MSF_fnc_OFE_EnumerateModules, true];

			missionNamespace setVariable ["MSF_OFE_Setup", true, true];
			//missionNamespace setVariable ["MSF_OFE_LogiMultiplier", 1, true];

			[configFile >> "MSF_OFE_EnemyStatemachine"] call CBA_statemachine_fnc_createFromConfig;

			[] spawn
			{
				while {true} do {					
					private _vals = [] call MSF_fnc_OFE_CalculateStrengthValues;
					missionNamespace setVariable ["MSF_OFE_EnemyStr", _vals select 0, true];
					missionNamespace setVariable ["MSF_OFE_Notoriety", _vals select 1, true];

					sleep 30;
				};
			};
		};
	};

	[] call MSF_fnc_OFE_InitStatusDisplay;
}
