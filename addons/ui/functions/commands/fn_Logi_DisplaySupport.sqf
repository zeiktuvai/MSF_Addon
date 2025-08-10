createDialog "MSFdevdialog";

ctrlSetText [1001, "Logistics Support Channel"];

//ctrlEnable [1600, false];
//ctrlEnable [1601, false];

lnbAddColumn [1500, 0.2];
lnbAddColumn [1500, 0.9];

{
	_x params ["_name", "_desc", "_icon", "_type", "_baseCost", "_airDrop"];
	
	lnbAddRow [1500, ["", _name, str _baseCost]];
	lnbSetPicture [1500, [_forEachIndex,0], _icon];
	lnbSetTooltip [1500, [_forEachIndex,1], _desc];
	lnbSetData [1500, [_forEachIndex, 1], _type];
} forEach ([] call MSF_Logi_fnc_GetLogiSupports);

lnbSetCurSelRow [1500, 0];
private _t = [] call MSF_Logi_fnc_GetLogiSupports select 0;

ctrlSetText [1005, _t # 0];
ctrlSetText [1004, _t # 1];
if (_t # 5 == 1) then {
	findDisplay 6218 displayCtrl 1800 cbSetChecked true;
};
