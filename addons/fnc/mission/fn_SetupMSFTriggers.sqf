/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script sets up the different MSF triggers.
        
	Examples:
		[] call MSF_fnc_SetupMSFTriggers;

	Function Ver 1.0
	Implemented in: MSF Addon v2.1.0;
*/
if (isServer) then {
	private _wave = allMissionObjects "MSFTriggerWave";
	private _supply = allMissionObjects "MSFTriggerSupply";
	private _fortify = allMissionObjects "MSFTriggeFortify";

	{		
		private _statement = triggerStatements _x;
		private _waveArea = triggerArea _x;
		private _height = if (_x getVariable ["MSF_Trig_Waves_HeightLimit", false]) then { -1 } else { 50 };

		_x setTriggerStatements[_statement select 0, "[thisTrigger] call MSF_fnc_CreateWaveDefenseArea; " + (_statement select 1), _statement select 2];
		_x setTriggerArea[_waveArea select 0, _waveArea select 1, _waveArea select 2, _waveArea select 3, _height];
	} forEach _wave;

	{		
		private _area = triggerArea _x;
		private _activ = triggerActivation _x;
		private _height = if (_x getVariable ["MSF_Trig_Supply_HeightLimit", false]) then { -1 } else { 50 };
		private _activationSize = _x getVariable ["MSF_Trig_Supply_ActivationSize", [500,500]];
		private _onActivated = (triggerStatements _x) select 1;

		if ((_area select 0) > 5 && (_area select 1) > 5) then {
			[_x, (_area select 0)+(_activationSize select 0), (_area select 1)+(_activationSize select 1), _height, _activ select 0, _activ select 1, false] call MSF_fnc_CreateLinkedActivationTrigger;
			private _statement = triggerStatements _x;
			_x setTriggerStatements[_statement select 0, "[thisTrigger] call MSF_fnc_CreateRandomSupplies; " + (_onActivated), _statement select 2];
		};
	} forEach _supply;

	{
		private _area = [_x] call MSF_fnc_GetAreaRadius;
		private _activ = triggerActivation _x;
		private _height = if (_x getVariable ["MSF_Trig_Fortify_HeightLimit", false]) then { -1 } else { 50 };
		private _activationSize = _x getVariable ["MSF_Trig_Fortify_ActivationSize", [300,300]];
		private _onStart = _x getVariable ["MSF_Trig_Fortify_SpawnImmediately", false];
		private _onActivated = (triggerStatements _x) select 1;

		[_x, _area+(_activationSize select 0), _area+(_activationSize select 1), _height, _activ select 0, _activ select 1, false, _onStart] call MSF_fnc_CreateLinkedActivationTrigger;
		private _statement = triggerStatements _x;
		_x setTriggerStatements[_statement select 0, "[thisTrigger] remoteExec [""MSF_fnc_FortifyArea"", 2]; " + (_onActivated), _statement select 2];
	} forEach _fortify;
};