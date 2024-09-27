#include "MSF_Roles.hpp"
#include "MSF_Faction.hpp"
#include "MSF_Categories.hpp"

class CfgPatches
{
    class MSF_Units
    {
		name = "MSF Units";
		author = "Zeik_Tuvai";
		version = "v0.0.0";
        units[] = {
            "MSF_Crewman", "MSF_Engineer", "MSF_Grenadier", "MSF_Gunner", "MSF_Leader", "MSF_Marksman", "MSF_Medic",
            "MSF_Mine", "MSF_ATRifleman", "MSF_AARifleman", "MSF_Pilot", "MSF_Repair", "MSF_Rifleman", "MSF_Sniper",
            "MSF_UAV", "MSF_RTO", "MSF_Crewman_T", "MSF_Engineer_T", "MSF_Grenadier_T", "MSF_Gunner_T", "MSF_Leader_T", 
            "MSF_Marksman_T", "MSF_Medic_T", "MSF_ATRifleman_T", "MSF_AARifleman_T", "MSF_Repair_T", "MSF_Rifleman_T", 
            "MSF_Sniper_T", "MSF_UAV_T", "MSF_RTO_T", "MSF_Engineer_N", "MSF_Grenadier_N", "MSF_Gunner_N", "MSF_Leader_N", 
            "MSF_Marksman_N", "MSF_Medic_N", "MSF_ATRifleman_N", "MSF_AARifleman_N", "MSF_Repair_N", "MSF_Rifleman_N", 
            "MSF_UAV_N", "MSF_RTO_N", "MSF_SF_Diver_Exp", "MSF_SF_Diver", "MSF_mc_BaseBackpack", "MSF_mc_MarksmanBackpack",
            "MSF_mc_PMAGBackpack", "MSF_mc_PMAGSupplyBackpack", "MSF_mc_SniperBackpack", "MSF_mc_ATBackpack", 
            "MSF_mc_AABackpack", "MSF_mc_MedicBackpack", "MSF_mc_EngBackpack", "MSF_mc_MineBackpack",
            "MSF_Crewman_W", "MSF_Engineer_W", "MSF_Grenadier_W", "MSF_Gunner_W", "MSF_Leader_W", "MSF_Marksman_W", "MSF_Medic_W", 
            "MSF_Mine_W", "MSF_ATRifleman_W", "MSF_AARifleman_W", "MSF_Pilot_W", "MSF_Repair_W", "MSF_Rifleman_W", "MSF_Sniper_W", 
            "MSF_UAV_W", "MSF_w_BaseBackpack", "MSF_w_PMAGBackpack", "MSF_w_PMAGSupplyBackpack", "MSF_w_SniperBackpack",
            "MSF_w_ATBackpack", "MSF_w_AABackpack", "MSF_w_SAWBackpack", "MSF_w_MedicBackpack", "MSF_w_EngBackpack", "MSF_w_MineBackpack",
            "MSF_O_ARC_Rifleman", "MSF_O_ARC_Marksman", "MSF_O_ARC_Grenadier", "MSF_O_ARC_Autorifleman", "MSF_O_ARC_Medic",
            "MSF_O_ARC_Backpack", "MSF_O_ARC_MedicBackpack", "MSF_O_ARC_DAGOR_Green"
        };
        weapons[] = {};
        requiredVersion = 2.0;
        requiredAddons[] = { "MSF3den", "NATO_Winter_Units", "rhsusf_c_troops", "rhsusf_sounds", "rhsusf_c_weapons" };
    };
};

class CfgVehicles {
    #include "vehicles\MSF_Units_BLUFOR.hpp"
    #include "vehicles\MSF_Units_OPFOR.hpp"
};

class CfgWeapons
{
    class ItemCore;
    #include "MSF_Weapons.hpp"
    #include "MSF_Equipment.hpp"
};

class UniformSlotInfo 
{ 
    slotType = 0; 
    linkProxy = "-"; 
}; 
