#include "..\main\MSF_Version.hpp"

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
    #include "factions\MSF_BLUFOR.hpp"
};

class CfgEditorSubcategories
{
    class MSF_EdSubcat_Inf_Trop {
        displayname = "Infantry (Tropic)";
    };
};

class CfgWeapons {
    #include "weapons\MSF_rhs_m14ebr.hpp"
};

class CfgVehicles {
    #include "vehicles\mc\MSF_mc_Marksman.hpp"
};
