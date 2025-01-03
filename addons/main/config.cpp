#include "MSF_Version.hpp"
#include "cfg\eden\MSF_Editor_Menu.hpp"
#include "cfg\mission\MSF_Config.hpp"
#include "cfg\module\MSF_Modules.hpp"

class CfgPatches
{
    class MSF3den
    {
		name = "Mission Support Foundation";
		author = "Zeik_Tuvai";
		version = MSF_VERSION;
        units[] = {"MSF_Module_BldgDestroy", "MSF_Module_RandomSpawn", "MSF_Module_RandomSpawnCrash"};
		//"MSF_Module_InfantryPatrol"};
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

class Extended_PreInit_EventHandlers
{
    class ADDON
    {
        init = "call compile preprocessFileLineNumbers 'z\msf\addons\main\XEH_preInit.sqf'";
    };
};

class CfgNonAIVehicles
{
	class EmptyDetector;
	#include "cfg\trigger\MSF_Attr_FortifyTrigger.hpp"
	#include "cfg\trigger\MSF_Attr_WaveTrigger.hpp"
};