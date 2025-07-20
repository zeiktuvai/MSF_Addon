params ["_control", "_lbCurSel", "_lbSelection"];

private _logiP = missionNamespace getVariable ["MSF", createHashMapFromArray [["Logi_Points", 0]]] get "Logi_Points";
private _idd = ["MSF_LogiSupport"] call MSF_UI_fnc_GetMSFIDD;

private _cost = parseNumber ((findDisplay _idd displayCtrl 1500) lnbText [_lbCurSel, 2]);

if (_logiP > _cost && count (uiNamespace getVariable ["MSFLogiDeployCoord", []]) > 0) then { ctrlEnable [1601, true]; } else { ctrlEnable [1601, false]; };

ctrlShow [1201, true];
