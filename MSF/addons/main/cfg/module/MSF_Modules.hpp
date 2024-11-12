class CfgFactionClasses
{
	class NO_CATEGORY;
	class MSF_Module : NO_CATEGORY
	{
		displayName = "MSF Modules";
	};
};

class CfgVehicles
{
	class Logic;
	class Module_F : Logic
	{
		class AttributesBase
		{
			class Default;
			class Checkbox;
			class Units;
			class ModuleDescription;
		};

		class ModuleDescription
		{
			class AnyBrain;
		};
	};

	#include "MSF_Mod_BuildingDestroy.hpp"
	#include "MSF_Mod_Intel.hpp"
	#include "MSF_Mod_IntelItem.hpp"
};