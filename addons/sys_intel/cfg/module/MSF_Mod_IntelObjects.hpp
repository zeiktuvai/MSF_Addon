class MSF_Module_IntelObjects : MSF_Module_Intel
{
	scope = 2;
	displayName = "Intel Providers";
	icon = "a3\modules_f_bootcamp\data\iconhint.paa";
	category = "MSF_Module_Intel";
	function = "MSF_Intel_fnc_Mod_IntelObjects";
	functionPriority = 2;
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
		class Units : Units
		{
			property = "MSF_Intel_Mod_Units";
		};
		class InteractionChance
		{
			displayName = "Prompt Chance";
			tooltip = "Percent chance that an object will have an interaction prompt to check for intel.";
			property = "MSF_Intel_Mod_InteractChance";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 0.5;
		};
		class IntelChance
		{
			displayName = "Chance of Intel";
			tooltip = "Percent chance that an object will have intel.";
			property = "MSF_Intel_Mod_IntelChance";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 0.6;
		};
       
		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "This module designates objects that can have intel interactions.";
		sync[] = { "LocationArea_F" };

		class LocationArea_F
		{
			description[] = {};
			position = 0;
			direction = 0;
			optional = 0;
			duplicate = 0;
			synced[] = { "AnyAI" };
		};
	};
};