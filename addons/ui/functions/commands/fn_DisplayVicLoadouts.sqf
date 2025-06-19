disableSerialization;

createDialog "MSF_VicLoadout";

[] call MSF_UI_fnc_OnVehicleLoadoutLoad;

// These can overlap, so maybe make  column 1 only .01 or .02 instead of .05
lnbAddColumn [1501, 0.03];
lnbAddColumn [1501, 0.13];
lnbAddColumn [1501, 0.9];

menuEnable [2201, [1,1], false];
menuEnable [2201, [1,2], false];
menuEnable [2201, [1,3], false];
menuEnable [2201, [2,0], false];

[6218] call MSF_UI_fnc_SetTabletStats;
