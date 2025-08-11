private _display = findDisplay (["MSF_Logi_Markers"] call MSF_UI_fnc_GetMSFIDD);
private _sel = lbSelection (_display displayCtrl 1500);
private _marks = [];

{
	_marks pushBack lnbData [1500, [_x, 1]];
} forEach _sel;

{
	deleteMarker _x;
} forEach _marks;

closeDialog 0;
