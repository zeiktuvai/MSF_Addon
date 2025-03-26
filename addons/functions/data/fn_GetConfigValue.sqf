params [["_key", "base", [""]], ["_config", "MSF", [""]]];

private _data = missionNamespace getVariable _config;
_data getOrDefault [_key, []];