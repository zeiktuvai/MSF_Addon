/*
	Author: zeik_tuvai

	Description:
		Creates a trigger linked to another trigger as an activator.  Used for creating triggers larger than ones defined in eden editor so that
		things are spawned when players are further out.
    	
	Function Ver 1.0
	Implemented in: MSF Addon v2.1.0
*/
params [
	["_trigger", objNull, [objNull]],
	["_x", 50, [1]],
	["_y", 50, [1]],
	["_z", 50, [1]],
	["_activationBy", "WEST", ["WEST"]],
	["_activationType", "present", ["present"]],
	["_isRectangle", false, [false]]
];

private _trig = createTrigger ["emptyDetector", getPos _trigger];
_trig setTriggerArea [_x, _y, 0, _isRectangle, _z];
_trig setTriggerActivation [_activationBy, _activationType, false];
_trig setTriggerStatements ["this", "",""];
_trigger setVariable ["linked_trigger", _trig];
_statements = triggerStatements _trigger;
_trigger setTriggerStatements ["triggerActivated (thistrigger getVariable ""linked_trigger"");", _statements select 1, _statements select 2];
