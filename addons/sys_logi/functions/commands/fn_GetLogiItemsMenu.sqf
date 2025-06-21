// params ["_target", "_player", "_params"];

// private _actions = []; 

// {
// 	_y params ["_title", "_count"];
// 	private _childStatement = {
// 		params ["_target", "_player", "_params"];

// 		[_params] call MSF_Logi_fnc_RemoveLocalLogiItem;
// 		[_params] call MSF_UI_fnc_OnStartPlaceObjectUI;
// 	}; 
// 	private _action = [_x, _title, "", _childStatement, {true}, {}, _x] call ace_interact_menu_fnc_createAction; 
// 	_actions pushBack [_action, [], _target]; 
// } forEach (localNamespace getVariable 'MSF_Local' getOrDefault ['Logi_Items', createHashMap]);

// _actions
