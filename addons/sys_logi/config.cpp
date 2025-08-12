#include "..\main\cfg\MSF_Macros.hpp"
#include "cfg\MSF_Logi_Functions.hpp"
#include "cfg\MSF_Logi_Config.hpp"

class CfgPatches
{
    class ADDON
    {
		name = "MSF - Logistics System";
		author = "Zeik_Tuvai";
		version = MSF_VERSION;
        units[] = {"MSF_Module_InvGen", "MSF_Module_UAV", "MSF_Module_UAVSpawn", "MSF_Module_UGVSpawn", "MSF_Module_Rearm", "MSF_SupplyDepot",
			"MSF_VehicleTerminal", "MSF_Module_SupplyTruck"};
        weapons[] = {};
        requiredVersion = 2.1;
        requiredAddons[] = {"3DEN", "cba_settings", "ace_interaction", "MSF3den"};
    };
};

class CfgVehicles
{
    #include "cfg\MSF_Logi_Modules.hpp"
	#include "cfg\vehicle\MSF_Supply_Depot.hpp"
	#include "cfg\vehicle\MSF_VicTerminal.hpp"
	#include "cfg\vehicle\Logi_Extensions.hpp"	
};

class CfgWeapons
{
	#include "cfg\weapons\MSF_LogisticsTerminal.hpp"
};

class CfgHints
{
	displayName = "MSF - Drone System";
	class MSFDrone
	{
		class DroneDeployed
		{
			displayName = "Drone Deployed";
            image = "\A3\Drones_F\Air_F_Gamma\UAV_02\Data\UI\Map_UAV_02_CA.paa";
			description = "A new %11 has been deployed.";
			tip = "Check your UAV terminal for the connected drone. This drone has been removed from the inventory.";
			arguments[] = {{"Drone"}};
		};
	};
};

class CfgSounds
{
	sounds[] = {};
	class MSF_DistantMortar1
	{
		name = "Distant mortar fire";
		sound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\Mortar82mm_distShot_01.wss", 0.3, 1};
		titles[] = {0,""};
	};
	class MSF_DistantMortar2
	{
		name = "Distant mortar fire";
		sound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\Mortar82mm_distShot_02.wss", 0.3, 1};
		titles[] = {0,""};
	};
	class MSF_DistantMortar3
	{
		name = "Distant mortar fire";
		sound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\Mortar82mm_distShot_03.wss", 0.3, 1};
		titles[] = {0,""};
	};
	class MSF_DistantHowitzer
	{
		name = "Distant howitzer fire";
		sound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\CannonHeavy_distShot.wss", 0.3, 1};
		titles[] = {0,""};
	};
};
