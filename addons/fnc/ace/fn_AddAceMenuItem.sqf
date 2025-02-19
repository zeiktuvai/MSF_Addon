params [["_unit", objNull, [objNull]], ["_actionName", "", [""]], ["_code", {}, [{}]], ["_condition", {}, [{}]], ["_params", [], [[]]], ["_icon", "", [""]], ["_self", false, [false]]];


private _addItem = [[_unit] call BIS_fnc_objectVar, _actionName, _icon, _code, _condition, {}, [_params]] call ace_interact_menu_fnc_createAction; 

if (_self) then {
	[_unit, 1, ["ACE_SelfActions"], _addItem] call ace_interact_menu_fnc_addActionToObject;	
} else {
	[_unit,0,["ACE_MainActions"],_addItem] call ace_interact_menu_fnc_addActionToObject;	
};