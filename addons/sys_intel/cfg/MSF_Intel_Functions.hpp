class CfgFunctions
{
    class MSF_Intel
	{
		class Interaction
		{
			file = "z\msf\addons\sys_intel\fnc\interaction";
			class AddIntelInteraction {};
		};
		class Module
		{
			file = "z\msf\addons\sys_intel\fnc\module";
			class Mod_IntelLevel {};
			class Mod_IntelItem {};
			class Mod_IntelItemTask {};
			class Mod_IntelObjects {};
		};
		class System
		{
			file = "z\msf\addons\sys_intel\fnc\system";
			class AddIntelItem {};
			class GetIntelItem {};
			class SetIntelLevel {};
		};
	};
};