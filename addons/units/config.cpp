#include "..\main\MSF_Version.hpp"
#include "MSF_Functions.hpp"
#include "MSF_Roles.hpp"
#include "MSF_Faction.hpp"
#include "MSF_Categories.hpp"

class CfgPatches
{
    class MSF3den
    {
		name = "MSF Units";
		author = "Zeik_Tuvai";
		version = MSF_VERSION;
        units[] = {
            "MSF_Crewman", "MSF_Engineer", "MSF_Grenadier", "MSF_Gunner", "MSF_Leader", "MSF_Marksman", "MSF_Medic",
            "MSF_Mine", "MSF_ATRifleman", "MSF_AARifleman", "MSF_Pilot", "MSF_Repair", "MSF_Rifleman", "MSF_Sniper",
            "MSF_UAV", "MSF_Crewman_T", "MSF_Engineer_T", "MSF_Grenadier_T", "MSF_Gunner_T", "MSF_Leader_T", 
            "MSF_Marksman_T", "MSF_Medic_T", "MSF_ATRifleman_T", "MSF_AARifleman_T", "MSF_Repair_T", "MSF_Rifleman_T", 
            "MSF_Sniper_T", "MSF_UAV_T", "MSF_Engineer_N", "MSF_Grenadier_N", "MSF_Gunner_N", "MSF_Leader_N", 
            "MSF_Marksman_N", "MSF_Medic_N", "MSF_ATRifleman_N", "MSF_AARifleman_N", "MSF_Repair_N", "MSF_Rifleman_N", 
            "MSF_UAV_N"
        };
        weapons[] = {};
        requiredVersion = 2.0;
        requiredAddons[] = { "3DEN", "cba_settings", "ace_interaction", "NATO_Winter_Units", "rhsusf_c_troops", 
        "rhsusf_sounds", "rhsusf_c_weapons" };
    };
};

class CfgWeapons {
    #include "weapons\MSF_rhs_m14ebr.hpp"
    #include "weapons\MSF_rhs_hk416_m320.hpp"
    #include "weapons\MSF_rhs_m249.hpp"
    #include "weapons\MSF_rhs_hk416d.hpp"
    #include "weapons\MSF_rhs_hk416d10.hpp"
    #include "weapons\MSF_rhs_M107.hpp"
};
class CfgVehicles {
    #include "vehicles\MSF_Soldier_Base.hpp"
    #include "vehicles\MSF_Sniper_Base.hpp"
    #include "vehicles\MSF_Units.hpp"
};
