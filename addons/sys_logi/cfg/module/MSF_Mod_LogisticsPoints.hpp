class MSF_Module_LogiPoints : Module_F
{
	scope = 2;
	displayName = "Logistics - Points";
	icon = "a3\ui_f\data\map\vehicleicons\iconbackpack_ca.paa";
	category = "MSF_Module";
	function = "MSF_Logi_fnc_Mod_LogiPoints";
	functionPriority = 2;
	isGlobal = 0;
	isTriggerActivated = 1;
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
        class Action
		{
			displayName = "Action";
			tooltip = "Action to take when activated.";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
			property = "MSF_Mod_Logi_Act";
			defaultValue = 0;			
			class Values
			{
				class Add
				{
					name = "Add";
					tooltip = "Adds Logistics Points";
					value = 0;
				};
				class Remove
				{
					name = "Subtract";
					tooltip = "Subtracts Logistics Points";
					value = 1;
				};				
			};	
		};
        class LogiPoints
		{
			displayName = "Logistics Points";
			tooltip = "The number of points to add/remove.";
			property = "MSF_Mod_Logi_Points";	
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 3;
			validate = "number";
			typeName = "NUMBER";
		};
		class Side
		{
			displayName = "Side";
			tooltip = "Faction to add points to.";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
			property = "MSF_Logi_PointSide";
			defaultValue = 1;
			typeName = "Number";
			class Values
			{
				class East
				{
					name = "East";
					tooltip = "OPFOR";
					value = 0;
				};
				class West
				{
					name = "West";
					tooltip = "BLUFOR";
					value = 1;
				};
				class Independant
				{
					name = "Independant";
					tooltip = "Independant";
					value = 2;
				};
			};	
		};

        class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Adds or removes logistics points based on module configuration.";
		sync[] = { "LocationArea_F" };

		class LocationArea_F
		{
			description[] = {};
			position = 1;
			direction = 0;
			optional = 0;
			duplicate = 0;
			synced[] = { };
		};
	};
};
