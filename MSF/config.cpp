class CfgPatches
{
    class MSF3den
    {
		name = "Mission Support Foundation"
		author = "Zeik_Tuvai";
		version = 1.2;
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {3DEN, "cba_settings", "ace_interaction"};
        is3DENmod = 1;
    };
};

#include "MSF_Functions.hpp"

class Cfg3DEN
{
	class Object
	{
		class AttributeCategories
		{
			#include "cfg\MSF_Attributes_Base.hpp"		
			#include "cfg\MSF_Attributes_Helpers.hpp"
			#include "cfg\MSF_Attributes_Persist.hpp"			
		};
	};
	class Mission
	{
		#include "cfg\MSF_Mission_Attributes.hpp"
	};
	class Attributes
	{
		#include "cfg\MSF_Controls.hpp"
	};
};

#include "cfg\MSF_Editor_Menu.hpp"

class Extended_PreInit_EventHandlers
{
    class ADDON
    {
        init = "call compile preprocessFileLineNumbers 'msf\XEH_preInit.sqf'";
    };
};

#include "cfg\MSF_Config.hpp"

//not working....
// class Extended_InitPost_EventHandlers {
// 	class CAManBase {        
// 		init = "[] call MSF_fnc_test;";        
//     };
// };