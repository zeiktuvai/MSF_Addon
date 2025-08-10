class MSF_Module_Spawn_RoadCheckpoint : Module_F
{
	scope = 2;
	displayName = "Road Checkpoint";
	icon = "a3\modules_f_beta\data\firingdrills\checkpoint_ca.paa";
	category = "MSF_Module_Spawn";
	function = "MSF_fnc_Mod_Spawn_Checkpoint";
	functionPriority = 1;
	isGlobal = 0;
	isTriggerActivated = 0;
	isDisposable = 1;	
	is3DEN = 0;
	curatorCanAttach = 0;
	canSetArea = 0;
	canSetAreaShape = 0;
	canSetAreaHeight = 0;

	class AttributeValues
	{
		size3[] = { 0, 0, -1 };
		isRectangle = 0;
	};

	class Attributes : AttributesBase
	{
		class SpawnSide
		{
			displayName = "Enemy Spawn Side";
			tooltip = "Faction that will randomly be spawned as enemies at the location.";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
			property = "MSF_Module_Checkpoint_SpawnSide";
			defaultValue = 0;
			typeName = "Number";
			class Values
			{
				class East
				{
					name = "East";
					tooltip = "OPFOR";
					value = 0;
				};
				class Independant
				{
					name = "Independant";
					tooltip = "Independant";
					value = 2;
				};
				class West
				{
					name = "West";
					tooltip = "BLUFOR";
					value = 1;
				};
			};	
		};
		class ActivationSide
		{
			displayName = "Activation Side";
			tooltip = "Faction that will spawn these locations.";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
			property = "MSF_Module_Checkpoint_ActSide";
			defaultValue = 3;
			typeName = "Number";
			#include "..\..\eden\ActivationSide.inc"
		};
		class Integrations
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Integrations";
		};
		class IntelIntegration
		{
			displayName = "Intel System";
			tooltip = "Automatically add this module to the intel system as an intel item on mission start.";
			property = "MSF_Mod_Checkpoint_Integrate_Intel";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";					
			defaultValue = "true";
		};
		class CP_IntelProvider
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategoryDesc1";
			displayName = "Intel System Provider";
			description = "Add spawned units to the intel system (Non-Civilian Units)";
		};
		class IntelProvider
		{
			displayName = "Intel Provider";
			tooltip = "Automatically add units spawned in with this module as intel providers.";
			property = "MSF_Mod_CP_Integrate_IntelP";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";					
			defaultValue = "true";
		};
		class InteractionChance
		{
			displayName = "Prompt Chance";
			tooltip = "Percent chance that an object will have an interaction prompt to check for intel.";
			property = "MSF_Mod_CP_InteractChance";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 0.7;
		};
		class IntelChance
		{
			displayName = "Chance of Intel";
			tooltip = "Percent chance that an object will have intel.";
			property = "MSF_Mod_CP_IntelChance";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 0.2;
		};

		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Spawns a road checkpoint when placed DIRECTLY on a road segment.";
		sync[] = { "LocationArea_F", "EmptyDetector" };

		class LocationArea_F
		{
			description[] = {};
			position = 0;
			direction = 0;
			optional = 0;
			duplicate = 1;
			synced[] = { "EmptyDetector" };
		};
	};
};
