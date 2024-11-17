params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

if (!(missionNamespace getVariable ["MSF_OFE_Setup", false])) then 
{
	private _EnemySide = _logic getVariable ["EnemySide", 0];
	missionNamespace setVariable ["MSF_OFE_EnemyFaction", _EnemySide, 0];
	missionNamespace setVariable ["MSF_OFE_EnemyStr", 4, true];
	missionNamespace setVariable ["MSF_OFE_Notoriety", 0, true];
	missionNamespace setVariable ["MSF_OFE_cpClear", 0, true];
	missionNamespace setVariable ["MSF_OFE_opClear", 0, true];
	missionNamespace setVariable ["MSF_OFE_baseClear", 0, true];
	missionNamespace setVariable ["MSF_OFE_airbaseClear", 0, true];
	missionNamespace setVariable ["MSF_OFE_Setup", true, true];
	missionNamespace setVariable ["MSF_OFE_LogiMultiplier", 1, true];

	[] remoteExec ["MSF_fnc_OFE_InitStatusDisplay"];
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
} ;
