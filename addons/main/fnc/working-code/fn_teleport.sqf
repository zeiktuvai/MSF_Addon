/*
	Author: zeik_tuvai

	Description:
		Used to setup ace actions to teleport a player to specific destinations.

	Parameter(s):
        object - Unit object (player or unit).
		array of object - object variable name to teleport to
		array of string - Name of destination to be displayed in menu
        
	Examples:
		Assuming you place this helper script into a folder called scripts in your root mission directory.  Place this in your units init.
		null = [this, [uav_control, aav], ["Air Base", "AAV"]] execVM "scripts\ace_tele.sqf";

	Script version 1.0
*/
params ["_unit", "_target", "_destName"];

private _teleRoot = ["tele_Menu", "Fast Travel", "", {}, {true}] call ace_interact_menu_fnc_createAction;
[_unit, 1, ["ACE_SelfActions"], _teleRoot] call ace_interact_menu_fnc_addActionToObject;

private _i = 0;

{
_values = [_unit, _target select _i];

private _statement = {
	params ["_target", "_player", "_params"];
	_params params ["_vals"];
	private _dest = (_vals select 1) getRelPos [20, 180];
	(_vals select 0) setPos _dest;
};

private _cond = {
	true;
};

private _tele = ["teleport",format ["Fast travel to %1", (_destName select _i)],"",_statement, _cond, {}, [_values]] call ace_interact_menu_fnc_createAction;
[_unit,1,["ACE_SelfActions", "tele_Menu"],_tele] call ace_interact_menu_fnc_addActionToObject;
_i = _i + 1;
} forEach _target;