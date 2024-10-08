#include "MSF_Version.hpp"
#include "cfg\eden\MSF_Editor_Menu.hpp"
#include "cfg\mission\MSF_Config.hpp"

class CfgPatches
{
    class MSF3den
    {
		name = "Mission Support Foundation";
		author = "Zeik_Tuvai";
		version = MSF_VERSION;
        units[] = {"MSF_Module_BldgDestroy", "MSF_Module_InfantryPatrol"};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"3DEN", "cba_settings", "ace_interaction"};
    };
};

class CfgVehicles
{
	class Logic;
	class Module_F : Logic
	{
		class AttributesBase
		{
			class Default;
			class Checkbox;
			class ModuleDescription;
			class Units;
		};

		class ModuleDescription
		{
			class AnyBrain;
		};
	};

	#include "cfg\module\MSF_Mod_BuildingDestroy.hpp"
	#include "cfg\module\MSF_Mod_InfantryPatrol.hpp"
};

class CfgFactionClasses
{
	class NO_CATEGORY;
	class MSF_Module : NO_CATEGORY
	{
		displayName = "MSF Modules";
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
	#include "cfg\trigger\MSF_Attr_PatrolTrigger.hpp"
	#include "cfg\trigger\MSF_Attr_SupplyTrigger.hpp"
	#include "cfg\trigger\MSF_Attr_WaveTrigger.hpp"
};

//not working....
// class Extended_InitPost_EventHandlers {
// 	class CAManBase {        
// 		init = "[] call MSF_fnc_test;";        
//     };
// };