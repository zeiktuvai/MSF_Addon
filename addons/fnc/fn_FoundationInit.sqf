if (isServer) then {
	// Database Setup
	missionNamespace setVariable ["MSF", createHashMap, true];
	missionNamespace setVariable ["MSF_IntelItems", createHashMap, true];

	// initial Values
	private _foundation = missionNamespace getVariable "MSF";
	_foundation set ["IntelEnabled", false];
	_foundation set ["IntelLevel", 1];
};

localNamespace setVariable ["MSF_Local", createHashMap];