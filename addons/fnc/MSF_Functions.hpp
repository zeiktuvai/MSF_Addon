class CfgFunctions
{
    class MSF
	{
		class Initialization
		{
			file = "z\msf\addons\fnc";
			class FoundationInit {
				preInit = 1;
			};
			class MissionInit
			{				
				postInit = 1;
			};
		};
		class ACE
		{
			file = "z\msf\addons\fnc\ace";
			class ACEMedUnconcious {};
			class AntistasiEnemyPlanes {};
			class SetupInventoryOverride {};
		};
		class Config
		{
			file = "z\msf\addons\fnc\config";
			class GetConfigClasses {};
			class GetDroneList {};
			class GetUnitOverrideCfg {};
		};
		class Data
		{
			file = "z\msf\addons\fnc\data";
			class DeleteConfigValue {};
			class ParseValidArray {};
			class SetConfigValue {};
		};
		class Eden
		{
			file = "z\msf\addons\fnc\eden";
			class ConfigureMP {};
			class GetSelectedUnitWeaponData {};
		};
		class Enemy
		{
			file = "z\msf\addons\fnc\enemy";
			class CreateAreaAirAttack {};
			class CreateAreaBuildingDefense {};
			class CreateAreaDefense {};
			class CreateAreaInfantryPatrol {};
			class CreateAreaVehicleDefense {};
			class CreateAreaVehiclePatrol {};
			class CreateWaveDefenseArea {};
			class DeleteAreaInfantryPatrol {};
			class FortifyArea {};
			class GeneratePatrolRoute {};
			class SpawnGroupInSafePos {};
		};
		class ExternalFunctions
		{
			file = "z\msf\addons\fnc\ext";
			class ZEN_OccupyHouse {};
			class ZEN_InsertionSort {};
			class ZEN_ExtendPosition {};
			class ZEN_ArrayShuffle {};
			class JBOY_UpDown {};
		};
		class Helpers
		{
			file = "z\msf\addons\fnc\helper";
			class AddAceMainMenuItem {};
			class FindOutsidePositionInTrigger {};
			class FindSafeSpawnPos {};
			class GetModuleActivationSide {};
			class GetObjectsByProperty {};
			class GetPlayersByProperty {};
			class GetRadialPositionRoute {};
			class GetRoadDirection {};
			class GetUnitsByProperty {};
			class GetVehiclesByProperty {};
			class GetVehiclesByPropertyValue {};
		};
		class Inventory
		{
			file = "z\msf\addons\fnc\inventory";
			class GenerateArmoryAmmo {};
			class GenerateInventory {};
			class GenerateRandomArmory {};
			class GenerateRandomInventory {};
		};
		class Math
		{
			file = "z\msf\addons\fnc\math";
			class CalculateProbability {};
			class GetAreaRadius {};
			class OrderArrayByStartingValue {};
		};
		class Mission
		{
			file = "z\msf\addons\fnc\mission";
			class ApplyDamageReduction {};
			class ApplyEndMission {};
			class ApplyGMActions {};
			class ApplyObjectActions {};
			class CreateActivationTrigger {};
			class CreateMapMarker {};
			class InfiniteFuelHandler {};
			class RespawnVehicleCustomization {};
			class SetupUAVSpawnSystem {};
		};
		class Module
		{
			file = "z\msf\addons\fnc\module";
			class Mod_BuildingDestroy {};
			class Mod_DeadUnit {};
			class Mod_InfantryVehiclePatrol {};
			class Mod_RandomSpawnCrash {};
			class Mod_ShowHide {};
			class Mod_Spawn_Checkpoint {};
			class Mod_Spawn_Fortify {};
			class Mod_Spawn_Supplies {};
			class Mod_Spawn_Wave {};
		};
		class Multiplayer
		{
			file = "z\msf\addons\fnc\mp";
			class ConfigRespawnOnPlayer	{};
			class JIPSpawnNearPlayer {};
			class RandomSpawn {};
		};
		class Objects
		{
			file = "z\msf\addons\fnc\object";
			class GetShowHideVehicleInTrigger {};
			class SetRandomVehicleState {};
			class SetTimeBasedInteraction {};
			class SetUnitDialogOption {};
			class SetVehicleDamageReduction {};
			class ShowHideObjects {};
		};
		class Spawn
		{
			file = "z\msf\addons\fnc\spawn";
			class SpawnSeekAndDestroyVehicles {};
			class SpawnUAV {};
		};
		class Systems
		{
			file = "z\msf\addons\fnc\systems";
			class GetIsIntelEnabled {};
		};
		class TFY
		{
			file = "z\msf\addons\fnc\TFY";
			class InitializeInternal {
				postInit = 1;
			};
		};
		class Validators
		{
			file = "z\msf\addons\fnc\validator";
			class SetInvGenEnable {};
			class SetDialogValidator {};
			class SetCfgEntryValidator {};
			class CheckNotifyTriggerHasArea {};
		};
	};
};