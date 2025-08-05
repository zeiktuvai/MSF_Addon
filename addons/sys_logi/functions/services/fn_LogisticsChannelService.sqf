private _points = ceil MSF_Logi_PointsPerTick;

[_points, false, west] call MSF_Logi_fnc_UpdateLogiPoints;
[_points, false, east] call MSF_Logi_fnc_UpdateLogiPoints;
[_points, false, independent] call MSF_Logi_fnc_UpdateLogiPoints;

[allPlayers # 0, format ["Support channels reinforced, %1 logistics points received.", _points], true] call MSF_Logi_fnc_SendLogisticsMessage;
