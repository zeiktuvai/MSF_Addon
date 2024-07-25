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
		class Mission
		{
			file = "z\msf\addons\fnc\mission";
			class ApplyAreaFortification {};
			class ApplyEndMission {};
			class ApplyGMActions {};
			class ApplyObjectActions {};
			class ApplyRandomTriggerPatrol {};
			class RespawnVehicleCustomization {};
		};
		class Enemy
		{
			file = "z\msf\addons\fnc\enemy";
			class CreateAreaBuildingDefense {};
			class CreateAreaDefense {};
			class CreateAreaVehicleDefense {};
			class CreateAreaVehiclePatrol {};
			class CreateRandomTriggerPatrol {};
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
			class ApplyDamageReduction {};
			class GenerateInventory {};
			class InfiniteFuelHandler {};
			class SetTimeBasedInteraction {};
			class SetUnitDialogOption {};
			class SetVehicleDamageReduction {};
		};
		class Helpers
		{
			file = "z\msf\addons\fnc\helper";
			class AddAceMainMenuItem {};
			class FindSafeSpawnPos {};
			class GetAreaRadius {};
			class GetInventoryLists {};
			class GetObjectsByProperty {};
			class GetPlayersByProperty {};
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