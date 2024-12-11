class MSF_Mod_OFE_Base : Module_F
{
	scope = 2;
	displayName = "OFE Location - Base";
	icon = "ca\misc3\data\icons\icon_fortnestbig_ca.paa";
	category = "MSF_Module";
	function = "MSF_fnc_OFE_Mod_SpawnBase";
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
			displayName = "Spawn Empty Vehicles";
			tooltip = "Spawns a unmanned vehicle at this location.";
			property = "MSF_Mod_OFE_OP_Vic";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "true";
		};
		class Probability
		{
			displayName = "Empty Vehicle spawn Chance";
			tooltip = "The chance for an unmanned vehicle to spawn at this location.";
			property = "MSF_Mod_OFE_OP_Vic_Prob";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;
		};
		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "MSF OFE System Module - Spawns a base with enemies at the location of the module.";
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
