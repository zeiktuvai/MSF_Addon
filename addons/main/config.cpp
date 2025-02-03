#include "MSF_Version.hpp"
#include "cfg\eden\MSF_Editor_Menu.hpp"
#include "cfg\MSF_Config.hpp"
#include "cfg\MSF_Categories.hpp"
#include "cfg\MSF_Factions.hpp"
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
			"MSF_Module_Spawn_DeadUnit", "MSF_Module_ClassOverride", "MSF_Module_Spawn_RoadCheckpoint"};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"3DEN", "cba_settings", "ace_interaction"};
    };
};

class Cfg3DEN
{
	class Object
	{
		class AttributeCategories
		{
			#include "cfg\object\MSF_Attr_Player.hpp"
			#include "cfg\object\MSF_Attr_General.hpp"
			#include "cfg\object\MSF_Attr_IGS.hpp"
		};
	};
	class Mission
	{
		#include "cfg\mission\MSF_Mission_Attributes.hpp"
	};
	class Attributes
	{
		#include "cfg\mission\MSF_Controls.hpp"
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
        init = "call compile preprocessFileLineNumbers 'z\msf\addons\main\XEH_preInit.sqf'";
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