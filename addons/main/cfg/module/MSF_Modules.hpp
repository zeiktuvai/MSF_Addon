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
	#include "spawn\MSF_Mod_InfantryPatrol.hpp"
	#include "spawn\MSF_Mod_VehiclePatrol.hpp"
	#include "spawn\MSF_Mod_Supply.hpp"
	#include "spawn\MSF_Mod_Fortify.hpp"
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
