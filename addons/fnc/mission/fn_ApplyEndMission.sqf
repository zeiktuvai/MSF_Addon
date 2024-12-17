/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script is used to set up the end mission ace menu option.
        
	Examples:
		[] call MSF_fnc_ApplyEndMission;

	Function Ver 2.0
	Implemented in: MSF Addon v1.0
*/
if(isServer && getMissionConfigValue "MSF_Mission_EndMission") then
{
	private _players = ["MSF_Player_IsSL"] call MSF_fnc_GetPlayersByProperty;

	private _endCode = {
		if (getMissionConfigValue "MSF_Mission_Persistence" && getMissionConfigValue "MSF_Mission_Saving") then 
		{
			[] call MSF_fnc_Persist_SaveData;
		};

		["end"] remoteExec ["BIS_fnc_endMission", 0];
	};

	private _endCon = {
		private _trig = missionNamespace getVariable (getMissionConfigValue "MSF_Mission_EndTrig");

		triggerActivated _trig;
	};

	{ 
		_end_mission = ["end_mission","End Mission","", _endCode, _endCon] call ace_interact_menu_fnc_createAction;
		
		[_x, 1, ["ACE_SelfActions"], _end_mission] call ace_interact_menu_fnc_addActionToObject;
	} forEach _players;
};
