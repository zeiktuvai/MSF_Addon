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
                depotInfinite = "true";
                supplyTruckInfinite = "false";
                supplyTruck = "true";
            };
            class Medical
            {
                name = "Combat Medic Backpack";
                description = "Places a backpack with medical supplies in place of your current backpack.";
                icon = BP_ICON;
                type = "BP_Medical";
                depotInfinite = "true";
                supplyTruckInfinite = "false";
                supplyTruck = "true";
            };
            class Standard
            {
                name = "Standard Backpack";
                description = "Places a backpack with a standard set of items in place of your current backpack.";
                icon = BP_ICON;
                type = "BP_Std";
                depotInfinite = "true";
                supplyTruckInfinite = "false";
                supplyTruck = "true";
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
                depotInfinite = "true";
                supplyTruckInfinite = "false";
                supplyTruck = "true";
            };
            class HeavyAmmo
            {
                name = "Ordinance Crate";
                description = "Spawns a supply crate containing grenades and launcher ammo.";
                icon = "a3\ui_f\data\map\vehicleicons\iconcrateord_ca.paa";
                type = MSF_CARGO_ORD;
                depotInfinite = "true";
                supplyTruckInfinite = "false";
                supplyTruck = "true";
            };
            class Medical
            {
                name = "Medical Crate";
                description = "Spawns an ACE advanced medical crate.";
                icon = CRATE_ICON;
                type = MSF_CARGO_MED;
                depotInfinite = "true";
                supplyTruckInfinite = "false";
                supplyTruck = "true";
            };
            class Food
            {
                name = "Food Crate";
                description = "Spawns a supply crate containing ACE Rations.";
                icon = CRATE_ICON;
                type = MSF_CARGO_FOOD;
                depotInfinite = "true";
                supplyTruckInfinite = "false";
                supplyTruck = "true";
            };
        };
        class Vehicles
        {
            class Medical
            {
                name = "Vehicle Air-Drop: Ambulance";
                description = "Allows you to call in an Ambulance Air-drop.";
                icon = "a3\soft_f_epc\truck_03\data\ui\truck_03_medevac_ca.paa";
                type = "V_Medical";
                depotInfinite = "false";
                supplyTruckInfinite = "";
                supplyTruck = "false";
            };
            class Supply
            {
                name = "Vehicle Air-Drop: Supply Truck";
                description = "Allows you to call in an Supply Truck Air-drop. (Can rearm players, rearm vehicles, and acts as a mini supply depot).";
                icon = "a3\soft_f_epc\truck_03\data\ui\truck_03_ammo_ca.paa";
                type = "V_Supply";
                depotInfinite = "false";
                supplyTruckInfinite = "";
                supplyTruck = "false";
            };
        };
    };
};



