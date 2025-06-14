private _local = profileNamespace getVariable ["MSF_VehicleLoadouts", createHashMap];

if (count _local > 0) then {
	{
		tvAdd [1500, [0], _x];
	} forEach _local;
};
