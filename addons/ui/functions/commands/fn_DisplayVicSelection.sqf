params ["_config"];

disableSerialization;
private _idd = ["MSF_Logi_Vics"] call MSF_UI_fnc_GetMSFIDD;
private _category = "";
private _title = "";
private _type = (parseSimpleArray _config) select 3;
private _cost = (parseSimpleArray _config) select 4;

switch (_type) do {
	case "VicStatic": { _category = "Turrets"; _title = "Deploy Turret"; };
	case "VicApc": { _category = "APC"; _title = "Deploy APC"; };
	case "VicArty": { _category = "Artillery"; _title = "Deploy Artillery Vehicle"};
	case "VicTank": { _category = "Tanks"; _title = "Deploy Armored Vehicle";}
};

createDialog "MSF_Logi_Vics";
[_idd] call MSF_UI_fnc_SetTabletStats;

ctrlSetText [1001, _title];
ctrlEnable [1600, false];
ctrlShow [104, false];
lnbAddColumn [1500, 0.2];
lnbAddColumn [1500, 0.9];

//TODO: Take into account player side and show only relavant factions.
private _factions = ["BLU_F", "CUP_B_US_Army"];
private _items = "getText (_x >> 'faction') in _factions && _category in getText (_x >> 'editorSubcategory') && getNumber (_x >> 'scope') == 2 && !('B_UAV_AI' in getText (_x >> 'crew'))" configClasses (configFile >> "CfgVehicles");
private _list = _items apply {[getText (_x >> "displayName"),if(getText (_x >> "picture") isEqualTo "") then {getText (_x >> "icon")} else {getText (_x >> "picture")},[_x, ""] call BIS_fnc_configPath]};
private _dlist = [];
{
	private _entry = _x # 0;
	if (count (_dlist select { (_x # 0) == _entry}) == 0) then { _dlist pushBack _x };
} forEach _list;

{
	lnbAddRow [1500, ["", _x # 0]];
	lnbSetPicture [1500, [_forEachIndex,0], _x # 1];
	lnbSetData [1500, [_forEachIndex, 0], _config];
	lnbSetData [1500, [_forEachIndex, 1], _x # 2];
} forEach _dlist;

lnbSort [1500, 1];
ctrlSetText [1006, format ["Cost: %1 Logistics", [_cost] call MSF_Logi_fnc_CalculateItemCost]];
