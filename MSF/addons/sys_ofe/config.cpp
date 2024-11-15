#include "..\main\MSF_Version.hpp"

class CfgPatches
{
    class MSF3den
    {
		name = "MSF - Occupational Force Engagement System";
		author = "Zeik_Tuvai";
		version = MSF_VERSION;
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.1;
        requiredAddons[] = {"3DEN", "cba_settings", "ace_interaction"};
    };
};

#include "MSF_OFE_Functions.hpp"
#include "cfg\state\MSF_OFE_StateMachine.hpp"
#include "cfg\modules\MSF_OFE_Modules.hpp"