class CfgFunctions
{
    class MSF_Intel
	{
		class Client
		{
			file = "z\msf\addons\sys_intel\functions\client";
			class AddIntelInteraction {};
			class GetIntelItem {};
			class GetDiscoveredIntelItem {};
		};
		class Commands
		{
			file = "z\msf\addons\sys_intel\functions\commands";
			class AddIntelItem {};
			class CreateNewDiaryEntry {};
			class GetGatheredIntelCount {};
			class GetIsIntelEnabled {};
			class SetIntelLevel {};
		};
		class Module
		{
			file = "z\msf\addons\sys_intel\functions\module";
			class Mod_IntelLevel {};
			class Mod_IntelItem {};
			class Mod_IntelItemTask {};
			class Mod_IntelObjects {};
		};
	};
};
