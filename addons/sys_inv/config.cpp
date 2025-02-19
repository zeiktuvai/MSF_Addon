#include "..\main\MSF_Version.hpp"
#include "cfg\MSF_Inv_Functions.hpp"
#include "cfg\MSF_Defines.hpp"
#include "cfg\MSF_UAV_Control.hpp"

class CfgPatches
{
    class ADDON
    {
		name = "MSF - Inventory System";
		author = "Zeik_Tuvai";
		version = MSF_VERSION;
        units[] = {"MSF_Module_InvGen", "MSF_Module_UAV"};
        weapons[] = {};
        requiredVersion = 2.1;
        requiredAddons[] = {"3DEN", "cba_settings", "ace_interaction", "MSF3den"};
    };
};

class CfgVehicles
{
    #include "cfg\MSF_Inv_Modules.hpp"
};
