params [["_name", "", [""]], ["_obj", objNull, [objNull]], ["_insertOnly", true, [true]]];

private _loadout = [_obj] call MSF_Logi_fnc_GetVehicleInventoryData;
private _local = profileNamespace getVariable ["MSF_VehicleLoadouts", createHashMap];
private _isShared = if (_insertOnly) then {false} else {_local get _name get "Shared"};

_loadout set ["Shared", _isShared];
_local set [_name, _loadout, _insertOnly];
profileNamespace setVariable ["MSF_VehicleLoadouts", _local];
saveProfileNamespace;

if (_isShared) then {
	[] call MSF_Logi_fnc_ShareVehicleLoadout;
}
