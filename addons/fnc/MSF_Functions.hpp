class CfgFunctions
{
    class MSF
	{
		class EntryPoint
		{
			class Init {};
		};
		class Mission
		{
			class MissionInit
			{				
				postInit = 1;
			};
			class ApplyGMActions {};
			class ApplyEndMission {};
		};
		class Multiplayer
		{
			class ConfigRespawnOnPlayer	{};
			class JIPSpawnNearPlayer {};
			class ConfigureMP {};
		};
		class Persistence
		{
			class Persist_Init
			{
				postInit = 1;
			};
			class Persist_GetVehicleData {};
			class Persist_SetVehicleData {};
			class Persist_SaveData {};
			class Persist_LoadData {};
		};
		class ACEOptions
		{
			class ACEMedUnconcious {};
		};
		class Loadouts
		{
			class InitializeLoadouts {};
			class GetDynamicLoadoutByClass {};
			class ApplyInitialLoadout {};
			class ApplyRespawnInventory {};
		};
		class Objects
		{			
			class GenerateInventory {};
			class InfiniteFuelHandler {};
			class SetVehicleDamageReduction {};
			class SetUnitDialogOption {};
			class AddVehicleDamageHandler {};
		};
		class Helpers
		{
			class GetVehiclesByProperty {};
			class GetPlayersByProperty {};
			class GetVehiclesByPropertyValue {};
			class GetUnitsByProperty {};
			class AddAceMainMenuItem {};
		};
		class Validators
		{
			class SetInvGenEnable {};
			class SetDialogValidator {};
		};
	};
};