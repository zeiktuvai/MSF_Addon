disableSerialization;

createDialog "MSF_LogiMain";

private _logiP = [side player] call MSF_Logi_fnc_GetLogiPoints;
private _idd = ["MSF_LogiMain"] call MSF_UI_fnc_GetMSFIDD;
private _playerName = profileNameSteam;
[_idd] call MSF_UI_fnc_SetTabletStats;

ctrlSetText [1001, "Logistics Management"];
findDisplay _idd displayCtrl 1202 ctrlSetStructuredText parseText format ["Available Logistics %1pts", _logiP];
//findDisplay _idd displayCtrl 1203 ctrlSetStructuredText parseText format ["Supply Chain <t font='PuristaBold'>%1</t>", "Not Enabled"];

findDisplay _idd displayCtrl 1200 ctrlSetStructuredText parseText format ["Welcome, %1!", _playerName];
