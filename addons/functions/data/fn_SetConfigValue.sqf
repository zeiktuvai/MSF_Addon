params [["_config", "MSF", [""]], ["_key", "base", [""]], "_value"];

private _data = missionNamespace getVariable _config;
_data set [_key, _value];
missionNamespace setVariable [_config, _data, true];
