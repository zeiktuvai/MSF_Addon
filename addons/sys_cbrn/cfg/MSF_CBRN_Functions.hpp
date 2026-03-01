class CfgFunctions
{
    class MSF_CBRN
    {
        class System
		{
			file = "msf\addons\sys_cbrn\functions\system";
			class GetPlayerZoneInArea {};
            class SetLocalFog {};
		};
        class Module
		{
			file = "msf\addons\sys_cbrn\functions\mod";
			class Mod_RadArea {};
		};
		class Radiation
		{
			file = "msf\addons\sys_cbrn\functions\radiation";
			class SetRadiationArea {};
		};
    };
};
