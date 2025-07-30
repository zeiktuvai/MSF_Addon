[
	"MSF_ACE_Extensions_Unconcious",
	"CHECKBOX",
	["Enable ACE Medical Player Unconciousness", "When disabled, the player will die upon going unconcious instead of staying unconcious until being revived or bleeding out."],
	["MSF - User Settings", "ACE Options"],
	true
] call CBA_fnc_addSetting;
[
	"MSF_Debug_Message_Enabled",
	"CHECKBOX",
	["Enable Debug Messages", "When enabled, shows debug messages in system chat."],
	["MSF - User Settings", "Debug"],
	false
] call CBA_fnc_addSetting;
[
	"MSF_Logi_Message_Enabled",
	"CHECKBOX",
	["Enable Logistics System Messages", "Enables receiving logistics systems radio messages including air-drops, points, and status messages."],
	["MSF - User Settings", "Logistics System"],
	true,
	2
] call CBA_fnc_addSetting;
