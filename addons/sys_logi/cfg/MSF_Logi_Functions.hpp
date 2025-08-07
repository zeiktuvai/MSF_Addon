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
            class GetLogiPoints {};
            class RequestLogistics {};
            class RetrieveSupplies {};
            class SetupUAVSystem {};
            class SubmitLogiRequest {};
            class UpdateLogiPoints {};
        };
        class Config
        {
            file = "z\msf\addons\sys_logi\functions\config";
            class GetLogiInventory {};
            class GetLogiSupports {};
            class GetSavedVehicleLoadout {};
            class RemoveSharedVehicleLoadout {};
            class SaveVehicleLoadout {};
            class ShareVehicleLoadout {};
        };
        class Helper
        {
            file = "z\msf\addons\sys_logi\functions\helper";
            class CalculateItemCost {};
            class CheckSupplyPointExists {};
            class ConvertVehicleInventoryData {};
            class SendLogisticsMessage {};
            class SetupRearmInteraction {};
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
            class Mod_UAV {};
        };
        class Server
        {
            file = "z\msf\addons\sys_logi\functions\server";
            class AddLoadoutServerEH {};
        };
        class Services
        {
            file = "z\msf\addons\sys_logi\functions\services";
            class LogisticsChannelService {};
        };
        class Spawn
        {
            file = "z\msf\addons\sys_logi\functions\spawn";
            class SpawnAndFillBoxesOnPlaceholder {};
            class SpawnLogiBackpack {};
            class SpawnLogiCrate {};
            class SpawnUnmannedVicsOnPlaceholder {};
            class SpawnVehicleAmmoOnPlaceholder {};
            class SpawnVehicleParaDrop {};
        };
    };
};
