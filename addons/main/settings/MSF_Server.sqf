[
	"MSF_Unit_EnableOverride_W",
	"CHECKBOX",
	["Enable Player Weapon Override", "When enabled this will override default weapons for a class with ones configured below."],
	["MSF - Server Settings", "Player Inventory"],
	false,
	1,
	{},
	true
] call CBA_fnc_addSetting;
[
	"MSF_Unit_EnableOverride_W_Types",
	"EDITBOX",
	["Weapon Configs", "Array of weapon config information (Use MSF > 'Get Weapons Data' in the eden editor menu to get a valid config array)."],
	["MSF - Server Settings", "Player Inventory"],
	"[]",
	1,
	{},
	true
] call CBA_fnc_addSetting;
[
	"MSF_AU_Enemy_Plane",
	"CHECKBOX",
	["Antistasi - Disable Enemy Planes", "This option will prevent enemy planes from spawning in Antistasi, leaving unmanned and friendly planes alone. (Does not affect helicopters)."],
	"MSF - Server Settings",
	false,
	1,
	{
		[_this, "au_planes", [{[] call MSF_fnc_AntistasiEnemyPlaneService;}, 0]] call MSF_fnc_SetServiceWorker;		
	}
] call CBA_fnc_addSetting;
[
	"MSF_Intel_CivTime",
	"TIME",
	["Civilian Interation Time", "Sets how long a player needs to hold the interaction for civilian intel."],
	["MSF - Server Settings", "Intel System"],
	[1, 60, 5],
	1
] call CBA_fnc_addSetting;
[
	"MSF_Intel_MilTime",
	"TIME",
	["Military Interation Time", "Sets how long a player needs to hold the interaction for Military intel."],
	["MSF - Server Settings", "Intel System"],
	[1, 60, 10],
	1
] call CBA_fnc_addSetting;
[
	"MSF_Intel_ObjTime",
	"TIME",
	["Object Interation Time", "Sets how long a player needs to hold the interaction for object intel."],
	["MSF - Server Settings", "Intel System"],
	[1, 60, 15],
	1
] call CBA_fnc_addSetting;
[
	"MSF_UAV_SpawnDelay",
	"TIME",
	["UAV Spawn Delay", "Sets how long a drone operator must wait before spawning another drone."],
	["MSF - Server Settings", "UAV System"],
	[60, 3600, 900],
	1
] call CBA_fnc_addSetting;
[
	"MSF_Fuel_Tick",
	"TIME",
	["Infinite Fuel Tick", "Sets the interval used by the infinite fuel handler to refuel vehicles."],
	"MSF - Server Settings",
	[10, 300, 60],
	1
] call CBA_fnc_addSetting;
[
	"MSF_Rearm_PMags",
	"SLIDER",
	["Primary Mag Count", "Number of mags to re-arm a player with when using a re-arm object."],
	["MSF - Server Settings", "Player Re-Arm"],
	[1, 10, 4, 0],
	1
] call CBA_fnc_addSetting;
[
	"MSF_Rearm_HMags",
	"SLIDER",
	["Handgun Mag Count", "Number of mags to re-arm a player with when using a re-arm object."],
	["MSF - Server Settings", "Player Re-Arm"],
	[1, 10, 2, 0],
	1
] call CBA_fnc_addSetting;
[
	"MSF_Logi_CostMulti",
	"SLIDER",
	["Logistics Cost Multiplier", "Sets the cost multiplier for support called in via the logistics terminal and items retrieved from supply depots/trucks. (Base Cost * Multiplier)."],
	["MSF - Server Settings", "Logistics System"],
	[1, 3, 1, 2],
	1
] call CBA_fnc_addSetting;
[
	"MSF_Logi_PointsTickEnable",
	"CHECKBOX",
	["Enable Logistics Support Channel", "Adds a set amount of logistics points per interval set over time."],
	["MSF - Server Settings", "Logistics System"],
	true,
	1,
	{
		[_this, "LogiTick", [{[] call MSF_Logi_fnc_LogisticsChannelService;}, MSF_Logi_PointsTickInterval]] call MSF_fnc_SetServiceWorker;		
	}
] call CBA_fnc_addSetting;
[
	"MSF_Logi_PointsTickInterval",
	"TIME",
	["Logistics Interval", "Interval that will be used for adding logistics points over time."],
	["MSF - Server Settings", "Logistics System"],
	[300, 1800, 300],
	1
] call CBA_fnc_addSetting;
[
	"MSF_Logi_PointsPerTick",
	"SLIDER",
	["Logistics Interval Points", "Sets the number of points awarded per inteval."],
	["MSF - Server Settings", "Logistics System"],
	[1, 10, 3, 0],
	1
] call CBA_fnc_addSetting;