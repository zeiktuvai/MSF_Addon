params [["_message", "", []]];

if ((uiNamespace getVariable ["MSF_Debug", -1]) != -1) then {
	[uiNamespace, "MSF_Debug_Event", [_message]] call BIS_fnc_callScriptedEventHandler;

	if (MSF_Debug_Message_Log) then {diag_log _message};
};
