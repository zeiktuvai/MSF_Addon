disableSerialization;

createDialog "MSF_VicLoadout";

tvAdd [1500, [], "Local"];

if ([] call BIS_fnc_getNetMode != "SinglePlayer") then {
    tvAdd [1500, [], "Server"];
};
tvExpand [1500, [0]];
tvExpand [1500, [1]];

lnbAddColumn [1501, 0.05];
lnbAddColumn [1501, 0.15];
lnbAddColumn [1501, 0.9];

ctrlEnable [1602, false];
ctrlEnable [1603, false];

private _ver = (allAddonsInfo select {'msf\addons\main' in (_x select 0)}) # 0 # 1 splitString ".";
_ver resize 3;
ctrlSetText [1003, format ['MSF Ver %1', _ver joinString "."]];

[] call MSF_UI_fnc_OnVehicleLoadoutLoad;