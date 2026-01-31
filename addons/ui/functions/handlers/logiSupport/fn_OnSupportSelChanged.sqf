params ["_control", "_lbCurSel", "_lbSelection"];

private _logiP = [side player] call MSF_Logi_fnc_GetLogiPoints;
private _idd = ["MSF_Logi_Supports"] call MSF_UI_fnc_GetMSFIDD;
private _config = parseSimpleArray (lnbData [1500, [_lbCurSel, 0]]);
private _cost = parseNumber ((findDisplay _idd displayCtrl 1500) lnbText [_lbCurSel, 2]);

ctrlShow [104, true];
if (_logiP >= _cost) then { ctrlEnable [1600, true]; } else { ctrlEnable [1600, false]; };
//&& count (uiNamespace getVariable ["MSFLogiDeployCoord", []]) > 0

private _cur = parseSimpleArray lnbData [1500, [_lbCurSel, 0]];
ctrlSetText [1005, _cur # 0];
ctrlSetText [1004, _cur # 1];
if (_cur # 5 == 1) then {
	findDisplay _idd displayCtrl 1800 cbSetChecked true;
};

switch (_config # 6) do {
	case 1: { ctrlSetText [1600, "Select Vehicle"]; };
	case 2;
	case 3: { ctrlSetText [1600, "Select Target"]; };
	default { ctrlSetText [1600, "Select Drop Zone"]; };
};
