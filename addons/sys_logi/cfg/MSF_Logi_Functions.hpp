class CfgFunctions
{
    class MSF_Logi
	{
        class Init
        {
            file = "z\msf\addons\sys_logi\fnc";
            class InitializeLogistics {
                postInit = 1;
            };
        };
        class Inventory
        {
            file = "z\msf\addons\sys_logi\fnc\inventory";
            class AddItem {};
            class GenerateArmoryAmmo {};
			class GenerateRandomArmory {};
            class GetPlayerWeaponInventory {};
            class RearmUnit {};
        };
        class Module
		{
			file = "z\msf\addons\sys_logi\fnc\module";
            class Mod_InvGen {};
            class Mod_Rearm {};
            class Mod_UAV {};
        };
        class Spawn
        {
            file = "z\msf\addons\sys_logi\fnc\spawn";
            class SpawnSupplyCrate {};
        };
        class System
        {
            file = "z\msf\addons\sys_logi\fnc\system";
            class GenerateInventory {};
            class SelectCategory {};
            class SetupRearmInteraction {};
            class SetupUAVSystem {};
        };
        class UI
        {
            file = "z\msf\addons\sys_logi\fnc\ui";
            class DisplayDeployUAV {};
            class StartPlaceObjectUI {};
        };
    };
};