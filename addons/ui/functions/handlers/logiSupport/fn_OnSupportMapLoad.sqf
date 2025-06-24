private _idd = ["MSF_LogiSupport"] call MSF_UI_fnc_GetMSFIDD;
private _display = findDisplay _idd;
private _map = _display displayCtrl 3001;

_map ctrlAddEventHandler ["MouseButtonClick", {
	params ["_control", "_button", "_xPos", "_yPos", "_shift", "_ctrl", "_alt"];
	
	ctrlSetFocus (findDisplay (["MSF_LogiSupport"] call MSF_UI_fnc_GetMSFIDD) displayCtrl 1201);
	uiNamespace setVariable ["MSFLogiDeployCoord", _control ctrlMapScreenToWorld [_xPos, _yPos]];

	if (lnbCurSelRow 1500 != -1) then {
		private _logiP = missionNamespace getVariable ["MSF", createHashMapFromArray [["Logi_Points", 0]]] get "Logi_Points";
		private _idd = ["MSF_LogiSupport"] call MSF_UI_fnc_GetMSFIDD;
		private _cost = parseNumber ((findDisplay _idd displayCtrl 1500) lnbText [_lbCurSel, 2]);

		if (_logiP > _cost && count (uiNamespace getVariable ["MSFLogiDeployCoord", []]) > 0) then { ctrlEnable [1601, true]; } else { ctrlEnable [1601, false]; };
	};
}];

uiNamespace setVariable ["MSFLogiDeployIdx", 1];
_display displayCtrl 3001 ctrlAddEventHandler ["Draw", {
	private _coord = uiNamespace getVariable "MSFLogiDeployCoord";
	private _list = ["\z\ace\addons\interact_menu\ui\selector0.paa","z\ace\addons\interact_menu\ui\selector1.paa","z\ace\addons\interact_menu\ui\selector2.paa","z\ace\addons\interact_menu\ui\selector3.paa",
		"\z\ace\addons\interact_menu\ui\selector4.paa","z\ace\addons\interact_menu\ui\selector5.paa","z\ace\addons\interact_menu\ui\selector6.paa","z\ace\addons\interact_menu\ui\selector7.paa",
		"\z\ace\addons\interact_menu\ui\selector8.paa","z\ace\addons\interact_menu\ui\selector9.paa","z\ace\addons\interact_menu\ui\selector10.paa","z\ace\addons\interact_menu\ui\selector11.paa",
		"\z\ace\addons\interact_menu\ui\selector12.paa","z\ace\addons\interact_menu\ui\selector13.paa","z\ace\addons\interact_menu\ui\selector14.paa"];
	private _idx = uiNamespace getVariable ["MSFLogiDeployIdx", 1];
	private _multip = 3;
	private _icon = _list select (floor (_idx / _multip) - 1);

	if !(isNil "_coord") then {
		_this select 0 drawIcon [_icon, [1,0.74,0,1], _coord, 30, 30, 0, format ["GRID %1", mapGridPosition _coord], 0, 0.05, "TahomaB", "right"];
	};

	if (_idx == (count _list) * _multip) then { uiNamespace setVariable ["MSFLogiDeployIdx", 1]; } else { uiNamespace setVariable ["MSFLogiDeployIdx", _idx + 1]; };
}];