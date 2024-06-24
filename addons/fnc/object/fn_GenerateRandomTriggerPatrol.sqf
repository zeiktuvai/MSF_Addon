/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script creates a patrol in a the designated trigger area with 8 waypoints.
        
	Examples:
		[] call MSF_fnc_GenerateRandomTriggerPatrol;

	Function Ver 1.0
	Implemented in: MSF Addon v1.5.2
*/

private _triggers = allMissionObjects "EmptyDetector" select { _x getVariable ["MSF_Trigger_Patrol", false] == true };

{
private _trigger = _x;
private _grpName = _x getVariable ["MSF_Trig_Patrol_Group", "OIA_InfTeam"] trim ['"', 0];
private _amount = 8;
private _start = [_trigger] call BIS_fnc_randomPosTrigger;
private _pos = [_start, 1, 50, 3, 0, 20, 0] call BIS_fnc_findSafePos;
private _type = [configfile >> "CfgGroups", 4] call BIS_fnc_returnChildren select { configName _x == _grpName } select 0;
private _group = [_pos, east, _type] call BIS_fnc_spawnGroup;
{ _x addCuratorEditableObjects [units _group]} forEach allCurators;

for "_i" from 1 to _amount do {
	private _location = [_trigger] call BIS_fnc_randomPosTrigger;
    _wp = _group addWaypoint [_location, 10, _i ];
 
    if ( _i == 1 ) then {
        [_group, _i] setWaypointBehaviour "SAFE";
        [_group, _i] setWaypointCombatMode "RED";
        [_group, _i] setWaypointFormation "COLUMN";
    };    
};
 
_wp = _group addWaypoint [_start, 10, _amount];
[_group, _amount] setWaypointType "CYCLE";
} forEach _triggers;


//if (triggerArea testtrig2 select 0 != 0 && triggerArea testtrig2 select 1 != 0) then {systemChat "trigger has area" } else { systemChat "trigger has no area" };
//Arma area is x+y = area in meters.