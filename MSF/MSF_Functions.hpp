class CfgFunctions
{
    class MSF
	{
		class EntryPoint
		{
			file = "msf\fnc";
			class Init
			{
				recompile = 1;
			};
		};
		class Mission
		{
			file = "msf\fnc\mission";
			class MissionInit
			{
				recompile = 1;
				postInit = 1;
			};
			class ApplyGMActions
			{
				recompile = 1;
			};
			class ApplyEndMission
			{
				recompile = 1;
			};
		};
		class Multiplayer
		{
			file = "msf\fnc\multiplayer";
			class ConfigRespawnOnPlayer
			{
				recompile = 1;
			};
			class JIPSpawnNearPlayer
			{
				recompile = 1;
			};
			class ConfigureMP {};
		};
		class Persistence
		{
			file = "msf\fnc\persist";
			class Persist_Init
			{
				recompile = 1;
				postInit = 1;
			};
			class Persist_GetVehicleData
			{
				recompile = 1;
			};
			class Persist_SetVehicleData
			{
				recompile = 1;
			};
			class Persist_SaveData
			{
				recompile = 1;
			};
			class Persist_LoadData
			{
				recompile = 1;
			};
		};
		class ACEOptions
		{
			file = "msf\fnc\ace";
			class ACEMedUnconcious
			{
				recompile = 1;
			};
		};
		class Loadouts
		{
			file = "msf\fnc\loadout";
			class InitializeLoadouts
			{
				recompile = 1;
			};
			class GetDynamicLoadoutByClass
			{
				recompile = 1;
			};
			class ApplyInitialLoadout
			{
				recompile = 1;
			};
			class ApplyRespawnInventory
			{
				recompile = 1;
			};
		};
		class Objects
		{
			file = "msf\fnc\object";
			class GenerateInventory
			{
				recompile = 1;
			};
			class InfiniteFuelHandler {};
			class SetVehicleDamageReduction {};
			class SetUnitDialogOption {};
		};
		class Helpers
		{
			file = "msf\fnc\helpers";
			class GetVehiclesByProperty {};
			class GetPlayersByProperty {};
			class GetVehiclesByPropertyValue {};
			class GetUnitsByProperty {};
			class AddAceMainMenuItem {};
		};
		class Validators
		{
			file = "msf\fnc\validators";
			class SetInvGenEnable {};
			class SetDialogValidator {};
		};
	};
};