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

class MSF_Module_Intel : Module_F {};

#include "module\MSF_Mod_IntelItem.hpp"
#include "module\MSF_Mod_IntelItemTask.hpp"
#include "module\MSF_Mod_IntelObjects.hpp"
#include "module\MSF_Mod_SetIntelLevel.hpp"
