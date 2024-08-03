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
	private _patrol = allMissionObjects "MSFTrigger";

	private _height = if (getMissionConfigValue ["MSF_Mission_Trigger_HeightLimit", false]) then { -1 } else { 50 };

	{		
	private _statement = triggerStatements _x;
		private _waveArea = triggerArea _x;

		_x setTriggerStatements[_statement select 0, "[thisTrigger] call MSF_fnc_CreateWaveDefenseArea;", _statement select 2];
		_x setTriggerArea[_waveArea select 0, _waveArea select 1, _waveArea select 2, _waveArea select 3, _height];
	} forEach _wave;

	{		
		private _area = triggerArea _x;
		private _activ = triggerActivation _x;
		if ((_area select 0) > 5 && (_area select 1) > 5) then {
			[_x, (_area select 0)+500, (_area select 1)+500, _height, _activ select 0, _activ select 1, false] call MSF_fnc_CreateActivationTrigger;
			_x setTriggerStatements[(triggerStatements _x) select 0, "[thisTrigger] call MSF_fnc_CreateRandomSupplies;", (triggerStatements _x) select 2];
		};
	} forEach _supply;

	{
		private _area = [_x] call MSF_fnc_GetAreaRadius;
		private _activ = triggerActivation _x;

		[_x, _area+300, _area +300, _height, _activ select 0, _activ select 1, false] call MSF_fnc_CreateActivationTrigger;
		_x setTriggerStatements[(triggerStatements _x) select 0, "[thisTrigger] remoteExec [""MSF_fnc_FortifyArea"", 2]", (triggerStatements _x) select 2];
	} forEach _fortify;

	{	
		private _act = triggerActivation _x;
		private _trigArea = triggerArea _x;

		if (_x getVariable ["MSF_Trigger_Patrol", false] && !(_x getVariable ["MSF_Trigger_Patrol_Vic", false])) then 
		{
			if(triggerArea _x select 0 != 0 && triggerArea _x select 1 != 0) then 
			{		
				_x setTriggerActivation [_act select 0, _act select 1, _act select 2];
				_x setTriggerArea [_trigArea select 0, _trigArea select 1, _trigArea select 2, _trigArea select 3, _height];
				if (!isDedicated) then {
					_x setTriggerStatements ["this", 
					"[thisTrigger] spawn  {	params [""_trigger""]; [_trigger] call MSF_fnc_CreateRandomTriggerPatrol; };", 
					"[thisTrigger] call MSF_fnc_DeleteRandomTriggerPatrol;"];			
				}
				else
				{
					_x setTriggerStatements ["this", "[thisTrigger] call MSF_fnc_CreateRandomTriggerPatrol;", "[thisTrigger] call MSF_fnc_DeleteRandomTriggerPatrol;"];
				};			
			};
		};

		if (_x getVariable ["MSF_Trigger_Patrol_Vic", false] && !(_x getVariable ["MSF_Trigger_Patrol", false])) then 
		{
			if(triggerArea _x select 0 != 0 && triggerArea _x select 1 != 0) then 
			{		
				_x setTriggerActivation [_act select 0, _act select 1, _act select 2];
				_x setTriggerArea [_trigArea select 0, _trigArea select 1, _trigArea select 2, _trigArea select 3, _height];
				if (!isDedicated) then 
				{
					_x setTriggerStatements ["this", 
					"[thisTrigger] spawn  {	params [""_trigger""]; [_trigger] call MSF_fnc_CreateAreaVehiclePatrol; };", 
					"[thisTrigger] call MSF_fnc_DeleteRandomTriggerPatrol;"];			
				
				}
				else
				{
					_x setTriggerStatements ["this", "[thisTrigger] call MSF_fnc_CreateAreaVehiclePatrol;",	""];
				};				
			};
		};
	} forEach _patrol;
};