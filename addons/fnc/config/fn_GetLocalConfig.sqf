private ["_cfg"];

if (fileExists "MissionClassesConfig.hpp") then {
	MSF_configCache = createHashMap;

	_cfg = MSF_configCache getOrDefault ["MissionClassesConfig.hpp", configNull];

	if (isNull _cfg) then {
		_cfg = loadConfig "MissionClassesConfig.hpp";
		MSF_configCache set ["MissionClassesConfig.hpp", _cfg];
	};
};

_cfg;