#include "..\main\cfg\MSF_Macros.hpp"
#include "cfg\MSF_Exfil_Functions.hpp"

class CfgPatches
{
    class ADDON
    {
		name = "MSF - Exfil Game Mode";
		author = "Zeik_Tuvai";
		version = MSF_VERSION;
        units[] = {"MSF_Module_TrackingCenter", "MSF_Module_TrackingArty"};
        weapons[] = {};
        requiredVersion = 2.1;
        requiredAddons[] = {"3DEN", "cba_settings", "ace_interaction"};
    };
};

class CfgVehicles
{
    #include "cfg\MSF_Exfil_Modules.hpp"
};
