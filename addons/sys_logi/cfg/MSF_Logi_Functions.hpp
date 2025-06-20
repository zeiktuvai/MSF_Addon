class CfgFunctions
{
    class MSF_Logi
	{
        class System
        {
            file = "z\msf\addons\sys_logi\functions\app";
            class InitializeLogistics {
                postInit = 1;
            };
        };
        class Commands
        {
            file = "z\msf\addons\sys_logi\functions\commands";
            class GetLogiItemsMenu {};
            class GetLogiSelection {};
            class InitializeSupplyDepot {};
            class InitializeSupplyTruck {};
            class RemoveLocalLogiItem {};
            class SetupRearmInteraction {};
            class SetupUAVSystem {};
            class UpdateLogiPoints {};
        };
        class Config
        {
            file = "z\msf\addons\sys_logi\functions\config";
            class GetLogiInventory {};
            class GetSavedVehicleLoadout {};
            class SaveVehicleLoadout {};
        };
        class Helper
        {
            file = "z\msf\addons\sys_logi\functions\helper";
            class CheckAvailablePoints {};
            class ConvertVehicleInventoryData {};
            class RequestLogistics {};
            class ShareVehicleLoadout {};
        };
        class Inventory
        {
            file = "z\msf\addons\sys_logi\functions\inventory";
            class AddItem {};
            class AddVehicleCargoFormatted {};
            class GenerateArmoryAmmo {};
            class GenerateInventory {};
			class GenerateRandomArmory {};
            class GetPlayerWeaponInventory {};
            class GetVehicleInventoryData {};
            class RearmUnit {};
            class SelectCategory {};
            class SetVehicleInventoryData {};
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
    };
};