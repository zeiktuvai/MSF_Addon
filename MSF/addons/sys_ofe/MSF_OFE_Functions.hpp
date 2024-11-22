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
		class MSF_OFE_Compositions
		{
			file = "z\msf\addons\sys_ofe\fnc\comp";
			class OFE_GetCheckpointComposition {};
			class OFE_GetOutpostComposition {};
			class OFE_GetVehicleComposition {};
		};
		class MSF_OFE_Object
		{
			file = "z\msf\addons\sys_ofe\fnc\object";
			class OFE_SpawnAndFillBoxes {};
			class OFE_SpawnInfantryInBuildings {};
			class OFE_SpawnInfantryOnPlaceholder {};
			class OFE_SpawnUnits {};
			class OFE_SpawnUnmannedVic {};
			class OFE_SpawnVehicleAmmo {};
		};
		class MSF_OFE_System
		{
			file = "z\msf\addons\sys_ofe\fnc\system";
			class OFE_CalculateStrengthValues {};
			class OFE_Configure {};
			class OFE_CreateModuleActivationTrigger {};
			class OFE_CreateModuleClearTrigger {};
			class OFE_FillContainers {};
			class OFE_SpawnCheckpoint {};
			class OFE_SpawnOutpost {};
			class OFE_SpawnVehiclePOI {};
		};
		class MSF_OFE_UI
		{
			file = "z\msf\addons\sys_ofe\fnc\ui";
			class OFE_GetNotorietyText {};
			class OFE_GetStrengthText {};
			class OFE_InitStatusDisplay {};
		};
		// class Initialization
		// {
		// 	file = "z\msf\addons\fnc";
		// 	class Init {};
		// 	class MissionInit
		// 	{				
		// 		postInit = 1;
		// 	};
		// };
	};
};