class MSF_Module_BldgDestroy : Module_F
{
	scope = 2;
	displayName = "Destroy Buildings";
	icon = "x\zen\addons\context_actions\ui\ammo_ca.paa";
	category = "MSF_Module";
	function = "MSF_fnc_Mod_BuildingDestroy";
	functionPriority = 1;
	isGlobal = 0;
	isTriggerActivated = 0;
	isDisposable = 1;	
	is3DEN = 0;
	curatorCanAttach = 0;
	canSetArea = 1;
	canSetAreaShape = 1;
	canSetAreaHeight = 0;

	class AttributeValues
	{
		size3[] = { 100, 100, -1 };
		isRectangle = 0;
	};

	class Attributes : AttributesBase
	{
		class Probability
		{
			property = "MSF_Module_Bldg_Destroy_Prob";
			displayName = "Building Destruction Chance";
			tooltip = "The chance for each building in the trigger area to be destroyed.";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;
		};
		class Fire : Checkbox
		{
			displayName = "Enable Building Fires";
			tooltip = "This will enable spawning a fire in the destroyed building.";
			property = "MSF_Module_Bldg_Fire";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "false";
		};
		class FireProbability
		{
			displayName = "Fire Spawn Chance";
			tooltip = "The chance for a fire to be spawned in the destroyed building.";
			property = "MSF_Module_Bldg_Fire_Prob";			
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 0;
		};
					
		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Destroy Buildings in a defined area.";
		sync[] = { "LocationArea_F" };

		class LocationArea_F
		{
			description[] = {};
			position = 1;
			direction = 0;
			optional = 1;
			duplicate = 1;
			synced[] = { };
		};
	};
};