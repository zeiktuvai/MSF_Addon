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
      displaayName = "Task Force Yodel Insignia (MC)";
      author = "zeik_tuvai";
      texture = "z\msf\addons\client\patch\unit_mc.paa";
      textureVehicle = "";
    };
    class tfy_insignia_trop
    {
      displayName = "Task Force Yodel Insignia (Tropic)";
      author = "zeik_tuvai";
      texture = "z\msf\addons\client\patch\unit_trop.paa";
      textureVehicle = "";
    };
    class tfy_insignia_arct
    {
      displayName = "Task Force Yodel Insignia (arctic)";
      author = "zeik_tuvai";
      texture = "z\msf\addons\client\patch\unit_arct.paa";
      textureVehicle = "";
    };
    class tfy_insignia_blk
    {
      displayName = "Task Force Yodel Insignia (night)";
      author = "zeik_tuvai";
      texture = "z\msf\addons\client\patch\unit_blk.paa";
      textureVehicle = "";
    };
    class tfy_insignia_train
    {
      scope = 1;
      displayName = "TFY Trainee";
      author = "zeik_tuvai";
      texture = "z\msf\addons\client\patch\unit_train.paa";
      textureVehicle = "";
    };
    class tfy_backup_pilot
    {
      displayName = "TFY Backup Pilot";
      author = "Samurai";
      texture = "z\msf\addons\client\patch\TFY_backup_pilot.paa";
      textureVehicle = "";
    };
    class tfy_qual_armor_1
    {
      scope = 1;
      displayName = "Armor Qualification - Rank 1";
      author = "zeik_tuvai";
      texture = "z\msf\addons\client\qual\armor_rank1.paa";
      textureVehicle = "";
    };
    class tfy_qual_armor_2
    {
      scope = 1;
      displayName = "Armor Qualification - Rank 2";
      author = "zeik_tuvai";
      texture = "z\msf\addons\client\qual\armor_rank2.paa";
      textureVehicle = "";
    };
    class tfy_qual_armor_3
    {
      scope = 1;
      displayName = "Armor Qualification - Rank 3";
      author = "zeik_tuvai";
      texture = "z\msf\addons\client\qual\armor_rank3.paa";
      textureVehicle = "";
    };
};