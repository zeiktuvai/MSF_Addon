/*
	Author: zeik_tuvai

	Description: This script sets every player to be a respawn position for their respective side.	
        
	Examples:
		[] call MSF_fnc_ConfigRespawnOnPlayer;

	Function Ver 1.0
	Implemented in: MSF Addon v1.0
*/
params ["_unit"];

if (getMissionConfigValue "MSF_Multi_RoP") then
{
	[side _unit, _unit] call BIS_fnc_addRespawnPosition;
};