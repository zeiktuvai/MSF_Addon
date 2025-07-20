params [["_config", "MSF", [""]], ["_key", "base", [""]]];

private _data = missionNamespace getVariable _config;
_data deleteAt _key;
missionNamespace setVariable [_config, _data, true];
