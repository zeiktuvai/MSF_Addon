class MSF_Module_ClassOverride : Module_F
{
	scope = 2;
	displayName = "Config - Override Classes";
	icon = MSF_ICON;
	category = "MSF_Module";
	function = "";
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
        class Side
		{
			displayName = "Side";
			tooltip = "Faction to override spawn classes.";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
			property = "MSF_Mod_CO_Side";
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
        class Groups
		{
			displayName = "Group Classes";
			tooltip = "Array of group classes for spawning.";
			property = "MSF_Mod_CO_Groups";
			control = "EditCodeMulti3";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "''";
		};
        class Vehicles
		{
			displayName = "Vehicle Classes";
			tooltip = "Array of vehicle classes for spawning.";
			property = "MSF_Mod_CO_Vehicle";
			control = "EditCodeMulti3";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "''";
		};
        class ArmoredC
		{
			displayName = "Aromored Classes";
			tooltip = "Array of armor classes for spawning.";
			property = "MSF_Mod_CO_Armored";
			control = "EditCodeMulti3";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "''";
		};
        class Turrets
		{
			displayName = "Turret Classes";
			tooltip = "Array of turret classes for spawning.";
			property = "MSF_Mod_CO_Turret";
			control = "EditCodeMulti3";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "''";
		};
        class Air
		{
			displayName = "Air Classes";
			tooltip = "Array of air classes for spawning.";
			property = "MSF_Mod_CO_Air";
			control = "EditCodeMulti3";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "''";
		};
		class Units
		{
			displayName = "Unit Classes";
			tooltip = "Array of individual unit classes for spawning.";
			property = "MSF_Mod_CO_Units";
			control = "EditCodeMulti3";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "''";
		};
		class VicPatrols
		{
			displayName = "Patrol Vehicle Classes";
			tooltip = "Array of individual vehicle classes for spawning in vehicle patrols.";
			property = "MSF_Mod_CO_VicPatrols";
			control = "EditCodeMulti3";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "''";
		};
		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Use this module to override the classes MSF uses to spawn units.  One of this module per side can be used.";
		sync[] = { "LocationArea_F" };

		class LocationArea_F
		{
			description[] = {};
			position = 0;
			direction = 0;
			optional = 0;
			duplicate = 0;
			synced[] = { };
		};
	};
};