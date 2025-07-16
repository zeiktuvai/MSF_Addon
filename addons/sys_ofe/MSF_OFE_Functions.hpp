class CfgFunctions
{
    class MSF
	{
		class MSF_OFE_Helpers
		{
			file = "z\msf\addons\sys_ofe\fnc\helper";
			class OFE_SetSpawnDir {};
		};
		class MSF_OFE_Modules
		{
			file = "z\msf\addons\sys_ofe\fnc\module";
			class OFE_Mod_MissionArea {};
		};
		class MSF_OFE_Object
		{
			file = "z\msf\addons\sys_ofe\fnc\object";
			class OFE_SpawnAndFillBoxes {};
			class OFE_SpawnEscapeVic {};
			class OFE_SpawnInfantryInBuildings {};
			class OFE_SpawnInfantryOnPlaceholder {};
			class OFE_SpawnMannedVic {};
			class OFE_SpawnUnmannedVic {};
			class OFE_SpawnVehicleAmmo {};
		};
		class MSF_OFE_System
		{
			file = "z\msf\addons\sys_ofe\fnc\system";
			class OFE_CalculateStrengthValues {};
			class OFE_CreateEscapeTrigger {};
			class OFE_CreateMapMarker {};
			class OFE_CreateModuleAITrigger {};
			class OFE_GetComposition {};
			class OFE_GetLocationType {};
			class OFE_SpawnLocation {};
			class OFE_SpawnPOI {};
		};
	};
};
