class CfgFunctions
{
    class MSF
	{
		class Player
		{
			file = "z\msf\addons\fnc";
			class Init {};
		};
		class Mission
		{
			file = "z\msf\addons\fnc";
			class MissionInit
			{				
				postInit = 1;
			};
			class ApplyGMActions {};
			class ApplyEndMission {};
		};
		class Multiplayer
		{
			file = "z\msf\addons\fnc";
			class ConfigRespawnOnPlayer	{};
			class JIPSpawnNearPlayer {};
			class ConfigureMP {};
		};
		class ACEOptions
		{
			file = "z\msf\addons\fnc";
			class ACEMedUnconcious {};
		};
		class Loadouts
		{
			file = "z\msf\addons\fnc";
			class InitializeLoadouts {};
			class GetDynamicLoadoutByClass {};
			class ApplyInitialLoadout {};
			class ApplyRespawnInventory {};
		};
		class Objects
		{
			file = "z\msf\addons\fnc\object";
			class GenerateInventory {};
			class InfiniteFuelHandler {};
			class SetVehicleDamageReduction {};
			class SetUnitDialogOption {};
			class ApplyDamageReduction {};
		};
		class Helpers
		{
			file = "z\msf\addons\fnc";
			class GetVehiclesByProperty {};
			class GetPlayersByProperty {};
			class GetVehiclesByPropertyValue {};
			class GetUnitsByProperty {};
			class AddAceMainMenuItem {};
		};
		class Validators
		{
			file = "z\msf\addons\fnc";
			class SetInvGenEnable {};
			class SetDialogValidator {};
		};
	};
};