#include "..\main\MSF_Version.hpp"
#include "cfg\MSF_Intel_Functions.hpp"

class CfgPatches
{
    class ADDON
    {
		name = "MSF - Intel System";
		author = "Zeik_Tuvai";
		version = MSF_VERSION;
        units[] = {"MSF_Module_IntelItem", "MSF_Module_IntelItem_Task", "MSF_Module_IntelObjects", "MSF_Module_IntelLevel"};
        weapons[] = {};
        requiredVersion = 2.1;
        requiredAddons[] = {"3DEN", "cba_settings", "ace_interaction"};
    };
};

class CfgVehicles
{
    #include "cfg\MSF_Intel_Modules.hpp"
};

class CfgNotifications
{
	class MapUpdate
		{
		title = "Map Updated.";
		iconPicture = "a3\ui_f\data\gui\rsc\rscdisplayarsenal\map_ca.paa";
		iconText = "";
		description = "%1";
		color[] = {1,1,1,1};
		duration = 5;
	};
};