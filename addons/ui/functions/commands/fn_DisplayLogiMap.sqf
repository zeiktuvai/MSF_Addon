params [["_data", "", [""]]];

disableSerialization;

(parseSimpleArray _data) params ["_name", "_desc", "_icon", "_type", "_baseCost", "_airDrop", "_category", ["_class", ""]];
private _idd = ["MSF_LogiMap"] call MSF_UI_fnc_GetMSFIDD;
private _cost = [_baseCost] call MSF_Logi_fnc_CalculateItemCost;

createDialog "MSF_LogiMap";
uiNamespace setVariable ["MSFLogiDeployCoord", nil];

[_idd] call MSF_UI_fnc_SetTabletStats;
ctrlSetText [1001, "Support Request Coordinates"];
ctrlSetText [1901, _icon];
ctrlSetText [1200, _name];
ctrlSetText [1202, format ["Cost: %1", _cost]];
ctrlSetText [1203, str [_type, _category, _class]];
ctrlEnable [1601, false];

[] call MSF_UI_fnc_OnSupportMapLoad;
