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
			class RespawnVehicleCustomization {};
			class SetupMSFTriggers {};
			class SetupUAVSpawnSystem {};
		};
		class Enemy
		{
			file = "z\msf\addons\fnc\enemy";
			class CreateAreaAirAttack {};
			class CreateAreaBuildingDefense {};
			class CreateAreaDefense {};
			class CreateAreaVehicleDefense {};
			class CreateAreaVehiclePatrol {};
			class CreateRandomTriggerPatrol {};
			class CreateWaveDefenseArea {};
			class DeleteRandomTriggerPatrol {};
			class FortifyArea {};
			class SpawnGroupInSafePos {};
		};
		class Multiplayer
		{
			file = "z\msf\addons\fnc\mp";
			class ConfigRespawnOnPlayer	{};
			class ConfigureMP {};
			class JIPSpawnNearPlayer {};
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
			class SetTimeBasedInteraction {};
			class SetUnitDialogOption {};
			class SetVehicleDamageReduction {};
			class SpawnSeekAndDestroyVehicles {};
			class SpawnUAV {};
		};
		class Helpers
		{
			file = "z\msf\addons\fnc\helper";
			class AddAceMainMenuItem {};
			class CreateActivationTrigger {};
			class FindOutsidePositionInTrigger {};
			class FindSafeSpawnPos {};
			class GenerateRandomInventory {};
			class GetAreaRadius {};
			class GetObjectsByProperty {};
			class GetPlayersByProperty {};
			class GetSpawnChance {};
			class GetUnitsByProperty {};
			class GetVehiclesByProperty {};
			class GetVehiclesByPropertyValue {};
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
	};
};