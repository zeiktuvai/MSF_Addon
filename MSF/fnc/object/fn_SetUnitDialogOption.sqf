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

if (isServer) then {
	private _units = ["MSF_General_Dialog"] call MSF_fnc_GetUnitsByProperty;
	
	{
		private _taskID = _x getVariable ["MSF_General_Dialog_Task", ""];
		private _action = _x getVariable ["MSF_General_Dialog_Action", ""];
		private _path = _x getVariable ["MSF_General_Dialog_Class", ""];

		if (_path == "") exitWith {};

		private _classes = _path splitString ">>";

		_values = [_taskID, _classes select 1, _classes select 0, _action];

		private _statement = {
			params ["_target", "_player", "_params"];
			_params params ["_vals"];
						
			private _task = _vals select 0;
			private _script = _vals select 3;

			if (_task != "") then {
				[_task, "SUCCEEDED"] call BIS_fnc_taskSetState;				
			};

			[trim(_vals select 1), trim(_vals select 2)] remoteExec ["BIS_fnc_kbTell", 2];	
			
			if (_script != "") then { call compile _script; };
			_target setVariable ["MSF_General_Dialog_Complete", false];
		};

		private _cond = {
			params ["_target", "_player", "_actionParams"];	

			_target getVariable ["MSF_General_Dialog_Complete", true];
		};

		private _startConvo = ["start conversation",format ["Start Conversation with %1", name _x],"",_statement, _cond, {}, [_values]] call ace_interact_menu_fnc_createAction; 

		[_x,0,["ACE_MainActions"],_startConvo] call ace_interact_menu_fnc_addActionToObject;
	} forEach _units;
};