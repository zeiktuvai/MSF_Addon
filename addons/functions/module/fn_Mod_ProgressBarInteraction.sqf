params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _timer = _logic getVariable ["InteractionTime", 10];
private _actionName = _logic getVariable ["ActionName", "Interact"];
private _successCode = _logic getVariable ["SuccessCode", ""];
private _failMessage = _logic getVariable ["FailText", ""];
private _isRepeatable = _logic getVariable ["Repeat", false];

{
	private _object = _x;

	_values = [_object, _timer, _actionName, _successCode, _failMessage];
	private ["_cond"];

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

		_obj setVariable ["actionEnabled", false, true];
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
} forEach _units;
