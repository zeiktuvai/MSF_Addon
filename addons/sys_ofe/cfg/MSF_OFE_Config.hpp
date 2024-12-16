class MSF_OFE_Config
{
    class Cargo
    {
        SupplyBoxes[] = {"Box_FIA_Ammo_F", "Box_FIA_Support_F", "Box_FIA_Wps_F"};
        VicAmmoBoxes[] = {"Box_NATO_AmmoVeh_F", "Box_EAF_AmmoVeh_F", "Box_East_AmmoVeh_F", "Box_IND_AmmoVeh_F"};
    };
    class Units
    {
        class Empty
        {
            UnmannedVic[] = {
                "B_MRAP_01_F", "B_MRAP_01_gmg_F", "B_MRAP_01_hmg_F", "B_LSV_01_unarmed_F", "B_LSV_01_AT_F", "B_LSV_01_armed_F", "B_Quadbike_01_F", "B_Truck_01_covered_F",
                "I_MRAP_03_F", "I_MRAP_03_gmg_F", "I_MRAP_03_hmg_F", "I_Truck_02_covered_F","O_MRAP_02_F", "O_MRAP_02_gmg_F", "O_MRAP_02_hmg_F", "rhs_tigr_msv", "rhs_tigr_3camo_msv", 
                "rhs_tigr_sts_msv", "rhs_tigr_sts_3camo_msv"
            };
            UnmannedArmor[] = {
                "rhs_btr80a_msv", "rhs_btr80_msv", "rhs_btr70_msv", "I_APC_tracked_03_cannon_F", "I_APC_Wheeled_03_cannon_F", "I_MBT_03_cannon_F", "rhs_t90sm_tv", "rhs_t80um", 
                "B_MBT_01_TUSK_F", "B_MBT_01_cannon_F", "O_MBT_04_command_F", "O_MBT_02_cannon_F", "B_MBT_01_arty_F", "O_MBT_02_arty_F", "rhs_2s1_tv", "I_Truck_02_MRL_F"
            };
            UnmannedStatic[] = {
                "B_HMG_01_A_F", "B_GMG_01_F", "B_static_AA_F", "rhs_SPG9M_MSV", "RHS_ZU23_MSV", "I_Mortar_01_F"
            };
            UnmannedHeli[] = {
                "B_Heli_Transport_03_unarmed_F", "B_Heli_Light_01_F", "B_Heli_Transport_01_F", "O_Heli_Transport_04_covered_F", "O_Heli_Light_02_unarmed_F", "I_Heli_Transport_02_F",
                "I_Heli_light_03_unarmed_F"
            };
            UnmannedPlane[] = {
                "B_Plane_CAS_01_dynamicLoadout_F", "B_Plane_Fighter_01_F", "O_Plane_CAS_02_dynamicLoadout_F", "O_Plane_Fighter_02_F", "I_Plane_Fighter_04_F", "I_Plane_Fighter_03_dynamicLoadout_F"
            };
            FuelTruck[] = {
                "B_Truck_01_fuel_F", "O_Truck_02_fuel_F", "I_Truck_02_fuel_F"
            };
            AmmoTruck [] = {
                "B_Truck_01_ammo_F", "O_Truck_02_Ammo_F", "I_Truck_02_ammo_F"
            };
        };
        class OPFOR
        {
            Air[] = {};
            Infantry[] = {};
        };

    };
};