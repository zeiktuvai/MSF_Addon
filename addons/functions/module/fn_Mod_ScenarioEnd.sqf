params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _endCode = {
	if (getMissionConfigValue "MSF_Mission_Persistence" && getMissionConfigValue "MSF_Mission_Saving") then 
	{
		[] call MSF_Persist_fnc_SaveData;
	};

	["end"] remoteExec ["BIS_fnc_endMission", 0];
};

if (_activated) then {
	private _objs = _units select { isPlayer _x };
	_objs append (allPlayers select {admin (owner _x) == 2});

	{
		[["MSFEnd", "EndScenario"], 15, "", 35, "", true, true, false, true] remoteExec ["BIS_fnc_advHint", _x];
		[_x, "End Mission", _endCode, {true}, [], "a3\modules_f_curator\data\portraitendmission_ca.paa", true] call MSF_fnc_AddAceMenuItem;		
	} forEach _objs;	
};
