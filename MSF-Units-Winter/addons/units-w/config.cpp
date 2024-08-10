class CfgPatches
{
    class MSF3den
    {
		name = "MSF Units - Winter";
		author = "Zeik_Tuvai";
		version = "1.0.0";
        units[] = {
            "MSF_Crewman_W", "MSF_Engineer_W", "MSF_Grenadier_W", "MSF_Gunner_W", "MSF_Leader_W", "MSF_Marksman_W", "MSF_Medic_W", 
            "MSF_Mine_W", "MSF_ATRifleman_W", "MSF_AARifleman_W", "MSF_Pilot_W", "MSF_Repair_W", "MSF_Rifleman_W", "MSF_Sniper_W", 
            "MSF_UAV_W", "MSF_w_BaseBackpack", "MSF_w_PMAGBackpack", "MSF_w_PMAGSupplyBackpack", "MSF_w_SniperBackpack",
            "MSF_w_ATBackpack", "MSF_w_AABackpack", "MSF_w_SAWBackpack", "MSF_w_MedicBackpack", "MSF_w_EngBackpack", "MSF_w_MineBackpack"
        };
        weapons[] = {};
        requiredVersion = 2.0;
        requiredAddons[] = { "msf", "NATO_Winter_Units" };
    };
};

class CfgVehicles {
    #include "MSF_w_Backpack.hpp"
    #include "MSF_w_Crewman.hpp"
    #include "MSF_w_Engineer.hpp"
    #include "MSF_w_Grenadier.hpp"
    #include "MSF_w_Gunner.hpp"
    #include "MSF_w_Leader.hpp"
    #include "MSF_w_Marksman.hpp"
    #include "MSF_w_Medic.hpp"
    #include "MSF_w_Mine.hpp"
    #include "MSF_w_Missile.hpp"
    #include "MSF_w_Pilot.hpp"
    #include "MSF_w_Repair.hpp"
    #include "MSF_w_Rifleman.hpp"
    #include "MSF_w_Sniper.hpp"
    #include "MSF_w_UAV.hpp"
};

