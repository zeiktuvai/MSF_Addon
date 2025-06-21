params [["_loadout", "", [""]]];

private _local = profileNamespace getVariable ["MSF_VehicleLoadouts", createHashMap];
private _item = _local get _loadout;
_item set ["Shared", !(_item get "Shared")];
saveProfileNamespace;

[] call MSF_UI_fnc_OnVehicleLoadoutLoad;
[] call MSF_Logi_fnc_ShareVehicleLoadout;
