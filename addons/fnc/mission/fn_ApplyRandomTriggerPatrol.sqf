/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script creates a patrol in a the designated trigger area with 8 waypoints.
        
	Examples:
		[] call MSF_fnc_GenerateRandomTriggerPatrol;

	Function Ver 1.1
	Implemented in: MSF Addon v1.5.2
*/

private _triggers = allMissionObjects "EmptyDetector" select { 
	(_x getVariable ["MSF_Trigger_Patrol", false] == true && _x getVariable ["MSF_Trig_Patrol_Group", ""] != "") ||
	_x getVariable ["MSF_Trigger_Patrol_Vic", false] == true
};

{	
	private _act = triggerActivation _x;

	if (_x getVariable ["MSF_Trigger_Patrol", false] && !(_x getVariable ["MSF_Trigger_Patrol_Vic", false])) then 
	{
		if(triggerArea _x select 0 != 0 && triggerArea _x select 1 != 0) then 
		{		
			_x setTriggerActivation [_act select 0, _act select 1, _act select 2];
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
} forEach _triggers;