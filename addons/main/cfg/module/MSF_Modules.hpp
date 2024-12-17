class CfgVehicles
{
	class Logic;
	class Module_F : Logic
	{
		class AttributesBase
		{
			class Default;
			class Checkbox;
			class ModuleDescription;
			class Units;
		};

		class ModuleDescription
		{
			class AnyBrain;
		};
	};

	
	#include "MSF_Mod_BuildingDestroy.hpp"
	// #include "MSF_Mod_InfantryPatrol.hpp"
	// #include "MSF_Mod_Intel.hpp"
	// #include "MSF_Mod_IntelItem.hpp"
	#include "MSF_Mod_RandomSpawn.hpp"
	#include "MSF_Mod_RandomSpawnCrash.hpp"
};

class CfgFactionClasses
{
	class NO_CATEGORY;
	class MSF_Module : NO_CATEGORY
	{
		displayName = "MSF Modules";
	};
	class MSF_Module_OFE : NO_CATEGORY
	{
		displayName = "MSF - Occupational Force Engagement";
	};
};
