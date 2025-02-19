class CfgFunctions
{
    class MSF_Inv
	{
        class Inventory
        {
            file = "z\msf\addons\sys_inv\fnc\inventory";
            class AddItem {};
            class GenerateArmoryAmmo {};
			class GenerateRandomArmory {};
            class GetPlayerWeaponInventory {};
        };
        class Module
		{
			file = "z\msf\addons\sys_inv\fnc\module";
            class Mod_InvGen {};
            class Mod_UAV {};
        };
        class System
        {
            file = "z\msf\addons\sys_inv\fnc\system";
            class GenerateInventory {};
            class SelectCategory {};
            class SetupUAVSystem {
                postInit = 1;
            };
        };
    };
};