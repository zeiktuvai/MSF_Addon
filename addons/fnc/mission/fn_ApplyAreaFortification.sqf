
private _triggers = allMissionObjects "EmptyDetector" select { 
	(_x getVariable ["MSF_Trig_Fortify_Enable", false] == true
};


{
	private _area = [_x] call MSF_fnc_GetAreaRadius;
	
	// Zeus can still activate with this activation.
	_trig = createTrigger ["emptyDetector", getPos _trigger];
	_trig setTriggerArea [_area, _area, 0, false];
	_trig setTriggerActivation ["ANYPLAYER", "PRESENT", false];
	_trig setVariable ["linked_trigger", _x];
	_trig setTriggerStatements ["this", "(thistrigger getVariable ""linked_trigger"") setVariable [""Activate"", true];",""];
	_x setTriggerStatements ["thistrigger getVariable [""Activate"", false];", "[thisTrigger] call MSF_fnc_FortifyArea;", ""];

} forEach _triggers;
