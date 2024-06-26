#include "MSF_Version.hpp"

class CfgPatches
{
    class MSF3den
    {
		name = "Mission Support Foundation";
		author = "Zeik_Tuvai";
		version = MSF_VERSION;
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"3DEN", "cba_settings", "ace_interaction"};
    };
};

// include "MSF_Functions.hpp"

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
		#include "cfg\mission\MSF_Mission_Properties.hpp"
	};
	class Attributes
	{
		#include "cfg\mission\MSF_Controls.hpp"
	};
};

#include "cfg\eden\MSF_Editor_Menu.hpp"

class Extended_PreInit_EventHandlers
{
    class ADDON
    {
        init = "call compile preprocessFileLineNumbers 'z\msf\addons\main\XEH_preInit.sqf'";
    };
};

#include "cfg\mission\MSF_Config.hpp"
#include "cfg\object\MSF_Attr_Trigger.hpp"

//not working....
// class Extended_InitPost_EventHandlers {
// 	class CAManBase {        
// 		init = "[] call MSF_fnc_test;";        
//     };
// };

