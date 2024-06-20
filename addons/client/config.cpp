#include "..\main\MSF_Version.hpp"

class CfgPatches
{
    class MSF3den
    {
		name = "MSF Client Extensions";
		author = "Zeik_Tuvai";
		version = MSF_VERSION;
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = { "3DEN", "cba_settings", "ace_interaction" };
    };
};

class CfgUnitInsignia
{
    class tfy_insignia
    {
		displayName = "Task Force Yodel Insignia";
		author = "zeik_tuvai";
		texture = "z\msf\assons\client\patch\TFY.paa";
		textureVehicle = "";
    };
    class tfy_backup_pilot
    {
        displayName = "TFY Backup Pilot";
        author = "Samurai";
        texture = "z\msf\assons\client\patch\TFY_backup_pilot.paa";
        textureVehicle = "";
    };
};