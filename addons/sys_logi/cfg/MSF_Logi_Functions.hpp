class CfgFunctions
{
    class MSF_Logi
	{
        class Init
        {
            file = "z\msf\addons\sys_logi\functions";
            class InitializeLogistics {
                postInit = 1;
            };
        };
        class Helper
        {
            file = "z\msf\addons\sys_logi\functions\helper";
            class CheckAvailablePoints {};
            class RequestLogistics {};
        };
        class Inventory
        {
            file = "z\msf\addons\sys_logi\functions\inventory";
            class AddItem {};
            class GenerateArmoryAmmo {};
            class GenerateInventory {};
			class GenerateRandomArmory {};
            class GetPlayerWeaponInventory {};
            class RearmUnit {};
            class SelectCategory {};
        };
        class Module
		{
			file = "z\msf\addons\sys_logi\functions\module";
            class Mod_InvGen {};
            class Mod_LogiPoints {};
            class Mod_Rearm {};
            class Mod_SupplyTruck {};
            class Mod_UAV {};
        };
        class Spawn
        {
            file = "z\msf\addons\sys_logi\functions\spawn";
            class SpawnLogiBackpack {};
            class SpawnLogiCrate {};
            class SpawnVehicleParaDrop {};
        };
        class System
        {
            file = "z\msf\addons\sys_logi\functions\system";
            class GetLogiItemsMenu {};
            class GetLogiSelection {};
            class InitializeSupplyDepot {};
            class InitializeSupplyTruck {};
            class RemoveLocalLogiItem {};
            class SetupRearmInteraction {};
            class SetupUAVSystem {};
            class UpdateLogiPoints {};
        };
    };
};