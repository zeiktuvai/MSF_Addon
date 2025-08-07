disableSerialization;

private _logiP = [side player] call MSF_Logi_fnc_GetLogiPoints;
private _idd = ["MSF_Logi_Supports"] call MSF_UI_fnc_GetMSFIDD;
createDialog "MSF_Logi_Supports";

[_idd] call MSF_UI_fnc_SetTabletStats;
ctrlSetText [1001, "Logistics Support Channel"];
ctrlEnable [1600, false];
ctrlEnable [1800, false];
ctrlShow [104, false];
lnbAddColumn [1500, 0.2];
lnbAddColumn [1500, 0.9];

findDisplay _idd displayCtrl 1203 ctrlSetStructuredText parseText format ["Remaining Logistics: <br/> %1pts", _logiP];

{
	_x params ["_name", "_desc", "_icon", "_type", "_baseCost", "_airDrop", "_category"];
	
	private _cost = [_baseCost] call MSF_Logi_fnc_CalculateItemCost;
	
	lnbAddRow [1500, ["", _name, str _cost]];
	lnbSetPicture [1500, [_forEachIndex,0], _icon];
	lnbSetData [1500, [_forEachIndex, 0], str _x];
	lnbSetTooltip [1500, [_forEachIndex,1], _desc];
	lnbSetData [1500, [_forEachIndex, 1], _type];

	if (_baseCost > _logiP) then {
		lnbSetColor [1500, [_forEachIndex,1], [0.5, 0.5, 0.5, 1]];
		lnbSetColor [1500, [_forEachIndex,2], [0.5, 0.5, 0.5, 1]];
		lnbSetPictureColor [1500, [_forEachIndex,0], [0.5, 0.5, 0.5, 1]];
	};
} forEach ([] call MSF_Logi_fnc_GetLogiSupports);
