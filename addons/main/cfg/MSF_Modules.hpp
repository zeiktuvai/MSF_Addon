class Logic;
class Module_F : Logic
{
	class AttributesBase
	{
		//class Default;
		class Checkbox;
		class ModuleDescription;
		class Units;
	};

	class ModuleDescription
	{
		//class AnyBrain;
	};
};

#include "module\config\MSF_Mod_Classes.hpp"
#include "module\config\MSF_Mod_SpawnUnits.hpp"
#include "module\object\MSF_Mod_BuildingDestroy.hpp"
#include "module\object\MSF_Mod_DeleteUnit.hpp"
#include "module\object\MSF_Mod_Dialog.hpp"
#include "module\object\MSF_Mod_ProgressBarInteract.hpp"
#include "module\object\MSF_Mod_ShowHide.hpp"
#include "module\spawn\MSF_Mod_Checkpoint.hpp"
#include "module\spawn\MSF_Mod_DeadUnit.hpp"
#include "module\spawn\MSF_Mod_InfantryPatrol.hpp"
#include "module\spawn\MSF_Mod_VehiclePatrol.hpp"
#include "module\spawn\MSF_Mod_Supply.hpp"
#include "module\spawn\MSF_Mod_Fortify.hpp"
#include "module\spawn\MSF_Mod_Wave.hpp"
#include "module\mission\MSF_Mod_EscapeArea.hpp"
#include "module\mission\MSF_Mod_Fuel.hpp"
#include "module\mission\MSF_Mod_GM.hpp"
#include "module\mission\MSF_Mod_RandomSpawn.hpp"
#include "module\mission\MSF_Mod_RandomSpawnCrash.hpp"
#include "module\mission\MSF_Mod_ScenarioEnd.hpp"
