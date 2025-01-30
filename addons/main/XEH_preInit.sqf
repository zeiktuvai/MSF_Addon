[
	"MSF_ACE_Extensions_Unconcious",
	"CHECKBOX",
	["Enable ACE Medical Player Unconciousness", "When disabled, the player will die upon going unconcious instead of staying unconcious until being revived or bleeding out."],
	["Mission Support Foundation", "ACE Options"],
	true
] call CBA_fnc_addSetting;
[
	"MSF_Debug_Message_Enabled",
	"CHECKBOX",
	["Enable Debug Messages", "When enabled, shows debug messages in system chat."],
	["Mission Support Foundation", "Debug"],
	false
] call CBA_fnc_addSetting;
[
	"MSF_AU_Enemy_Plane",
	"CHECKBOX",
	["Disable Enemy Planes", "This option will prevent enemy planes from spawning in Antistasi, leaving unmanned and friendly planes alone. (Does not affect helicopters)."],
	["Mission Support Foundation", "Antistasi"],
	false,
	1,
	{[_this] call MSF_fnc_AntistasiEnemyPlanes;}
] call CBA_fnc_addSetting;