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
            class InitializeSupplyDepot {};
        };
        class Inventory
        {
            file = "z\msf\addons\sys_logi\functions\inventory";
            class AddItem {};
            class GenerateArmoryAmmo {};
			class GenerateRandomArmory {};
            class GetPlayerWeaponInventory {};
            class RearmUnit {};
        };
        class Module
		{
			file = "z\msf\addons\sys_logi\functions\module";
            class Mod_InvGen {};
            class Mod_Rearm {};
            class Mod_UAV {};
        };
        class Spawn
        {
            file = "z\msf\addons\sys_logi\functions\spawn";
            class SpawnLogiBackpack {};
            class SpawnLogiCrate {};
        };
        class System
        {
            file = "z\msf\addons\sys_logi\functions\system";
            class GenerateInventory {};
            class GetLogiSelection {};
            class SelectCategory {};
            class SetupRearmInteraction {};
            class SetupUAVSystem {};
        };
    };
};