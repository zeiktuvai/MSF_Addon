class CfgFunctions
{
    class MSF_Intel
	{
		class Data
		{
			file = "z\msf\addons\sys_intel\fnc\data";
			class AddIntelItem {};
			class GetIntelItem {};
		};
		class interaction
		{
			file = "z\msf\addons\sys_intel\fnc\interaction";
			class AddIntelInteraction {};
		};
		class Module
		{
			file = "z\msf\addons\sys_intel\fnc\module";
			class Mod_Init {};
			class Mod_IntelObjects {};
		};
	};
};