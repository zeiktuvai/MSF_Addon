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

#include "module\spawn\MSF_Mod_Checkpoint.hpp"
#include "module\spawn\MSF_Mod_DeadUnit.hpp"
#include "module\spawn\MSF_Mod_InfantryPatrol.hpp"
#include "module\spawn\MSF_Mod_VehiclePatrol.hpp"
#include "module\spawn\MSF_Mod_Supply.hpp"
#include "module\spawn\MSF_Mod_Fortify.hpp"
#include "module\spawn\MSF_Mod_Wave.hpp"
#include "module\MSF_Mod_BuildingDestroy.hpp"
#include "module\MSF_Mod_Classes.hpp"
#include "module\MSF_Mod_DeleteUnit.hpp"
#include "module\MSF_Mod_RandomSpawn.hpp"
#include "module\MSF_Mod_RandomSpawnCrash.hpp"
#include "module\MSF_Mod_ShowHide.hpp"