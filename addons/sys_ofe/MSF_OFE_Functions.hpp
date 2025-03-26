class CfgFunctions
{
    class MSF
	{
		class MSF_OFE
		{
			file = "z\msf\addons\sys_ofe\fnc";
			class OFE_Init {
				postInit = 1;
			};
		};
		class MSF_OFE_Helpers
		{
			file = "z\msf\addons\sys_ofe\fnc\helper";
			class OFE_EnumerateModules {};
			class OFE_SetSpawnDir {};
		};
		class MSF_OFE_Modules
		{
			file = "z\msf\addons\sys_ofe\fnc\module";
			class OFE_Mod_ExistingLocation {};
			class OFE_Mod_MissionArea {};
			class OFE_Mod_SpawnArmorPOI {};
			class OFE_Mod_SpawnBase {};
			class OFE_Mod_SpawnBastion {};
			class OFE_Mod_SpawnCheckpoint {};
			class OFE_Mod_SpawnOutpost {};
			class OFE_Mod_SpawnStaticPOI {};
			class OFE_Mod_SpawnSupplyPOI {};
			class OFE_Mod_SpawnVehiclePOI {};
			class OFE_Mod {};
		};
		class MSF_OFE_Object
		{
			file = "z\msf\addons\sys_ofe\fnc\object";
			class OFE_PopulatePosition {};
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
			class OFE_Configure {};
			class OFE_CreateEscapeTrigger {};
			class OFE_CreateMapMarker {};
			class OFE_CreateModuleActivationTrigger {};
			class OFE_CreateModuleAITrigger {};
			class OFE_CreateModuleClearTrigger {};
			class OFE_GetComposition {};
			class OFE_GetLocationType {};
			class OFE_SpawnLocation {};
			class OFE_SpawnPOI {};
		};
		class MSF_OFE_UI
		{
			file = "z\msf\addons\sys_ofe\fnc\ui";
			class OFE_GetNotorietyText {};
			class OFE_GetStrengthText {};
			class OFE_InitStatusDisplay {};
		};
	};
};