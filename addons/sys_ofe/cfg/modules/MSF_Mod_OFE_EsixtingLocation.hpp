class MSF_Mod_OFE_ExistingLoc : Module_F
{
	scope = 2;
	displayName = "Populate Existing Location";
	icon = "a3\3den\data\displays\display3den\panelleft\locationlist_ca.paa";
	category = "MSF_Module_OFE";
	function = "MSF_fnc_OFE_Mod_ExistingLocation";
	functionPriority = 2;
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
		size3[] = { 0, 0, -1 };
		isRectangle = 0;
	};

	class Attributes : AttributesBase
	{
		class Type
		{
			displayName = "Location Type";
			tooltip = "Type of location to spawn.";
			property = "MSF_OFE_Type";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 5;
			typeName = "Text";
			class Values
			{
				class Outpost
				{
					name = "Outpost";
					tooltip = "Outpost";
					value = "Outpost";
				};
				class Base
				{
					name = "Base";
					tooltip = "Base";
					value = "Base";
				};
				class Helibase
				{
					name = "Heli-Base";
					tooltip = "Heli-Base";
					value = "HeliBase";
				};
				class Airbase
				{
					name = "Air-Base";
					tooltip = "Air-Base";
					value = "AirBase";
				};
			};	
		};
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
		description = "MSF OFE System Module - This module will populate an existing area on the map (i.e. map placed military bases).  Expand the module to cover the area, then use placeholders to spawn different equipment.";
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
