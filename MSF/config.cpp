class CfgPatches
{
    class MSF3den
    {
		name = "Mission Support Foundation"
		author = "Zeik_Tuvai";
		version = 0.2;
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {3DEN, "cba_main", "ace_main"};
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
			#include "MSF_Attributes_Persist.hpp"			
			#include "MSF_Attributes_Base.hpp"		
		};
	};
	class Mission
	{
		#include "MSF_Mission_Attributes.hpp"
	};
};

#include "MSF_Editor_Menu.hpp"

class Extended_PreInit_EventHandlers
{
    class ADDON
    {
        init = "call compile preprocessFileLineNumbers 'msf\XEH_preInit.sqf'";
    };
};