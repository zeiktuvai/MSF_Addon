params [["_enable", true, [true]], ["_key", "", [""]], ["_args", [], [[]]]];

if (_enable) then {
	if !(_key in (missionNamespace getVariable "MSF_Workers")) then {
		[_key, _args # 0, _args # 1] call MSF_fnc_RegisterServiceWorker;
	};
}
else
{
	[_key] call MSF_fnc_RemoveServiceWorker;
};