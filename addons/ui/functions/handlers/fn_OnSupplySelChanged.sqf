params ["_control", "_lbCurSel", "_lbSelection"];

ctrlShow [104, true];
menuEnable[2201, [1], true];

ctrlSetText [1005, (findDisplay 6217 displayCtrl 1500) lnbText [_lbCurSel, 1]];
ctrlSetText [1004, lnbData [1500, [_lbCurSel, 0]]];
