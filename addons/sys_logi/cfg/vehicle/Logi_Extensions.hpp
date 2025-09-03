class Man;
class B_Soldier_03_f;
class B_Soldier_base_F;

class B_engineer_F : B_Soldier_03_f
{
    linkedItems[] = {"V_Chestrig_rgr","H_HelmetB_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","MSF_LogisticsTerminal"};
    respawnLinkedItems[] = {"V_Chestrig_rgr","H_HelmetB_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","MSF_LogisticsTerminal"};
};

class B_soldier_repair_F : B_Soldier_base_F
{
    linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","MSF_LogisticsTerminal"};
    respawnLinkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","MSF_LogisticsTerminal"};
};

class B_T_Engineer_F : B_engineer_F
{
    linkedItems[] = {"H_HelmetB_tna_F","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F","MSF_LogisticsTerminal"};
    respawnLinkedItems[] = {"H_HelmetB_tna_F","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F","MSF_LogisticsTerminal"};
};

class B_T_Soldier_Repair_F : B_soldier_repair_F
{
    linkedItems[] = {"H_HelmetB_Light_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F","MSF_LogisticsTerminal"};
    respawnLinkedItems[] = {"H_HelmetB_Light_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F","MSF_LogisticsTerminal"};
};

class CAManBase : Man
{
    class ACE_SelfActions
    {
        class MSF_Logistics
        {
            displayName = "Logistics Management";
            icon = "\A3\Drones_F\Weapons_F_Gamma\Items\data\UI\gear_UAV_controller_rgr_CA.paa";
            condition = "[player, 'MSF_LogisticsTerminal', false] call BIS_fnc_hasItem";
            statement = "[] call MSF_UI_fnc_DisplayLogiMain";
            exceptions[] = {"isNotInside","isNotSitting","isNotSwimming"};

            // class MSF_LogisticsMenu
            // {
            //     displayName = "Logistics Management";
            //     exceptions[] = {};
            //     icon = MSF_ICON;
            //     condition = "[player, 'Engineer'] call MSF_fnc_CheckPlayerTrait";
            // };
            class MSF_LogisticsSupport
            {
                displayName = "Logistics Support Channel";
                condition = "true";
                exceptions[] = {"isNotInside","isNotSitting","isNotSwimming"};
                icon = "a3\ui_f\data\gui\cfg\communicationmenu\supplydrop_ca.paa";
                statement = "[] call MSF_UI_fnc_DisplayLogiSupport";
            };
            class MSF_VicLoadouts
            {
                displayName = "Vehicle Loadouts";
                exceptions[] = {"isNotSitting"};
                icon = "a3\soft_f_epc\truck_03\data\ui\truck_03_ammo_ca.paa";
                condition = "[player, 'Engineer'] call MSF_fnc_CheckPlayerTrait";
                statement = "[] call MSF_UI_fnc_DisplayVicLoadouts;";
            };
            class MSF_Markers
            {
                displayName = "Manage Markers";
                exceptions[] = {"isNotInside","isNotSitting","isNotSwimming"};
                icon = "a3\ui_f\data\map\diary\signal_ca.paa";
                condition = "[player, 'Engineer'] call MSF_fnc_CheckPlayerTrait";
                statement = "[] call MSF_UI_fnc_DisplayLogiMarker;";
            };
        };
    };
};
