#include "..\main\MSF_Version.hpp"
//#include "cfg\MSF_Intel_Functions.hpp"

class CfgPatches
{
    class ADDON
    {
		name = "MSF - CBRN System";
		author = "Zeik_Tuvai";
		version = MSF_VERSION;
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.1;
        requiredAddons[] = {"3DEN", "cba_settings", "ace_interaction", "MSF3den"};
    };
};

class CfgVehicles
{
    //#include "cfg\MSF_Intel_Modules.hpp"
};