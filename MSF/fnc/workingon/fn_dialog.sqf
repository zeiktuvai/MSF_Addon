/*
	Author: zeik_tuvai

	Description:
		Sets up an ace interaction option to start a dialog conversation with the given unit.  Be sure to configure the dialog in description.ext
		and create a bikb file for the dialog.

	Parameter(s):
        object - Unit object (player or unit).
		string - Task ID of task to complete when conversation begins
		string - Name of conversation class (referencing bikb file) in description.ext
		string - Name of parent class (class containing above class) in description.ext
		string - Path to animation script or empty string.
        
	Examples:
		Assuming you place this helper script into a folder called scripts in your root mission directory.  Place this in your units init.
		null = [this, "taskTalk", "TNAOff", "OperationRadioSilenceM2", "scripts/briefAnim.sqf"] execVM "scripts\tfy_helper_dialog.sqf";

	Script version 1.1
*/
params ["_unit", "_taskID", "_convName", "_containerName", "_animScriptPath"];
_values = [_taskID, _convName, _containerName, _animScriptPath];

private _statement = {
	params ["_target", "_player", "_params"];
	_params params ["_vals"];
	
 	[_vals select 0, "SUCCEEDED"] call BIS_fnc_taskSetState;
 	[_vals select 1, _vals select 2] remoteExec ["BIS_fnc_kbTell", 2];	
	if (_vals select 3 != "") then { nul = execVM (_vals select 3); };
};

private _cond = {
	params ["_target", "_player", "_actionParams"];	

	!(_actionParams select 0 call BIS_fnc_taskCompleted);
};

private _startConvo = ["start conversation",format ["Start Conversation with %1", name _unit],"",_statement, _cond, {}, [_values]] call ace_interact_menu_fnc_createAction; 

[_unit,0,["ACE_MainActions"],_startConvo] call ace_interact_menu_fnc_addActionToObject;