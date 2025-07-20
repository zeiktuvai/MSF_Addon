#include "..\main\cfg\MSF_Macros.hpp"

class CfgPatches
{
    class ADDON
    {
      name = "MSF - Data";
      author = "Zeik_Tuvai";
      version = MSF_VERSION;
      units[] = {};
      weapons[] = {};
      requiredVersion = 1.0;
      requiredAddons[] = { "MSF3den" };
    };
};

class CfgUnitInsignia
{
	#include "cfg\MSF_Insignia.hpp"
  #include "cfg\MSF_Qual.hpp"
};
