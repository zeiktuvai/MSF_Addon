#include "..\main\cfg\MSF_Macros.hpp"

class CfgPatches
{
    class ADDON
    {
		name = "MSF - CBRN System";
		author = "Zeik_Tuvai";
		version = MSF_VERSION;
        units[] = {"MSF_Module_Radiation_Area", "MSF_Module_Radiation_Hotspot"};
        weapons[] = {};
        requiredVersion = 2.1;
        requiredAddons[] = {"3DEN", "cba_settings", "ace_interaction", "MSF3den"};
    };
};

#include "cfg\MSF_CBRN_Functions.hpp"
#include "cfg\CBRN_Particles.hpp"
#include "cfg\ACE_Medical.hpp"

class CfgVehicles
{
    #include "cfg\MSF_CBRN_Modules.hpp"
};
