params ["_control", "_lbCurSel", "_lbSelection"];

ctrlShow [104, true];

ctrlSetText [1005, (findDisplay 6217 displayCtrl 1500) lnbText [_lbCurSel, 1]];
ctrlSetText [1004, lnbData [1500, [_lbCurSel, 0]]];

private _cost = parseNumber ((findDisplay 6217 displayCtrl 1500) lnbText [_lbCurSel, 2]);
if ([player getVariable 'MSF_SupplySource'] call ace_rearm_fnc_getSupplyCount < _cost) then {
	ctrlEnable [1600, false];
};