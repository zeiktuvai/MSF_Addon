class CfgFunctions
{
    class MSF
	{
		class Initialization
		{
			file = "z\msf\addons\fnc";
			class Init {};
			class MissionInit
			{				
				postInit = 1;
			};
		};
		class Config
		{
			file = "z\msf\addons\fnc\config";
			class GetInventoryLists {};
			class GetLocalConfig {};
			class GetUnitClasses {};
			class GetDroneList {};
		};
		class Mission
		{
			file = "z\msf\addons\fnc\mission";
			class ApplyEndMission {};
			class ApplyGMActions {};
			class ApplyObjectActions {};
			class CreateActivationTrigger {};		
			class RespawnVehicleCustomization {};
			class SetupMSFTriggers {};
			class SetupUAVSpawnSystem {};
		};
		class Module
		{
			file = "z\msf\addons\fnc\module";
			class Mod_InfantryVehiclePatrol {};
			class Mod_RandomSpawnCrash {};
			class Mod_Spawn_Fortify {};
			class Mod_Spawn_Supplies {};
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
		class Multiplayer
		{
			file = "z\msf\addons\fnc\mp";
			class ConfigRespawnOnPlayer	{};
			class ConfigureMP {};
			class JIPSpawnNearPlayer {};
			class RandomSpawn {};
		};
		class ACEOptions
		{
			file = "z\msf\addons\fnc\ace";
			class ACEMedUnconcious {};
		};
		class Objects
		{
			file = "z\msf\addons\fnc\object";
			class ApplyBuildingDestruction {};
			class ApplyDamageReduction {};
			class CreateRandomSupplies {};
			class GenerateInventory {};
			class InfiniteFuelHandler {};
			class SetRandomVehicleState {};
			class SetTimeBasedInteraction {};
			class SetUnitDialogOption {};
			class SetVehicleDamageReduction {};
			class ShowHideObjects {};
			class SpawnSeekAndDestroyVehicles {};
			class SpawnUAV {};
		};
		class Helpers
		{
			file = "z\msf\addons\fnc\helper";
			class AddAceMainMenuItem {};
			class CreateLinkedActivationTrigger {};
			class FindOutsidePositionInTrigger {};
			class FindSafeSpawnPos {};
			class GenerateRandomInventory {};
			class GetObjectsByProperty {};
			class GetPlayersByProperty {};
			class GetRadialPositionRoute {};
			class GetRoadDirection {};
			class GetSpawnChance {};
			class GetUnitsByProperty {};
			class GetVehiclesByProperty {};
			class GetVehiclesByPropertyValue {};
		};
		class Intel
		{
			file = "z\msf\addons\fnc\intel";
			class SetupIntel {};
		};
		class Math
		{
			file = "z\msf\addons\fnc\math";
			class GetAreaRadius {};
			class OrderArrayByStartingValue {};
		};
		class Units
		{
			file = "z\msf\addons\fnc\units";
			class AddRadio {};
			class AddSilencer {};
			class ApplyInsignia {};
			class SetInsigniaEH {};
		};
		class Validators
		{
			file = "z\msf\addons\fnc\validator";
			class SetInvGenEnable {};
			class SetDialogValidator {};
			class SetCfgEntryValidator {};
			class CheckNotifyTriggerHasArea {};
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
		class TFY
		{
			file = "z\msf\addons\fnc\TFY";
			class InitializeInternal {
				postInit = 1;
			};
		};
	};
};