#include "..\main\cfg\MSF_Macros.hpp"
#include "cfg\UI_Controls.hpp"
#include "cfg\UI_Functions.hpp"

class CfgPatches
{
    class ADDON
    {
		name = "MSF - UI";
		author = "Zeik_Tuvai";
		version = MSF_VERSION;
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.1;
        requiredAddons[] = {"3DEN", "cba_settings", "ace_interaction", "MSF3den"};
    };
};

class RscTitles {
    #include "cfg\UI_Hud.hpp"
};
