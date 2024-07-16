/*
	Author: zeik_tuvai

	Description:
		MSF Function. This code sets up an ace interaction framework action that disables itself on activation and runs
		the provided code.

	Parameter(s):
        object - object.
		int - number of seconds to run the progress bar.
        string - name of action to show in progress bar and ace interaction.
		code block - code to run on success
		string - message to display on progress failure
		bool - sets if the action can be run only once or multiple times. Can be omitted and will only be a one time action.

	Examples:
		Assuming you place this helper script into a folder called scripts in your root mission directory.  Placing the following code in your objects
		init field will enable a one time ace interaction that runs a block of code on completion.
		
		null = [this, 10, "Eat spaghetti", {hint "Mmmmmm! That was delicious!";}, "I was too full!!!", true] execVM "scripts\tfy_helper_ace-progressbar.sqf";

		-- or --

		private _finish = {
			hint "Mmmmmm! That was delicious!";
			-- some other code
		};
		null = [this, 10, "Eat spaghetti", _finish, "I was too full!!!", false] execVM "scripts\tfy_helper_ace-progressbar.sqf";

	Script version 2.0	
*/

params [
	["_object", objNull, [objNull]],
	["_timer", 10, [1]],
	["_actionName", "Interact", ["words"]],
	["_successCode", "", ["words"]],
	["_failMessage", "", ["words"]],
	["_isRepeatable", false, [false]]
];
_values = [_object, _timer, _actionName, _successCode, _failMessage];
private ["_cond"];

if (isNil "_isRepeatable") then
{
	_isRepeatable = false;
};

//Setup variable on object to hold action enablement.
_object setVariable ["actionEnabled", true, true];

//Code for ace action
private _statement = {
	params ["_target", "_player", "_params"];
	_params params ["_vals"];
	_arguments = [_vals select 0, _vals select 3, _vals select 4];

	//Progressbar code
	[_vals select 1, [_arguments], {
	params ["_args", "_elapsedTime", "_totalTime", "_errorCode"];
	_args params ["_values"];
	_values params ["_obj", "_code", "_fail"];

	call compile (_code);

	_success select 0 setVariable ["actionEnabled", false, true];
	},
	{ 
		params ["_args", "_elapsedTime", "_totalTime", "_errorCode"];
		_args params ["_fail"];

		hint (_fail select 2); 
	}, _vals select 2] call ace_common_fnc_progressBar;
};

//Condition to check for enablement var on object.
if (!_isRepeatable) then
{
	_cond = {
	params ["_target", "_player", "_cparams"];
	_cparams params ["_cvals"];

	_cvals select 0 getVariable "actionEnabled";
	};
}
else
{
	_cond = {true};
};

//Create action and add it to object.
private _performAction = ["performaction", _actionName, "", _statement, _cond, {}, [_values]] call ace_interact_menu_fnc_createAction;
[_object,0,["ACE_MainActions"],_performAction] call ace_interact_menu_fnc_addActionToObject;