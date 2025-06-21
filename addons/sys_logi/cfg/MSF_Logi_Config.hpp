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
    class AirDrop
    {
        class Vehicles
        {
            class Medical
            {
                name = "Vehicle Air-Drop: Ambulance";
                description = "Allows you to call in an Ambulance Air-drop.";
                icon = "a3\soft_f_epc\truck_03\data\ui\truck_03_medevac_ca.paa";
                type = "V_Medical";
                baseCost = 3;
            };
            class Supply
            {
                name = "Vehicle Air-Drop: Supply Truck";
                description = "Allows you to call in an Supply Truck Air-drop. (Can rearm players, rearm vehicles, and acts as a mini supply depot).";
                icon = "a3\soft_f_epc\truck_03\data\ui\truck_03_ammo_ca.paa";
                type = "V_Supply";
                baseCost = 5;
            };
        };
    };
};



