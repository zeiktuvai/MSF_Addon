#include "..\main\cfg\MSF_Macros.hpp"
#include "cfg\MSF_Logi_Functions.hpp"

class CfgPatches
{
    class ADDON
    {
		name = "MSF - Logistics System";
		author = "Zeik_Tuvai";
		version = MSF_VERSION;
        units[] = {"MSF_Module_InvGen", "MSF_Module_UAV", "MSF_Module_UAVSpawn", "MSF_Module_UGVSpawn", "MSF_Module_Rearm", "MSF_SupplyDepot"};
        weapons[] = {};
        requiredVersion = 2.1;
        requiredAddons[] = {"3DEN", "cba_settings", "ace_interaction", "MSF3den"};
    };
};

class CfgVehicles
{
    #include "cfg\MSF_Logi_Modules.hpp"
	#include "cfg\vehicle\MSF_Supply_Depot.hpp"

	class Man;
	class CAManBase : Man
	{
		class ACE_SelfActions
		{
			class MSF_Logistics
			{
				displayName = "Logistics";
				condition = "count (localNamespace getVariable 'MSF_Local' getOrDefault ['Logi_Items', []]) > 0";
				exceptions[] = {};
				icon = "a3\ui_f\data\gui\cfg\communicationmenu\supplydrop_ca.paa";
				insertChildren = "params [""_target"", ""_player"", ""_params""]; [_target, _player, _params] call MSF_Logi_fnc_GetLogiItemsMenu;";
			};
		};
	};
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
