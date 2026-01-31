[
	"MSF_Logi_VicAirdrop",
	"CHECKBOX",
	["Enable Vehicle Airdrops", "Enables selecting vehicles in the logistics support channel menu."],
	"MSF - Logistics System",
	true,
	1
] call CBA_fnc_addSetting;
[
	"MSF_Logi_SupplyAirdrop",
	"CHECKBOX",
	["Enable Supply Airdrops", "Enables selecting supplies (Fuel tanks, Vehicle Ammo, etc.) in the logistics support channel menu."],
	"MSF - Logistics System",
	true,
	1
] call CBA_fnc_addSetting;
[
	"MSF_Logi_OffArtillery",
	"CHECKBOX",
	["Enable Offensive Artillery", "Enables selecting bombardments and missile strikes in the logistics support channel menu."],
	"MSF - Logistics System",
	true,
	1
] call CBA_fnc_addSetting;
[
	"MSF_Logi_DefArtillery",
	"CHECKBOX",
	["Enable Defensive Artillery", "Enables selecting smoke, flares, etc., in the logistics support channel menu."],
	"MSF - Logistics System",
	true,
	1
] call CBA_fnc_addSetting;
[
	"MSF_Logi_VicStatic",
	"CHECKBOX",
	["Enable Turret Air-Drop", "Enables selecting static turrets in the logistics support channel menu."],
	["MSF - Logistics System", "Vehicle Air-drop"],
	true,
	1
] call CBA_fnc_addSetting;
[
	"MSF_Logi_VicTank",
	"CHECKBOX",
	["Enable Tank Air-Drop", "Enables selecting tanks in the logistics support channel menu."],
	["MSF - Logistics System", "Vehicle Air-drop"],
	true,
	1
] call CBA_fnc_addSetting;
[
	"MSF_Logi_PointsTickEnable",
	"CHECKBOX",
	["Enable Logistics Reinforce", "Adds a set amount of logistics points per interval set over time."],
	["MSF - Logistics System", "Support Channel"],
	true,
	1,
	{
		[_this, "LogiTick", [{[] call MSF_Logi_fnc_LogisticsChannelService;}, MSF_Logi_PointsTickInterval]] call MSF_fnc_SetServiceWorker;		
	}
] call CBA_fnc_addSetting;
[
	"MSF_Logi_CostMulti",
	"SLIDER",
	["Logistics Cost Multiplier", "Sets the cost multiplier for support called in via the logistics terminal and items retrieved from supply depots/trucks. (Base Cost * Multiplier)."],
	["MSF - Logistics System", "Support Channel"],
	[1, 3, 1, 2],
	1
] call CBA_fnc_addSetting;
[
	"MSF_Logi_PointsTickInterval",
	"TIME",
	["Logistics Interval", "Interval that will be used for adding logistics points over time."],
	["MSF - Logistics System", "Support Channel"],
	[120, 1800, 300],
	1
] call CBA_fnc_addSetting;
[
	"MSF_Logi_PointsPerTick",
	"SLIDER",
	["Logistics Interval Points", "Sets the number of points awarded per inteval."],
	["MSF - Logistics System", "Support Channel"],
	[1, 15, 3, 0],
	1
] call CBA_fnc_addSetting;
[
	"MSF_Rearm_PMags",
	"SLIDER",
	["Primary Mag Count", "Number of mags to re-arm a player with when using a re-arm object."],
	["MSF - Logistics System", "Player Re-Arm"],
	[1, 10, 4, 0],
	1
] call CBA_fnc_addSetting;
[
	"MSF_Rearm_HMags",
	"SLIDER",
	["Handgun Mag Count", "Number of mags to re-arm a player with when using a re-arm object."],
	["MSF - Logistics System", "Player Re-Arm"],
	[1, 10, 2, 0],
	1
] call CBA_fnc_addSetting;
[
	"MSF_UAV_SpawnDelay",
	"TIME",
	["UAV Spawn Delay", "Sets how long a drone operator must wait before spawning another drone."],
	["MSF - Logistics System", "UAV Inventory"],
	[60, 3600, 900],
	1
] call CBA_fnc_addSetting;
