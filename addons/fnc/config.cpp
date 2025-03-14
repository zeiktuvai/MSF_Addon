#include "..\main\cfg\MSF_Macros.hpp"

class CfgPatches
{
    class ADDON
    {
		name = "MSF - Functions";
		author = "Zeik_Tuvai";
		version = MSF_VERSION;
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.1;
        requiredAddons[] = {"3DEN", "cba_settings", "ace_interaction"};        
    };
};

#include "MSF_Functions.hpp"