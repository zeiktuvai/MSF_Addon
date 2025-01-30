if (isServer) then {
	// Database Setup
	missionNamespace setVariable ["MSF", createHashMap, true];
	missionNamespace setVariable ["MSF_IntelItems", createHashMap, true];

	// System Vars
	private _foundation = missionNamespace getVariable "MSF";
	_foundation set ["isIntelEnabled", [] call MSF_fnc_GetIsIntelEnabled];

	
};

if (!isDedicated)  then {
	localNamespace setVariable ["MSF_Local", createHashMap];
};