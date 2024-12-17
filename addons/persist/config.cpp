#include "..\main\MSF_Version.hpp"

class CfgPatches
{
    class MSF3den
    {
		name = "MSF - Persistence";
		author = "Zeik_Tuvai";
		version = MSF_VERSION;
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.1;
        requiredAddons[] = {"3DEN", "cba_settings", "ace_interaction"};
        is3DENmod = 1;
    };
};

#include "cfg\MSF_Persist_Functions.hpp"

class Cfg3DEN
{
	class Object
	{
		class AttributeCategories
		{
			#include "cfg\MSF_Persist_Obj_attr.hpp"
		};
	};
	class Mission
	{
		#include "cfg\MSF_Persist_Mission_Attr.hpp"
	};
};