class CfgFunctions
{
    class MSF_CBRN
    {
		class App
		{
			file = "msf\addons\sys_cbrn\functions\app";
			class initCBRN {
				postInit = 1;
			};
		};
		class Helper
		{
			file = "msf\addons\sys_cbrn\functions\helper";
			class CreateRadiationMarker {};
		};
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
			class CalculateRadDamage {};
			class GetDamageParts {};
			class GetPlayerCBRNGear {};
			class SetRadiationArea {};
		};
    };
};
