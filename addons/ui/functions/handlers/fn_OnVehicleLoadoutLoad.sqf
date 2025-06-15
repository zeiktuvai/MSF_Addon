tvAdd [1500, [], "Local"];

if ([] call BIS_fnc_getNetMode != "SinglePlayer") then {
    tvAdd [1500, [], "Server"];
	if (([] call BIS_fnc_admin) == 2) then {
		ctrlEnable [1605, false];
		ctrlShow [114, false];
	};
};
tvExpand [1500, [0]];
tvExpand [1500, [1]];

private _local = profileNamespace getVariable ["MSF_VehicleLoadouts", createHashMap];

if (count _local > 0) then {
	{
		tvAdd [1500, [0], _x];
	} forEach _local;
};

tvSort [1500, [0], false];