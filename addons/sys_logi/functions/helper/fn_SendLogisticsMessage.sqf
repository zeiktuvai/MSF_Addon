params [["_unit", player, [objNull]],["_message", "Unknown", [""]],["_remote", false, [false]]];

if (_remote) then
{
	[{
		if (MSF_Logi_Message_Enabled) then {
			showChat true; 
			[side _unit, "MSF_Logi"] commandChat _message;
		};
	}] remoteExec ["call", side _unit];
}
else
{
	if (MSF_Logi_Message_Enabled) then {
		showChat true;
		[side _unit, "MSF_Logi"] commandChat _message;
	};
};
