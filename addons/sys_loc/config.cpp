#include "..\main\cfg\MSF_Macros.hpp"

class CfgPatches
{
    class MSF3den
    {
		name = "MSF - Locations";
		author = "Zeik_Tuvai";
		version = MSF_VERSION;
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.1;
        requiredAddons[] = {"3DEN", "cba_settings", "ace_interaction"};
    };
};

class CfgVehicles
{
  // #include "cfg\MSF_OFE_Modules.hpp"
};

#include "MSF_Loc_Functions.hpp"
#include "cfg\MSF_Loc_Config.hpp"
