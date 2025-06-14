params ["_control", "_selectionPath"];

lnbClear 1501;
if (count _selectionPath > 1) then {
	private _selection = tvText [ctrlIDC _control, _selectionPath];	
	private _items = [_selection, _selectionPath select 0] call MSF_Logi_fnc_GetSavedVehicleLoadout select 0;
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
				_idx = _idx + 1;  
			} forEach _sub;
		};
	} forEach _items;
	ctrlEnable [1602, true];
}
else
{
	ctrlEnable [1602, false];
};