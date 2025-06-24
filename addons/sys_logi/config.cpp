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

	class Man;
	class CAManBase : Man
	{
		class ACE_SelfActions
		{
			class MSF_Logistics
			{
				displayName = "Logistics Terminal";
				icon = "\A3\Drones_F\Weapons_F_Gamma\Items\data\UI\gear_UAV_controller_rgr_CA.paa";
				condition = "[player, 'MSF_LogisticsTerminal', false] call BIS_fnc_hasItem";
				exceptions[] = {};

				class MSF_LogisticsMenu
				{
					displayName = "Logistics Management";
					exceptions[] = {};
					icon = MSF_ICON;
					condition = "[player, 'Engineer'] call MSF_fnc_CheckPlayerTrait";
					statement = "[] call MSF_UI_fnc_DisplayLogiMain";
				};
				class MSF_LogisticsSupport
				{
					displayName = "Logistics Support Channel";
					condition = "true";
					exceptions[] = {};
					icon = "a3\ui_f\data\gui\cfg\communicationmenu\supplydrop_ca.paa";
					statement = "[] call MSF_UI_fnc_DisplayLogiSupport";
				};
				class MSF_VicLoadouts
				{
					displayName = "Vehicle Loadouts";
					exceptions[] = {};
					icon = "a3\soft_f_epc\truck_03\data\ui\truck_03_ammo_ca.paa";
					condition = "[player, 'Engineer'] call MSF_fnc_CheckPlayerTrait";
					statement = "[] call MSF_UI_fnc_DisplayVicLoadouts;";
				};
			};
		};
	};
};

class CfgWeapons
{
	#include "cfg\vehicle\MSF_LogisticsTerminal.hpp"
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
