#include "..\main\MSF_Version.hpp"
#include "cfg\MSF_OFE_Categories.hpp"
#include "MSF_OFE_Functions.hpp"
#include "cfg\state\MSF_OFE_EnemyStateMachine.hpp"
#include "cfg\MSF_OFE_Config.hpp"

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
    #include "cfg\placeholder\MSF_Placeholder.hpp"
    #include "cfg\modules\MSF_OFE_Modules.hpp"
};

class CfgHints
{
	displayName = "Occupational Force Engagement";
	class OFE
	{
		class EnemyStrength
		{
			displayName = "Enemy Strength";			
			description = "Enemy strength has been reduced to %11. <br/><br/> As enemy strength is lowered bases will be less defended and easier to take, however your notoriety will rise.";
			arguments[] = {"[missionNamespace getVariable ['MSF_OFE_EnemyStr', 4]] call MSF_fnc_OFE_GetStrengthText"};
		};
	};
};