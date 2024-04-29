params ["_unit", "_actionName", "_code", "_condition", "_parameters"];


private _addItem = [[_unit] call BIS_fnc_objectVar, _actionName,"", _code, _condition, {}, [_parameters]] call ace_interact_menu_fnc_createAction; 

[_unit,0,["ACE_MainActions"],_addItem] call ace_interact_menu_fnc_addActionToObject;