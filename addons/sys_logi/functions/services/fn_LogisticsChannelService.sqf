[MSF_Logi_PointsPerTick] call MSF_Logi_fnc_UpdateLogiPoints;

[{player setVariable ["MSF_NotificationText", ["Logistics Support Received", format ["%1 logistics points received via support channels.", MSF_Logi_PointsPerTick]]]}] remoteExec ["call"];
[["MSF", "General"], 15, "", 35, "", true, true, false, true] remoteExec ["BIS_fnc_advHint"];
