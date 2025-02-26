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
			class AddAceMenuItem {};
			class AddInventoryOverrideOption {};
		};
		class Config
		{
			file = "z\msf\addons\fnc\config";
			class GetConfigData {};
			class GetUnitOverrideCfg {};
		};
		class Data
		{
			file = "z\msf\addons\fnc\data";
			class ConfigValueExists {};
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
		class Handlers
		{
			file = "z\msf\addons\fnc\handlers";
			class AntistasiEnemyPlanes {};
			class InfiniteFuelHandler {};			
		};
		class Helpers
		{
			file = "z\msf\addons\fnc\helper";
			class CreateActivationTrigger {};
			class CreateMapMarker {};
			class DistinctArray {};
			class FindSafeSpawnPos {};
			class GeneratePatrolRoute {};
			class GetModuleActivationSide {};
			class GetRadialPositionRoute {};
			class GetRoadDirection {};
			class GetVehiclesByProperty {};
			class GetVehiclesByPropertyValue {};
		};
		class Math
		{
			file = "z\msf\addons\fnc\math";
			class CalculateProbability {};
			class GetAreaRadius {};
			class OrderArrayByStartingValue {};
		};
		class Module
		{
			file = "z\msf\addons\fnc\module";
			class Mod_BuildingDestroy {};
			class Mod_DeadUnit {};
			class Mod_DeleteUnit {};
			class Mod_Dialog {};
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
			class HideShowHideModUnits {};
			class RespawnVehicleCustomization {};
			class SetRandomVehicleState {};
			class ShowHideObjects {};
		};
		class Player
		{
			file = "z\msf\addons\fnc\player";
			class UpdatePlayerWeapon {};
		};
		class Spawn
		{
			file = "z\msf\addons\fnc\spawn";
			class DeleteAreaInfantryPatrol {};
			class SpawnAreaAirAttack {};
			class SpawnAreaBuildingDefense {};
			class SpawnAreaInfantryPatrol {};
			class SpawnAreaVehicleDefense {};
			class SpawnAreaVehiclePatrol {};
			class SpawnGroupInSafePos {};
			class SpawnSeekAndDestroyVehicles {};
			class SpawnUAV {};
			class SpawnWaveDefenseArea {};
		};
		class Systems
		{
			file = "z\msf\addons\fnc\systems";
			class FortifyArea {};
			class GetIsIntelEnabled {};
			class InitMSFHandler {};
			class SetWeaponOverrideEH {};
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
		};
	};
};