#include "..\main\MSF_Version.hpp"

class CfgPatches
{
    class MSF3den
    {
		name = "MSF - Escape System";
		author = "Zeik_Tuvai";
		version = MSF_VERSION;
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.1;
        requiredAddons[] = {"3DEN", "cba_settings", "ace_interaction"};
    };
};

#include "MSF_Esc_Functions.hpp"
#include "MSF_Esc_StateMachine.hpp"
