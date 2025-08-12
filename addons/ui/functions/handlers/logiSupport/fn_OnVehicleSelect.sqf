params ["_curSelRow"];

closeDialog 0;
private _idd = ["MSF_Logi_Vics"] call MSF_UI_fnc_GetMSFIDD;
private _sel = parseSimpleArray (lnbData [1500, [_curSelRow, 0]]);
private _config = [
	findDisplay _idd displayCtrl 1500 lnbText [_curSelRow, 1],
	"",
	lnbPicture [1500, [_curSelRow, 0]],
	_sel select 3,
	_sel select 4,
	_sel select 5,
	_sel select 6,
	configName ([lnbData [1500, [_curSelRow, 1]], configNull] call BIS_fnc_configPath)
];

[str _config] call MSF_UI_fnc_DisplayLogiMap;
