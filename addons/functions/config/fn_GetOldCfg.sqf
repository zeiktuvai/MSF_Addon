//Returns empy array if no override; returns empty array for each type not overrided.
params [["_side", 0, [0]]];

private _cfgMods = allMissionObjects "MSF_Module_ClassOverride";
private _modules = _cfgMods select {_x getVariable "Side" == _side};
private _return = createHashMap;

if (_modules isNotEqualTo []) then {
	private _mod = _modules select 0;
	private _errMessage = format ["Parsing MSF Class Override Module for side: %1", [_side] call BIS_fnc_sideType];
	
	private _vehicles = [_mod, "Vehicles", _errMessage] call MSF_fnc_ParseValidArray;
	private _armor = [_mod, "ArmoredC", _errMessage] call MSF_fnc_ParseValidArray;
	private _air = [_mod, "Air", _errMessage] call MSF_fnc_ParseValidArray;
	private _turrets = [_mod, "Turrets", _errMessage] call MSF_fnc_ParseValidArray;
	private _units = [_mod, "Units", _errMessage] call MSF_fnc_ParseValidArray;
  
	if (count _vehicles > 0) then {_return set ["Vehicles", _vehicles]};
	if (count _armor > 0) then {_return set ["Armor", _armor]};
	if (count _air > 0) then {_return set ["Air", _air]};
	if (count _turrets > 0) then {_return set ["Turrets", _turrets]};
	if (count _units > 0) then {_return set ["Units", _units]};
};

_return;
