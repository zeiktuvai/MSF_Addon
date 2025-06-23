if (isServer) then {
	// initial Values
	private _foundation = createHashMapFromArray [["IntelEnabled", false], ["IntelLevel", 1]];	
	
	// Database Setup
	missionNamespace setVariable ["MSF", _foundation, true];
	missionNamespace setVariable ["MSF_IntelItems", createHashMap, true];
	missionNamespace setVariable ["MSF_Workers", createHashMap];
	missionNamespace setVariable ["MSF_Shared_VehicleLoadouts", createHashMap, true];
};

localNamespace setVariable ["MSF_Local", createHashMap];