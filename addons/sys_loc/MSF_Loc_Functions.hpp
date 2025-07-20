class CfgFunctions
{
    class MSF_Loc
	{
		class Config
		{
			file = "z\msf\addons\sys_location\functions\cfg";
			class GetComposition {};
			class GetLocationType {};
		};
		class Commands
		{
			file = "z\msf\addons\sys_location\functions\commands";
			class InitLocation {};
			class InitPOI {};
		};
		class Helpers
		{
			file = "z\msf\addons\sys_location\functions\helper";
			class CreateLocationActivationTrigger {};
			class CreateLocationAITrigger {};
			class CreateMapMarker {};
			class SetObjectDir {};
		};
		class MSF_OFE_Object
		{
			file = "z\msf\addons\sys_location\functions\spawn";
			class SpawnLocation {};
		};
	};
};
