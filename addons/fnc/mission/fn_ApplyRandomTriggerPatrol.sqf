/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script creates a patrol in a the designated trigger area with 8 waypoints.
        
	Examples:
		[] call MSF_fnc_GenerateRandomTriggerPatrol;

	Function Ver 1.0
	Implemented in: MSF Addon v1.5.2
*/

private _triggers = allMissionObjects "EmptyDetector" select { 
	_x getVariable ["MSF_Trigger_Patrol", false] == true 
	&& _x getVariable ["MSF_Trig_Patrol_Group", ""] != ""
};

{	
	
	if(triggerArea _x select 0 != 0 && triggerArea _x select 1 != 0) then {		
		_x setTriggerActivation ["ANYPLAYER", "PRESENT", (triggerActivation _x) select 2];
		_x setTriggerStatements ["this",
		"[thisTrigger] call MSF_fnc_CreateRandomTriggerPatrol;",
		"[thisTrigger] call MSF_fnc_DeleteRandomTriggerPatrol;"];
	};
} forEach _triggers;