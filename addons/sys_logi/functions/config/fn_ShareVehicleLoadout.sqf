private _public = missionNamespace getVariable "MSF_Shared_VehicleLoadouts";

if !(isNil "_public") then {
	private _local = profileNamespace getVariable ["MSF_VehicleLoadouts", createHashMap];
	private _shared = createHashMapFromArray [["PlayerName", profileNameSteam], ["Loadouts", createHashMap]];

	{
		if (_y get "Shared") then {
			(_shared get "Loadouts") set [_x, _y];
		};
	} forEach _local;

	_public set [getPlayerUID player, _shared];
	missionNamespace setVariable ["MSF_Shared_VehicleLoadouts", _public, true];
};
