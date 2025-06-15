params ["_control", "_selectionPath"];

lnbClear 1501;
if (count _selectionPath > 1) then {
	private _selection = tvText [ctrlIDC _control, _selectionPath];	
	private _items = [_selection, _selectionPath select 0] call MSF_UI_fnc_FormatVehicleLoadoutDisplay;
	private _idx = 0;

	{
		_x params ["_pic", "_name", "_count", "_sub"];
		
		lnbAddRow [1501, ["", "", _name, str _count]];
		lnbSetPicture [1501, [_idx, 0], _pic];
		_idx = _idx + 1;
		
		if (count _sub > 0) then {
			{
				_x params ["_pic", "_name", "_count"];
				
				lnbAddRow [1501, ["", "", _name, str _count]];
				lnbSetPicture [1501, [_idx, 1], _pic];
				lnbSetColor [1501, [_idx,2], [0.5, 0.5, 0.5, 1]];
				lnbSetColor [1501, [_idx,3], [0.5, 0.5, 0.5, 1]];
				_idx = _idx + 1;  
			} forEach _sub;
		};
	} forEach _items;
	ctrlEnable [1602, true];
	ctrlEnable [1603, true];
	ctrlEnable [1604, true];
}
else
{
	ctrlEnable [1602, false];
	ctrlEnable [1603, false];
	ctrlEnable [1604, false];
};
