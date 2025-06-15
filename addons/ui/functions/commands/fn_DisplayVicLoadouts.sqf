disableSerialization;

createDialog "MSF_VicLoadout";

[] call MSF_UI_fnc_OnVehicleLoadoutLoad;

// These can overlap, so maybe make  column 1 only .01 or .02 instead of .05
lnbAddColumn [1501, 0.03];
lnbAddColumn [1501, 0.13];
lnbAddColumn [1501, 0.9];

ctrlEnable [1602, false];
ctrlEnable [1603, false];
ctrlEnable [1604, false];
ctrlEnable [1605, false];
ctrlShow [114, false];

private _ver = (allAddonsInfo select {'msf\addons\main' in (_x select 0)}) # 0 # 1 splitString ".";
_ver resize 3;
ctrlSetText [1003, format ['MSF Ver %1', _ver joinString "."]];
