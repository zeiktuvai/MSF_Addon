class CfgFunctions
{
    class MSF
	{
		class App
		{
			file = "z\msf\addons\functions\app";
			class FoundationInit {
				preInit = 1;
			};
			class MissionInit
			{				
				postInit = 1;
			};
			class InitializeMSFService{};
		};
		class ACE
		{
			file = "z\msf\addons\functions\ace";
			class ACEMedUnconcious {};
			class AddAceMenuItem {};
			class AddInventoryOverrideOption {};
		};
		class Commands
		{
			file = "z\msf\addons\functions\commands";
			class FortifyArea {};
			class RandomSpawn {};
			class SetWeaponOverrideEH {};
		};
		class Config
		{
			file = "z\msf\addons\functions\config";
			class GetConfigData {};
			class GetSyncedUntConfig {};
			class GetOldCfg {};
		};
		class Data
		{
			file = "z\msf\addons\functions\data";
			class ConfigValueExists {};
			class DeleteConfigValue {};
			class GetConfigValue {};
			class ParseValidArray {};
			class SetConfigValue {};
			class SetLocalValue {};
		};
		class Debug
		{
			file = "z\msf\addons\functions\debug";
			class SendDebugMsg {};
			class SetDebugMsgService {};
		};
		class Eden
		{
			file = "z\msf\addons\functions\eden";
			class ConfigureMP {};
			class GetSelectedUnitWeaponData {};
		};
		class Helpers
		{
			file = "z\msf\addons\functions\helper";
			class CheckPlayerTrait {};
			class CreateActivationTrigger {};
			class CreateMapMarker {};
			class DistinctArray {};
			class FindSafeSpawnPos {};
			class GeneratePatrolRoute {};
			class GetModuleActivationSide {};
			class GetModuleSyncedUnits {};
			class GetRadialPositionRoute {};
			class GetRoadDirection {};
			class GetTimeBasedGUID {};
			class GetVehiclesByProperty {};
			class GetVehiclesByPropertyValue {};
		};
		class Math
		{
			file = "z\msf\addons\functions\math";
			class CalculateProbability {};
			class GetAreaRadius {};
			class OrderArrayByStartingValue {};
		};
		class Module
		{
			file = "z\msf\addons\functions\module";
			class Mod_BuildingDestroy {};
			class Mod_DeadUnit {};
			class Mod_DeleteUnit {};
			class Mod_Dialog {};
			class Mod_EscapeArea {};
			class Mod_Fuel {};
			class Mod_GM {};
			class Mod_InfantryVehiclePatrol {};
			class Mod_ProgressBarInteraction {};
			class Mod_RandomSpawnCrash {};
			class Mod_ScenarioEnd {};
			class Mod_ShowHide {};
			class Mod_Spawn_Checkpoint {};
			class Mod_Spawn_Fortify {};
			class Mod_Spawn_Supplies {};
			class Mod_Spawn_Wave {};
			class Mod_SpawnUnitTypes {};
		};
		class Objects
		{
			file = "z\msf\addons\functions\object";
			class GetShowHideVehicleInTrigger {};
			class HideShowHideModUnits {};
			class RespawnVehicleCustomization {};
			class SetRandomVehicleState {};
			class ShowHideObjects {};
		};
		class Player
		{
			file = "z\msf\addons\functions\player";
			class ConfigRespawnOnPlayer	{};
			class JIPSpawnNearPlayer {};
			class UpdatePlayerWeapon {};
		};
		class Services
		{
			file = "z\msf\addons\functions\services";
			class AntistasiEnemyPlaneService {};
			class InfiniteFuelService {};
			class RegisterServiceWorker {};
			class RemoveServiceWorker {};
			class SetServiceWorker {};
		};
		class Spawn
		{
			file = "z\msf\addons\functions\spawn";
			class DeleteAreaInfantryPatrol {};
			class SpawnAreaAirAttack {};
			class SpawnAreaBuildingDefense {};
			class SpawnAreaInfantryPatrol {};
			class SpawnAreaVehicleDefense {};
			class SpawnAreaVehiclePatrol {};
			class SpawnInfantryInBuildings {};
			class SpawnInfantryOnPlaceholder {};
			class SpawnMannedVicArray {};
			class SpawnSeekAndDestroyVehicles {};
			class SpawnUAV {};
			class SpawnWaveDefenseArea {};
		};
		class TFY
		{
			file = "z\msf\addons\functions\TFY";
			class InitializeInternal {
				postInit = 1;
			};
		};
	};
};
