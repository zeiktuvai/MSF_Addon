params ["_control", "_selectionPath"];

lnbClear 1501;
menuEnable [2201, [0,1], false];
menuEnable [2201, [0,2], false];
menuEnable [2201, [0,3], false];
menuEnable [2201, [1,0], false];

if (_selectionPath # 0 == 0 && count _selectionPath > 1 ||_selectionPath # 0 == 1 && count _selectionPath > 2) then {	
	private _selection = tvText [ctrlIDC _control, _selectionPath];	
	private _items = [_selection, _selectionPath] call MSF_UI_fnc_FormatVehicleLoadoutDisplay;
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
	
	menuEnable [2201, [0,1], true];
	if (_selectionPath # 0 == 0) then {
		menuEnable [2201, [0,2], true];
		menuEnable [2201, [0,3], true];
		menuEnable [2201, [1,0], true];
	};
};
