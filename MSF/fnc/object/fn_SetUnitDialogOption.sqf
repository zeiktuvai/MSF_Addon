/*
	Author: zeik_tuvai

	Description:
		Sets up an ace interaction option to start a dialog conversation with the given unit.  Be sure to configure the dialog in description.ext
		and create a bikb file for the dialog.

	Function Ver 2.0
	Implemented in: MSF Addon v1.0
*/
if (isServer) then {
	
	private _units = ["MSF_General_Dialog"] call MSF_fnc_GetUnitsByProperty;
	
	{
		private _taskID = _x getVariable ["MSF_General_Dialog_Task", ""];
		private _action = _x getVariable ["MSF_General_Dialog_Action", ""];
		private _path = _x getVariable ["MSF_General_Dialog_Class", ""];

		if (_path == "") exitWith {};

		private _classes = _path splitString ">>";

		private _values = [_taskID, _classes select 1, _classes select 0, _action];

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

		[_x, format ["Start Conversation with %1", name _x], _statement, _cond, _values] remoteExec ["MSF_fnc_AddAceMainMenuItem"];
	} forEach _units;
};