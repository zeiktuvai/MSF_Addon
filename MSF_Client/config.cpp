class CfgPatches
{
    class MSF3den
    {
		name = "MSF Client Extensions"
		author = "Zeik_Tuvai";
		version = 1.1;
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {3DEN, "cba_settings", "ace_interaction"};
    };
};

class CfgUnitInsignia
{
    class tfy_insignia
    {
		displayName = "Task Force Yodel Insignia";
		author = "zeik_tuvai";
		texture = "\msf_client\patch\TFY.paa";
		textureVehicle = "";
    };
    class tfy_backup_pilot
    {
        displayName = "TFY Backup Pilot";
        author = "Samurai";
        texture = "\msf_client\patch\TFY_backup_pilot.paa";
        textureVehicle = "";
    }
};