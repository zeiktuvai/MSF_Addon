#include "..\main\MSF_Version.hpp"
#include "cfg\MSF_OFE_Categories.hpp"
#include "MSF_OFE_Functions.hpp"
#include "cfg\state\MSF_OFE_EnemyStateMachine.hpp"

class CfgPatches
{
    class MSF3den
    {
		name = "MSF - Occupational Force Engagement System";
		author = "Zeik_Tuvai";
		version = MSF_VERSION;
        units[] = {"MSF_Module_OFE", "MSF_Mod_OFE_Checkpoint"};
        weapons[] = {};
        requiredVersion = 2.1;
        requiredAddons[] = {"3DEN", "cba_settings", "ace_interaction"};
    };
};

class CfgVehicles
{
    class Land_HelipadEmpty_F;
    #include "cfg\placeholder\MSF_Placeholder_Infantry.hpp"
    #include "cfg\modules\MSF_OFE_Modules.hpp"
};
