private _public = missionNamespace getVariable "MSF_Shared_VehicleLoadouts";

if !(isNil "_public") then {
	private _playerID = getPlayerUID player;
	private _local = profileNamespace getVariable ["MSF_VehicleLoadouts", createHashMap];
	private _shared = createHashMapFromArray [["PlayerName", profileNameSteam], ["Loadouts", createHashMap]];

	{
		if (_y get "Shared") then {
			(_shared get "Loadouts") set [_x, _y];
		};
	} forEach _local;

	if (count (_shared get "Loadouts") > 0) then {
		_public set [_playerID, _shared];
	}
	else
	{
		private _existing = _public get _playerID;
		if !(isNil "_existing") then {
			_public deleteAt _playerID;
		};
	};

	missionNamespace setVariable ["MSF_Shared_VehicleLoadouts", _public, true];
};
