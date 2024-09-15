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
      displayName = "Task Force Yodel Insignia (MC)";
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
    class TFY_Armor_Rank1
    {
      scope = 1;
      displayName = "Basic Armor Crewman ";
      author = "zeik_tuvai";
      texture = "z\msf\addons\client\qual\armor_rank1.paa";
      textureVehicle = "";
    };
    class TFY_Armor_Rank2
    {
      scope = 1;
      displayName = "Armor Sergeant";
      author = "zeik_tuvai";
      texture = "z\msf\addons\client\qual\armor_rank2.paa";
      textureVehicle = "";
    };
    class TFY_Armor_Rank3
    {
      scope = 1;
      displayName = "Combined Arms Tank Commander";
      author = "zeik_tuvai";
      texture = "z\msf\addons\client\qual\armor_rank3.paa";
      textureVehicle = "";
    };
    class TFY_CQB_Rank1
    {
      scope = 1;
      displayName = "Basic CQB";
      author = "zeik_tuvai";
      texture = "z\msf\addons\client\qual\cqb_rank1.paa";
      textureVehicle = "";
    };
    class TFY_Signal_Rank1
    {
      scope = 1;
      displayName = "Basic Radio Operator (TFAR) ";
      author = "zeik_tuvai";
      texture = "z\msf\addons\client\qual\signal_rank1.paa";
      textureVehicle = "";
    };
    class TFY_Signal_Rank2
    {
      scope = 1;
      displayName = "Radio Net Operator (TFAR)";
      author = "zeik_tuvai";
      texture = "z\msf\addons\client\qual\signal_rank2.paa";
      textureVehicle = "";
    };
    class TFY_Signal_Rank3
    {
      scope = 1;
      displayName = "Combined Arms Comms Coordinator (TFAR)";
      author = "zeik_tuvai";
      texture = "z\msf\addons\client\qual\signal_rank3.paa";
      textureVehicle = "";
    };
    class TFY_Medical_Rank1
    {
      scope = 1;
      displayName = "Basic First Aid";
      author = "zeik_tuvai";
      texture = "z\msf\addons\client\qual\medical_rank1.paa";
      textureVehicle = "";
    };
    class TFY_Medical_Rank2
    {
      scope = 1;
      displayName = "Combat Medic";
      author = "zeik_tuvai";
      texture = "z\msf\addons\client\qual\medical_rank2.paa";
      textureVehicle = "";
    };
    class TFY_Aviator
    {      
      displayName = "Aviator";
      author = "zeik_tuvai";
      texture = "z\msf\addons\client\qual\aviator.paa";
      textureVehicle = "";
    };
};

    // class TFY_Medical_Rank3
    // {
    //   scope = 1;
    //   displayName = "Medical Spec - Rank 3";
    //   author = "zeik_tuvai";
    //   texture = "z\msf\addons\client\qual\medical_rank3.paa";
    //   textureVehicle = "";
    // };
    // class TFY_Medical_Rank
    // {
    //   scope = 1;
    //   displayName = "Basic First Aid";
    //   author = "zeik_tuvai";
    //   texture = "z\msf\addons\client\qual\medical_rank1.paa";
    //   textureVehicle = "";
    // };
    // class TFY_Drone_Rank3
    // {
    //   scope = 1;
    //   displayName = "Drone Spec - Rank 3";
    //   author = "zeik_tuvai";
    //   texture = "z\msf\addons\client\qual\drone_rank3.paa";
    //   textureVehicle = "";
    // };
