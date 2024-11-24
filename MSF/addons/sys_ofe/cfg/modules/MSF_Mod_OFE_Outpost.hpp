class MSF_Mod_OFE_Outpost : Module_F
{
	scope = 2;
	displayName = "OFE - Outpost";
	icon = "a3\3den\data\displays\display3den\toolbar\widget_area_off_ca.paa";
	category = "MSF_Module";
	function = "MSF_fnc_OFE_Mod_SpawnOutpost";
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
		class Supplies
		{
			displayName = "Spawn Supplies";
			tooltip = "Spawn supplies in the supply crate at this location.";
			property = "MSF_Mod_OFE_OP_Supplies";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "true";
		};
		class Vehicle
		{
			displayName = "Spawn Vehicle";
			tooltip = "Spawns a unmanned vehicle at this location.";
			property = "MSF_Mod_OFE_OP_Vic";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "true";
		};
		class Probability
		{
			property = "MSF_Mod_OFE_OP_Vic_Prob";
			displayName = "Unmaned vehicle spawn Chance";
			tooltip = "The chance for an unmanned vehicle to spawn at this location.";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;
		};
		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "MSF OFE System Module - Spawns an outpost with enemies at the location of the module.";
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
