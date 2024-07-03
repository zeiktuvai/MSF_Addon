#include "..\main\MSF_Version.hpp"
#include "MSF_Functions.hpp"

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
        requiredAddons[] = { "3DEN", "cba_settings", "ace_interaction", "NATO_Winter_Units" };
    };
};

class CfgFactionClasses {
    class BLU_F_MSF {
        displayName = "NATO (MSF)";
        flag = "\a3\Data_f\Flags\flag_nato_co.paa";
        icon = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
        priority = 3;
        side = 1;
    };
};

class CfgEditorSubcategories
{
    class MSF_EdSubcat_Inf_Trop {
        displayname = "Infantry (Tropic)";
    };
    class MSF_EdSubcat_Inf_Night {
        displayname = "Infantry (Night)";
    };
};

class CfgRoles
{
    class MSFCommand
    {
        displayName = "Leader";
        icon = "a3\ui_f\data\igui\rscingameui\rscunitinfo\role_commander_ca.paa";
    };
    class MSFAssault
    {
        displayName = "Assault";
        icon = "a3\ui_f\data\gui\cfg\respawnroles\assault_ca.paa";
    };
    class MSFRecon
    {
        displayName = "Recon";
        icon = "a3\ui_f\data\gui\cfg\respawnroles\recon_ca.paa";
    };
    class MSFSupport
    {
        displayName = "Support";
        icon = "a3\ui_f\data\gui\cfg\respawnroles\support_ca.paa";
    };
    class MSFHeavy
    {
        displayName = "Heavy";
        icon = "a3\ui_f\data\igui\rscingameui\rscunitinfo\role_gunner_ca.paa";
    };
    class MSFCrew
    {
        displayName = "Vehicle Crew";
        icon = "a3\ui_f\data\igui\rscingameui\rscunitinfo\role_driver_ca.paa";
    };
    class MSFPilot
    {
        displayName = "Flight Crew";
        icon = "a3\modules_f_curator\data\portraitcas_ca.paa";
    };
    class MSFSpecial
    {
        displayName = "Special Forces";
        icon = "a3\ui_f\data\gui\cfg\respawnroles\recon_ca.paa";
    };
};

class CfgWeapons {
    #include "weapons\MSF_rhs_m14ebr.hpp"
    #include "weapons\MSF_rhs_hk416_m320.hpp"
    #include "weapons\MSF_rhs_m249.hpp"
    #include "weapons\MSF_rhs_hk416d.hpp"
};
class CfgVehicles {
    #include "vehicles\MSF_Soldier_Base.hpp"
    #include "vehicles\MSF_Units.hpp"
};
