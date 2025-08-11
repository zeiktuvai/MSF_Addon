disableSerialization;

createDialog "MSF_VicLoadout";

private _idd = ["MSF_VicLoadout"] call MSF_UI_fnc_GetMSFIDD;
ctrlSetText [1001, "Vehicle Loadouts"];
ctrlShow [112, false];
ctrlSetText [10011, "Enter Loadout Name"];

[] call MSF_UI_fnc_OnVehicleLoadoutLoad;

lnbAddColumn [1501, 0.03];
lnbAddColumn [1501, 0.13];
lnbAddColumn [1501, 0.9];

ctrlEnable [1601, false];
ctrlEnable [1602, false];
ctrlEnable [1603, false];
ctrlEnable [1604, false];

[_idd] call MSF_UI_fnc_SetTabletStats;
