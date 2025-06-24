disableSerialization;

private _logiP = missionNamespace getVariable ["MSF", createHashMapFromArray [["Logi_Points", 0]]] get "Logi_Points";
private _idd = ["MSF_LogiSupport"] call MSF_UI_fnc_GetMSFIDD;
createDialog "MSF_LogiSupport";

[_idd] call MSF_UI_fnc_SetTabletStats;
uiNamespace setVariable ["MSFLogiDeployCoord", nil];
ctrlSetText [1001, "Logistics Support Channel"];
ctrlShow [1201, false];
ctrlEnable [1600, false];
ctrlEnable [1601, false];

lnbAddColumn [1500, 0.3];
lnbAddColumn [1500, 0.88];

findDisplay _idd displayCtrl 1200 ctrlSetStructuredText parseText format ["Available Logistics <br/> %1pts", missionNamespace getVariable ["MSF", createHashMapFromArray [["Logi_Points", 0]]] get "Logi_Points"];

{
	_x params ["_name", "_desc", "_icon", "_type", "_baseCost"];
	
	lnbAddRow [1500, ["", _name, str _baseCost]];
	lnbSetPicture [1500, [_forEachIndex,0], _icon];
	lnbSetTooltip [1500, [_forEachIndex,1], _desc];
	lnbSetData [1500, [_forEachIndex, 1], _type];
	
	if (_baseCost > _logiP) then {
		lnbSetColor [1500, [_forEachIndex,1], [0.5, 0.5, 0.5, 1]];
		lnbSetColor [1500, [_forEachIndex,2], [0.5, 0.5, 0.5, 1]];
		lnbSetPictureColor [1500, [_forEachIndex,0], [0.5, 0.5, 0.5, 1]];
	};
} forEach ([] call MSF_Logi_fnc_GetLogiSupports);
[] call MSF_UI_fnc_OnSupportMapLoad;
