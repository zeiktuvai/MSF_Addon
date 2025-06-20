params [["_selection", "", [""]], ["_selectionPath", 0, [0]]];

_fnc_GetWeaponInfo = {
    params ["_list"];

    private _items = [];
    {
        private _cfg = (configFile >> "CfgWeapons" >> _x # 0 # 0) call BIS_fnc_getCfg;
        _items pushBack [(_cfg >> "picture") call BIS_fnc_getCfgData, (_cfg >> "displayName") call BIS_fnc_getCfgData, _x # 1, []];			  
    } forEach _list;

    _items;
};

_fnc_GetMagInfo = {
    params ["_list"];

    private _items = [];
    {
        private _cfg = (configFile >> "CfgMagazines" >> _x # 0 # 0) call BIS_fnc_getCfg;
        _items pushBack [(_cfg >> "picture") call BIS_fnc_getCfgData, (_cfg >> "displayName") call BIS_fnc_getCfgData, _x # 1, []];        
    } forEach _list;

    _items;
};

_fnc_GetItemInfo = {
    params ["_list"];

    private _items = [];
    {
        private _cfg = (configFile >> "CfgWeapons" >> _x # 0) call BIS_fnc_getCfg;
        _items pushBack [(_cfg >> "picture") call BIS_fnc_getCfgData, (_cfg >> "displayName") call BIS_fnc_getCfgData, _x # 1, []];        
    } forEach _list;

    _items;
};

private _loadout = [_selection, _selectionPath] call MSF_Logi_fnc_GetSavedVehicleLoadout;
private _items = [];

{
    switch (_x) do {
        case "Weapons": { _items append ([_y] call _fnc_GetWeaponInfo);	};
		case "Mags": { _items append ([_y] call _fnc_GetMagInfo); };
		case "Items": { _items append ([_y] call _fnc_GetItemInfo); };		
        case "Containers":
        {
            {
                private _subItems = [];
                private _configName = "";
                private _itemName = _y get "Type";
                                
                {
                    switch (_x) do {
                        case "Weapons": { _subItems append ([_y] call _fnc_GetWeaponInfo);};
                        case "Mags": { _subItems append ([_y] call _fnc_GetMagInfo); };
                        case "Items": { _subItems append ([_y] call _fnc_GetItemInfo); };
                    };
                } forEach _y;
                
                if (isClass(configFile >> "CfgVehicles" >> _itemName)) then {_configName = "CfgVehicles"};
                if (isClass(configFile >> "CfgWeapons" >> _itemName)) then {_configName = "CfgWeapons"};
                private _cfg = (configFile >> _configName >> _itemName) call BIS_fnc_getCfg;
                _items pushBack [(_cfg >> "picture") call BIS_fnc_getCfgData, (_cfg >> "displayName") call BIS_fnc_getCfgData, nil, _subItems];
            } forEach _y;

        };        
    };
} forEach _loadout;

_items;