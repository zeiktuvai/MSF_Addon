[MSF_Logi_PointsPerTick] call MSF_Logi_fnc_UpdateLogiPoints;

[{[side player, "MSF_Logi"] commandChat format ["Support channels reinforced, %1 logistics points received.", MSF_Logi_PointsPerTick]}] remoteExec ["call"];
