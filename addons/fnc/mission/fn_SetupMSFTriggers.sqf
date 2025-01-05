/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script sets up the different MSF triggers.
        
	Examples:
		[] call MSF_fnc_SetupMSFTriggers;

	Function Ver 1.0
	Implemented in: MSF Addon v2.1.0;
*/
// if (isServer) then {
// 	private _wave = allMissionObjects "MSFTriggerWave";
// 	//private _fortify = allMissionObjects "MSFTriggeFortify";

// 	{		
// 		private _statement = triggerStatements _x;
// 		private _waveArea = triggerArea _x;
// 		private _height = if (_x getVariable ["MSF_Trig_Waves_HeightLimit", false]) then { -1 } else { 50 };

// 		_x setTriggerStatements[_statement select 0, "[thisTrigger] call MSF_fnc_CreateWaveDefenseArea; " + (_statement select 1), _statement select 2];
// 		_x setTriggerArea[_waveArea select 0, _waveArea select 1, _waveArea select 2, _waveArea select 3, _height];
// 	} forEach _wave;
// };