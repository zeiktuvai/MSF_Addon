params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

{
	private _taskID = _logic getVariable ["Task", ""];
	private _action = _logic getVariable ["Action", ""];
	private _path = _logic getVariable ["DialogClass", ""];

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

	[_x, format ["Start Conversation with %1", name _x], _statement, _cond, _values] remoteExec ["MSF_fnc_AddAceMenuItem"];
} forEach _units;
