#define BP_ICON "a3\ui_f\data\igui\cfg\simpletasks\types\backpack_ca.paa"
#define CRATE_ICON "a3\ui_f\data\map\vehicleicons\iconcrate_ca.paa"

class MSF_Logi_Config
{
    class Inventory
    {
        class Backpacks
        {
            class Ammo
            {
                name = "Ammo Bearer Backpack";
                description = "Places a backpack filled with ammo for players primary weapons in place of your current backpack.";
                icon = BP_ICON;
                type = "BP_Ammo";
                baseCost = 5;
            };
            class Medical
            {
                name = "Combat Medic Backpack";
                description = "Places a backpack with medical supplies in place of your current backpack.";
                icon = BP_ICON;
                type = "BP_Medical";
                baseCost = 5;
            };
            class Standard
            {
                name = "Standard Backpack";
                description = "Places a backpack with a standard set of items in place of your current backpack.";
                icon = BP_ICON;
                type = "BP_Std";
                baseCost = 5;
            };
        };
        class Crates
        {
            class Ammo
            {
                name = "Ammo Resupply Crate";
                description = "Spawns an ammo supply crate that adds primary/secondary ammo to a players inventory upon interaction.";
                icon = "a3\ui_f\data\map\vehicleicons\iconcrateammo_ca.paa";
                type = MSF_CARGO_AMMO;
                baseCost = 3;
            };
            class HeavyAmmo
            {
                name = "Ordinance Crate";
                description = "Spawns a supply crate containing grenades and launcher ammo.";
                icon = "a3\ui_f\data\map\vehicleicons\iconcrateord_ca.paa";
                type = MSF_CARGO_ORD;
                baseCost = 7;
            };
            class Medical
            {
                name = "Medical Crate";
                description = "Spawns an ACE advanced medical crate.";
                icon = CRATE_ICON;
                type = MSF_CARGO_MED;
                baseCost = 5;
            };
            class Food
            {
                name = "Food Crate";
                description = "Spawns a supply crate containing ACE Rations.";
                icon = CRATE_ICON;
                type = MSF_CARGO_FOOD;
                baseCost = 3;
            };
        };
    };
    class Supports
    {
        west[] = {"BLU_F", "CUP_B_US_Army", "CUP_B_GB"};
        east[] = {"OPF_F", "CUP_O_RU", "CUP_O_RU"};
        guer[] = {"IND_G_F", "CUP_B_GB"};
        class SupplyDepot
        {
            name = "Supply Depot";
            description = "Calls in a Supply Depot Air-drop that allows you to use the supply menu to retrieve various supplies like ammo boxes and medical supplies.";
            icon = "a3\weapons_f\ammoboxes\data\ui\map_wpnsbox_f_ca.paa";
            type = "SupplyDepot";
            baseCost = 5;
            airDrop = 1;
            category = 0;
        };
        class FuelDrop
        {
            name = "Fuel Tank";
            description = "Calls in a Fuel Tank Air-drop.";
            icon = "a3\ui_f\data\igui\cfg\actions\refuel_ca.paa";
            type = "FuelTank";
            baseCost = 2;
            airDrop = 1;
            category = 0;
        };
        class VehicleAmmo
        {
            name = "Vehicle Ammo";
            description = "Calls in a Vehicle Ammo resupply box (ACE Rearm).";
            icon = "a3\weapons_f\ammoboxes\data\ui\map_ammoveh_f_ca.paa";
            type = "VicAmmo";
            baseCost = 3;
            airDrop = 1;
            category = 0;
        };
        class Ambulance
        {
            name = "Ambulance";
            description = "Calls in an Ambulance Air-drop filled with medical supplies. Counts as a medical vehicle for advanced ACE Medical requirements.";
            icon = "a3\soft_f_epc\truck_03\data\ui\truck_03_medevac_ca.paa";
            type = "Ambulance";
            baseCost = 3;
            airDrop = 1;
            category = 0;
        };
        class VicStatic
        {
            name = "Turret";
            description = "Calls in a turret emplacement Air-drop at the selected location.";
            icon = "a3\static_f_gamma\data\ui\gear_staticturret_mg_ca.paa";
            type = "VicStatic";
            baseCost = 5;
            airDrop = 1;
            category = 1;
        };
        class VicCar
        {
            name = "Car";
            description = "Calls in a car Air-drop at the selected location.";
            icon = "\A3\Soft_F\MRAP_01\Data\UI\MRAP_01_Base_ca.paa";
            type = "VicCar";
            baseCost = 7;
            airDrop = 1;
            category = 1;
        };
        class VicApc
        {
            name = "APC";
            description = "Calls in an APC Air-drop at the selected location.";
            icon = "a3\armor_f_beta\apc_wheeled_02\data\ui\apc_wheeled_02_rcws_ca.paa";
            type = "VicApc";
            baseCost = 9;
            airDrop = 1;
            category = 1;
        };
        class VicArty
        {
            name = "Artillery";
            description = "Calls in an artillery veicle Air-drop at the selected location.";
            icon = "a3\armor_f_gamma\mbt_02\data\ui\mbt_02_arty_ca.paa";
            type = "VicArty";
            baseCost = 12;
            airDrop = 1;
            category = 1;
        };
        class VicTank
        {
            name = "Tank";
            description = "Calls in a tank Air-drop at the selected location.";
            icon = "a3\armor_f_epb\mbt_03\data\ui\mbt_03_ca.paa";
            type = "VicTank";
            baseCost = 15;
            airDrop = 1;
            category = 1;
        };
        class ArtyFlareG
        {
            name = "Illumination Flare - Green";
            #include "include/flare_info.inc"
            type = "ArtyFlareG";
            #include "include/flare_stats.inc"
        };
        class ArtyFlareR
        {
            name = "Illumination Flare - Red";
            #include "include/flare_info.inc"
            type = "ArtyFlareR";
            #include "include/flare_stats.inc"
        };
        class ArtyFlareW
        {
            name = "Illumination Flare - White";
            #include "include/flare_info.inc"
            type = "ArtyFlareW";
            #include "include/flare_stats.inc"
        };
        class ArtyFlareY
        {
            name = "Illumination Flare - Yellow";
            #include "include/flare_info.inc"
            type = "ArtyFlareY";
            #include "include/flare_stats.inc"
        };
        class ArtyMis
        {
            name = "Artillery - Missile Salvo";
            description = "Calls in a cluster missile barrage fired at the selected location. Fires several sequential missiles.";
            icon = "a3\armor_f_gamma\mbt_01\data\ui\slammer_mlrs_base_ca.paa";
            type = "ArtyMis";
            baseCost = 5;
            airDrop = 0;
            category = 2;
        };
        class ArtyShell
        {
            name = "Artillery - Barrage";
            description = "Calls in a artillery barrage fired at the selected location. Fires several sequential shells.";
            icon = "a3\armor_f_gamma\mbt_01\data\ui\slammer_scorcher_m4_base_ca.paa";
            type = "ArtyShell";
            baseCost = 4;
            airDrop = 0;
            category = 2;
        };
        class ArtyMortar
        {
            name = "Artillery - Mortar Barrage";
            description = "Calls in a mortar barrage fired at the selected location. Fires several sequential shells.";
            icon = "\A3\Static_f\Mortar_01\data\UI\Mortar_01_ca.paa";
            type = "ArtyMortar";
            baseCost = 3;
            airDrop = 0;
            category = 2;
        };
    };
};
// "a3\ui_f\data\gui\cfg\communicationmenu\supplydrop_ca.paa"
// "a3\drones_f\air_f_gamma\uav_02\data\ui\map_uav_02_ca.paa"
