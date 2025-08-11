params ["_curSel"];

private _display = findDisplay (["MSF_Logi_Markers"] call MSF_UI_fnc_GetMSFIDD);
private _map = _display displayCtrl 3001;
_map ctrlMapAnimAdd [0.1, 0.01, getMarkerPos (lnbData[1500, [_curSel, 1]])];
ctrlMapAnimCommit _map;
