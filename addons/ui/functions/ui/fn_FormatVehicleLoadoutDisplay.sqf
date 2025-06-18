params [["_selection", "", [""]], ["_selectionPath", 0, [0]]];

private _loadout = [_selection, _selectionPath] call MSF_Logi_fnc_GetSavedVehicleLoadout;
private _items = [];

// Weapons
{
	private _cfg = (configFile >> "CfgWeapons" >> _x select 0 select 0) call BIS_fnc_getCfg;
	_items pushBack [(_cfg >> "picture") call BIS_fnc_getCfgData, (_cfg >> "displayName") call BIS_fnc_getCfgData, _x select 1, []];
} forEach (_loadout select 0 select 0 select 2);

// Items
{
    private _cfg = (configFile >> "CfgWeapons" >> _x select 0) call BIS_fnc_getCfg;
    _items pushBack [(_cfg >> "picture") call BIS_fnc_getCfgData, (_cfg >> "displayName") call BIS_fnc_getCfgData, _x select 1, []];
} forEach (_loadout select 0 select 0 select 0);

// Magazines
{
	private _cfg = (configFile >> "CfgMagazines" >> _x select 0 select 0) call BIS_fnc_getCfg;
	_items pushBack [(_cfg >> "picture") call BIS_fnc_getCfgData, (_cfg >> "displayName") call BIS_fnc_getCfgData, _x select 1, []];
} forEach (_loadout select 0 select 0 select 1);

//Bp
{
    private _subItems = [];

    {
      private _cfg = (configFile >> "CfgWeapons" >> _x select 0 select 0) call BIS_fnc_getCfg;
      _subItems pushBack [(_cfg >> "picture") call BIS_fnc_getCfgData, (_cfg >> "displayName") call BIS_fnc_getCfgData, _x select 1];
    } forEach (_x select 1 select 2);

    {
        private _cfg = (configFile >> "CfgWeapons" >> _x select 0) call BIS_fnc_getCfg;
	    _subItems pushBack [(_cfg >> "picture") call BIS_fnc_getCfgData, (_cfg >> "displayName") call BIS_fnc_getCfgData, _x select 1];
    } forEach (_x select 1 select 0);

    {
        private _cfg = (configFile >> "CfgMagazines" >> _x select 0 select 0) call BIS_fnc_getCfg;
        _subItems pushBack [(_cfg >> "picture") call BIS_fnc_getCfgData, (_cfg >> "displayName") call BIS_fnc_getCfgData, _x select 1];
    } forEach (_x select 1 select 1);

    private _cfg = (configFile >> "CfgVehicles" >> _x select 0) call BIS_fnc_getCfg;
    _items pushBack [(_cfg >> "picture") call BIS_fnc_getCfgData, (_cfg >> "displayName") call BIS_fnc_getCfgData, nil, _subItems];  
} forEach (_loadout select 0 select 1);

_items;