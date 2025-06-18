params [["_actionName", "", [""]], ["_successCode", {}, [{}]], ["_closeCode", {}, [{}]]];

_ctrl = findDisplay 46 ctrlCreate ["RscStructuredText", 62181]; 
_ctrl ctrlSetPosition [((getResolution select 2) * 0.5 * pixelW) - 50 * (pixelW * pixelGrid * 0.50), ((getResolution select 3) * 0.5 * pixelH) - 20 * (pixelH * pixelGrid * 0.50), 100 * (pixelW * pixelGrid * 0.50), 10 * (pixelH * pixelGrid * 0.50)];
_ctrl ctrlCommit 0;
_ctrl ctrlSetStructuredText parseText format ["<t color='#8b0000' align='center'>Place cursor on vehicle to %1 loadout and press SPACE.<br/>(Any Other Key [Except movement] to cancel)</t>", _actionName];
player setVariable ["MSF_UIKeybdHandlerCode", [_successCode, _closeCode]];

findDisplay 46 displayAddEventHandler ["KeyDown", { 
	params ["_displayOrControl", "_key", "_shift", "_ctrl", "_alt"];
	private _successCode = player getVariable ["MSF_UIKeybdHandlerCode", []] select 0;
	private _closeCode = player getVariable ["MSF_UIKeybdHandlerCode", [0]] select 1;

	if (_key == 57) then {
		private _obj = cursorObject;
		call _successCode;
	};

	switch (_key) do {
		case 17;
		case 30;
		case 31;
		case 32;
		case 42: {};
		default {
			private _disp = findDisplay 46;
			_disp displayRemoveEventHandler ["KeyDown", _thisEventHandler];
			ctrlDelete (_disp displayCtrl 62181);
			player setVariable ["MSF_UIKeybdHandlerCode", nil];
			call _closeCode;
		};
	};
}];