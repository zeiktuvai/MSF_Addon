private _lds = profileNamespace getVariable ["MSF_VehicleLoadouts", createHashMap];
if (count (keys (_lds)) > 0) then {
	if (typeName (_lds get (keys (_lds) select 0)) == "ARRAY") then {
		[] call MSF_Logi_fnc_ConvertVehicleInventoryData;
	};
};

tvAdd [1500, [], format ["%1 (Local)", profileNameSteam]];

if ([] call BIS_fnc_getNetMode != "SinglePlayer") then {
    tvAdd [1500, [], "Shared"];
};
tvExpand [1500, [0]];
tvExpand [1500, [1]];

private _local = profileNamespace getVariable ["MSF_VehicleLoadouts", createHashMap];

if (count _local > 0) then {
	{
		tvAdd [1500, [0], _x];
		if (_y get "Shared") then {tvSetPictureRight [1500, [0,_forEachIndex], "a3\ui_f\data\gui\rsc\rscdisplaymain\link_ca.paa"];};
	} forEach _local;
};

// private _server = missionNamespace getVariable ["MSF_ServerVehicleLoadouts", createHashmap];

// if (count _server > 0) then {
// 	{
// 		tvAdd [1500, [1], _x];
// 	} forEach _server;
// };

tvSort [1500, [0], false];