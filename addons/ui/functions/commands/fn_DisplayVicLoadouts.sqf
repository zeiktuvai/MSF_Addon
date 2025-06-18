disableSerialization;

createDialog "MSF_VicLoadout";

[] call MSF_UI_fnc_OnVehicleLoadoutLoad;

// These can overlap, so maybe make  column 1 only .01 or .02 instead of .05
lnbAddColumn [1501, 0.03];
lnbAddColumn [1501, 0.13];
lnbAddColumn [1501, 0.9];

menuEnable [2201, [0,1], false];
menuEnable [2201, [0,2], false];
menuEnable [2201, [0,3], false];
menuEnable [2201, [1,0], false];

[] call MSF_UI_fnc_SetTabletStats;
