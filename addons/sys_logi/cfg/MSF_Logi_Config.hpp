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
        class Ambulance
        {
            name = "Ambulance";
            description = "Calls in an Ambulance Air-drop loaded with medical supplies.";
            icon = "a3\soft_f_epc\truck_03\data\ui\truck_03_medevac_ca.paa";
            type = "V_Medical";
            baseCost = 3;
            airDrop = 1;
        };
        class SupplyDepot
        {
            name = "Supply Depot";
            description = "Calls in a Supply Depot Air-drop.";
            icon = "a3\ui_f\data\map\vehicleicons\iconobject_3x1_ca.paa";
            type = "SupplyDepot";
            baseCost = 5;
            airDrop = 1;
        };
        //supply depot
        //UAV
        //Artillery
        //Flares
        //Armored Vic
    };
};



