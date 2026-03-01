params ["_enable"];

if (_enable) then {
	private _id = [uiNamespace, "MSF_Debug_Event", {
		params [["_message", "", [""]]];

		systemChat format ["MSF-DEBUG: %1", _message];
	}] call BIS_fnc_addScriptedEventHandler;

	uiNamespace setVariable ["MSF_Debug", _id];
}
else
{
	private _id = uiNamespace getVariable ["MSF_Debug", -1];
	if (_id != -1) then {[uiNamespace, "MSF_Debug_Event", _id] call BIS_fnc_removeScriptedEventHandler;};
	uiNamespace setVariable ["MSF_Debug", nil];
};
