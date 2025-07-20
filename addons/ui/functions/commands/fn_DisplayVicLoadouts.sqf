disableSerialization;

createDialog "MSF_VicLoadout";

private _idd = ["MSF_VicLoadout"] call MSF_UI_fnc_GetMSFIDD;
ctrlShow [112, false];
ctrlSetText [10011, "Enter Loadout Name"];

[] call MSF_UI_fnc_OnVehicleLoadoutLoad;

lnbAddColumn [1501, 0.03];
lnbAddColumn [1501, 0.13];
lnbAddColumn [1501, 0.9];

menuEnable [2201, [0,1], false];
menuEnable [2201, [0,2], false];
menuEnable [2201, [0,3], false];
menuEnable [2201, [1,0], false];

[_idd] call MSF_UI_fnc_SetTabletStats;
