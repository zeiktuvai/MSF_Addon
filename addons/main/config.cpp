#include "cfg\MSF_Macros.hpp"
#include "cfg\eden\MSF_Editor_Menu.hpp"
#include "cfg\MSF_Config.hpp"
#include "cfg\MSF_Categories.hpp"
#include "cfg\MSF_Factions.hpp"
#include "cfg\MSF_MPGameTypes.hpp"
#include "cfg\MSF_Patch.hpp"

class CfgPatches
{
    class MSF3den
    {
		name = "Mission Support Foundation";
		author = "Zeik_Tuvai";
		version = MSF_VERSION;
        units[] = {"MSF_Module_BldgDestroy", "MSF_Module_RandomSpawn", "MSF_Module_RandomSpawnCrash", "MSF_Module_Spawn_InfantryPatrol",
			"MSF_Module_Spawn_Supplies", "MSF_Module_Spawn_Fortify", "MSF_Module_Spawn_VehiclePatrol", "MSF_Module_Spawn_Wave",
			"MSF_Module_Spawn_DeadUnit", "MSF_Module_ClassOverride", "MSF_Module_Spawn_RoadCheckpoint", "MSF_Module_DeleteUnit"};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"3DEN", "cba_settings", "ace_interaction"};
    };
};

class Cfg3DEN
{
	class Mission
	{
		#include "cfg\mission\MSF_Mission_Attributes.hpp"
	};
};

class CfgVehicles
{
	#include "cfg\MSF_Modules.hpp"
	#include "cfg\placeholder\MSF_Placeholder.hpp"
};

class Extended_PreInit_EventHandlers
{
    class ADDON
    {
        init = "call compile preprocessFileLineNumbers 'z\msf\addons\main\settings\MSF_Server.sqf'; call compile preprocessFileLineNumbers 'z\msf\addons\main\settings\MSF_User.sqf'";
    };
};

//Temp Triggers for compatibility
class CfgNonAIVehicles
{
	class EmptyDetector;
	class MSFTriggeFortify : EmptyDetector
	{
		scope = 0;
	};
	class MSFTrigger : EmptyDetector
	{
		scope = 0;
	};
	class MSFTriggerSupply : EmptyDetector
	{
		scope = 0;
	};
	class MSFTriggerWave : EmptyDetector
	{
		scope = 0;
	};
};

class CfgHints
{
	displayName = "MSF Messages";
	class MSF
	{
		class General
		{
			displayName = "%11";
			image = MSF_ICON;
			description = "%1 %12";			
			arguments[] = {"player getVariable ['MSF_NotificationText', ['General Message']] select 0", "player getVariable ['MSF_NotificationText', ['General Text']] select 1"};
		};


		class EndScenario
		{
			displayName = "Mission Completed";
			image = MSF_ICON;            
			description = "Primary mission objectives have been completed, use the %11 option in your %12 to end the mission when you are ready.";			
			arguments[] = {{"End Mission"}, {"ACE Self Menu"}};
		};
	};
};

class CfgHQIdentities
{
	class MSF_Logi
	{
		name = "Logistics Command";
		pitch = 1;
		speaker = "Male03EN";
	};
};
