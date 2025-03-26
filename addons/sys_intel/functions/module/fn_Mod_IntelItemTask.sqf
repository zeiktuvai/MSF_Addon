params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

if (_activated) then {
	private _state = _logic getVariable ["TaskState", ""];
    private _modules = _logic call BIS_fnc_moduleModules;
    private _module = objNull;

    {if (typeOf _x == "MSF_Module_IntelItem") exitWith {_module = _x}} forEach _modules;

    if (isNull _module) exitWith {false};
    private _task = _module getVariable ["TaskID", ""];
    if (_task == "") exitWith {false};

	[_task, _state, true] call BIS_fnc_taskSetState;
};