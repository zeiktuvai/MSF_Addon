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
	
	_x setTriggerStatements[_statement select 0, "[thisTrigger] call MSF_fnc_CreateWaveDefenseArea;", _statement select 2];
	} forEach _wave;

	{		
		private _area = triggerArea _x;
		private _activ = triggerActivation _x;
		if ((_area select 0) > 5 && (_area select 1) > 5) then {
			[_x, (_area select 0)+500, (_area select 1)+500, _activ select 0, _activ select 1] call MSF_fnc_CreateActivationTrigger;
			_x setTriggerStatements[(triggerStatements _x) select 0, "[thisTrigger] call MSF_fnc_CreateRandomSupplies;", (triggerStatements _x) select 2];
		};
	} forEach _supply;

	{
		private _area = [_x] call MSF_fnc_GetAreaRadius;
		private _activ = triggerActivation _x;

		[_x, _area+300, _area +300, _activ select 0, _activ select 1] call MSF_fnc_CreateActivationTrigger;
		_x setTriggerStatements[(triggerStatements _x) select 0, "[thisTrigger] remoteExec [""MSF_fnc_FortifyArea"", 2]", (triggerStatements _x) select 2];
	} forEach _fortify;
};




