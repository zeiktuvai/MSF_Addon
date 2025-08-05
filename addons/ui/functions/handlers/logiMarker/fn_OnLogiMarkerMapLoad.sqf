params ["_displayName"];

private _display = findDisplay ([_displayName] call MSF_UI_fnc_GetMSFIDD);

_display displayAddEventHandler ["Unload", {
	private _marks = allMapMarkers select { "MSF_Logi" in _x };
	{
		_x setMarkerAlphaLocal 1;
	} forEach _marks;
}];

uiNamespace setVariable ["MSF_LogiFlip", false];
_display displayCtrl 3001 ctrlAddEventHandler ["Draw", {	
	private _marks = uiNamespace getVariable ["MSF_Logi_MarkerSel", []];

	if (count _marks > 0) then {
		private _flip = uiNamespace getVariable "MSF_LogiFlip";
		
		{
			private _val = markerAlpha _x;
			private _int = 0.03;
			if (_flip) then {_x setMarkerAlphaLocal _val + _int} else {_x setMarkerAlphaLocal _val - _int};
		} forEach _marks;
	
		if (markerAlpha (_marks # 0) <= 0 || markerAlpha (_marks # 0) >= 1) then {uiNamespace setVariable ["MSF_LogiFlip", !_flip]};
	};

	{
		if !(_x in _marks) then {_x setMarkerAlphaLocal 1};
	} forEach allMapMarkers select { "MSF_Logi" in _x };
}];
