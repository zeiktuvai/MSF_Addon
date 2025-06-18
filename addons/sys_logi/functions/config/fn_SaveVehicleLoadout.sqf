params [["_name", "", [""]], ["_obj", objNull, [objNull]], ["_insertOnly", true, [true]]];

private _loadout = [_obj] call MSF_Persist_fnc_GetObjectCargo;
private _local = profileNamespace getVariable ["MSF_VehicleLoadouts", createHashMap];
private _isShared = if (_insertOnly) then {false} else {(_local get _name) # 1};

_local set [_name, [_loadout, _isShared], _insertOnly];
profileNamespace setVariable ["MSF_VehicleLoadouts", _local];
saveProfileNamespace;
