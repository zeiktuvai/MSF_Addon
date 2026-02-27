class CfgFunctions
{
    class MSF_CBRN
    {
        class System
		{
			file = "z\msf\addons\sys_cbrn\functions\system";
			class GetPlayerZoneInArea {};
            class SetLocalFog {};
		};
        class Module
		{
			file = "z\msf\addons\sys_cbrn\functions\mod";
			class Mod_RadArea {};
		};
		class Radiation
		{
			file = "z\msf\addons\sys_cbrn\functions\radiation";
			class SetRadiationArea {};
		};
    };
};
