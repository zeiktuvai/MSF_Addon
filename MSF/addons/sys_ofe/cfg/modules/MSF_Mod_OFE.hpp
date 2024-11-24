class MSF_Module_OFE : Module_F
{
	scope = 2;
	displayName = "OFE System";
	icon = "a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_toolbox_groups_ca.paa";
	category = "MSF_Module";
	function = "MSF_fnc_OFE_Mod";
	functionPriority = 1;
	isGlobal = 0;
	isTriggerActivated = 0;
	isDisposable = 1;	
	is3DEN = 1;
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
        class OFESysDesc
		{
			data = "AttributeSystemSubcategory";				
			control = "SubCategoryNoHeader2";
			description = "This module allows you to set config information for the OFE system.  Only one of this type is needed.";
		};
        class EnemySide
		{
			displayName = "Enemy Side";
			tooltip = "Faction of enemy units";
			property = "MSF_OFE_Enemy_Side";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
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
				class West
				{
					name = "West";
					tooltip = "BLUFOR";
					value = 1;
				};
			};	
		};
		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "MSF Occupying Force Engagement System - This system sets up an occupying force on the map that players can fight or escape from.";
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