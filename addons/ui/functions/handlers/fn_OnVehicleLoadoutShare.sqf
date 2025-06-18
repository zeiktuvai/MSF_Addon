params [["_loadout", "", [""]]];

private _local = profileNamespace getVariable ["MSF_VehicleLoadouts", createHashMap];
private _item = _local get _loadout;
_local set [_loadout, [_item # 0, !(_item # 1)]];
saveProfileNamespace;