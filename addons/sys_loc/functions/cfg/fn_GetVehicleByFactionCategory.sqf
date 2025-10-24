params [["_side", east, [east]], ["_category", "", [""]], ["_nameFilter", "", [""]]];

private _sideID = [_side] call BIS_fnc_sideID;
private _factions = "getNumber (_x >> 'side') == _sideID" configClasses (configFile >> "CfgFactionClasses") apply {configName _x};
private _filter = "getText (_x >> 'faction') in _factions && _category in getText (_x >> 'editorSubcategory') && getNumber (_x >> 'scope') == 2 && !('B_UAV_AI' in getText (_x >> 'crew'))";

if (_nameFilter isNotEqualTo "") then {_filter = _filter + " && _text in configName _x"};
_filter configClasses (configFile >> "CfgVehicles");
