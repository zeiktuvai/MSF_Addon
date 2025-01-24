//Returns empy array if no override; returns empty array for each type not overrided.
params [["_side", 0, [0]]];

private _cfgMods = allMissionObjects "MSF_Module_ClassOverride";
private _modules = _cfgMods select {_x getVariable "Side" == _side};
private _return = [];

if (count _modules > 0) then {
	private _mod = _modules select 0;
	private _errMessage = format ["Parsing MSF Class Override Module for side: %1", [_side] call BIS_fnc_sideType];
	
	_return pushBack ([_mod, "Groups", _errMessage] call MSF_fnc_ParseValidArray);
	_return pushBack ([_mod, "Vehicles", _errMessage] call MSF_fnc_ParseValidArray);
	_return pushBack ([_mod, "ArmoredC", _errMessage] call MSF_fnc_ParseValidArray);
	_return pushBack ([_mod, "Air", _errMessage] call MSF_fnc_ParseValidArray);
	_return pushBack ([_mod, "Turrets", _errMessage] call MSF_fnc_ParseValidArray);
	_return pushBack ([_mod, "Units", _errMessage] call MSF_fnc_ParseValidArray);
	_return pushBack ([_mod, "VicPatrols", _errMessage] call MSF_fnc_ParseValidArray);
};

_return;