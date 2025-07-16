params [["_key", "base", [""]], ["_config", "MSF", [""]]];

missionNamespace getVariable _config getOrDefault [_key, []];
