/*
	Author: zeik_tuvai

	Description:
		Configures mission for multiplayer respawn using the respawn dialog.
        
	Examples:
		[] call MSF_fnc_ConfigureMP;

	Function Ver 1.0
	Implemented in: MSF Addon v1.0
*/
set3DENMissionAttributes 
	[
		["Multiplayer", "respawn", 3],
		["Multiplayer", "respawnDelay", 15],
		["Multiplayer", "respawnDialog", true],
		["Multiplayer", "respawnTemplates", [ "Counter","MenuPosition", "MenuInventory", "Spectator" ]],
		["Multiplayer", "respawnOnStart", -1]
	];

["Multiplayer Settings Configured to work with MSF", 0, 5, true] call BIS_fnc_3DENNotification;