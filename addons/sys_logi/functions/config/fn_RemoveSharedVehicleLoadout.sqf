params [["_playerUID", "", [""]]];

private _public = missionNamespace getVariable "MSF_Shared_VehicleLoadouts" get _playerUID;

if !(isNil "_public") then {
	_public deleteAt _playerUID;
	missionNamespace setVariable ["MSF_Shared_VehicleLoadouts", _public, true];
};
