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
        units[] = {};
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
