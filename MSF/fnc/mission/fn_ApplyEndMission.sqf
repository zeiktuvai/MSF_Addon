
if(isServer && getMissionConfigValue "MSF_Mission_EndMission") then
{
	private _players = allPlayers select { _x getVariable "MSF_Player_IsSL" == true; };

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
