class MSF_Module_IntelLevel : MSF_Module_Intel
{
	scope = 2;
	displayName = "Set Intel Level";
	icon = "a3\modules_f\data\iconsector_ca.paa";
	category = "MSF_Module_Intel";
	function = "MSF_Intel_fnc_Mod_IntelLevel";
	functionPriority = 1;
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
		class IntelLevel
		{
			displayName = "Intel Level";
			tooltip = "Sets mission intel level to this value when activated.";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
			property = "MSF_Mod_IntelItem_Level";
			defaultValue = 1;
			typeName = "NUMBER";
			class Values
			{
				class Level1
				{
					name = "Level 1";
					tooltip = "Level 1";
					value = 1;
				};
				class Level2
				{
					name = "Level 2";
					tooltip = "Level 2";
					value = 2;
				};
				class Level3
				{
					name = "Level 3";
					tooltip = "Level 3";
					value = 3;
				};
				class Level4
				{
					name = "Level 4";
					tooltip = "Level 4";
					value = 4;
				};
			};
		};

   		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "This module sets the mission intel level when activated.";
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
