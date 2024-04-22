/*
	Author: zeik_tuvai

	Description: This script allows players that join after the start of the mission to spawn near other players instead of the start.		
        
	Examples:
		[] call MSF_fnc_JIPSpawnNearPlayer;

	Function Ver 1.0
	Implemented in: MSF Addon v1.0
*/

if (getMissionConfigValue "MSF_Multi_JnP" && didJIP) then {
    waituntil {sleep 1; !isnull player};

    private _unit = playableUnits call BIS_fnc_selectRandom;
    private _startPos = [getPos _unit, random [25, 0, 100], random 360] call BIS_fnc_relPos;
    player setPos _startPos;
};