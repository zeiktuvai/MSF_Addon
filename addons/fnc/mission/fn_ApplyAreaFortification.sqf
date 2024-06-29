/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script sets up triggers with area fortification enabled.
        
	Examples:
		[] call MSF_fnc_ApplyAreaFortification;

	Function Ver 1.0
	Implemented in: MSF Addon v1.5.2
*/

private _triggers = allMissionObjects "EmptyDetector" select { 
	_x getVariable ["MSF_Trig_Fortify_Enable", false] == true;
};


{
	private _area = [_x] call MSF_fnc_GetAreaRadius;
	private _activation = triggerActivation _x;

	private _trig = createTrigger ["emptyDetector", getPos _x];
	_trig setTriggerArea [_area + 50, _area + 50, 0, false];
	_trig setTriggerActivation [_activation select 0, _activation select 1, false];
	_trig setVariable ["linked_trigger", _x];
	_trig setTriggerStatements ["this", "(thistrigger getVariable ""linked_trigger"") setVariable [""Activate"", true];",""];
	_x setTriggerStatements ["thistrigger getVariable [""Activate"", false];", "[thisTrigger] call MSF_fnc_FortifyArea;", ""];

} forEach _triggers;
