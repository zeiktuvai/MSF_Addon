params [["_key", "base", [""]], ["_config", "MSF", [""]], ["_default", ""]];

missionNamespace getVariable _config getOrDefault [_key, _default];
