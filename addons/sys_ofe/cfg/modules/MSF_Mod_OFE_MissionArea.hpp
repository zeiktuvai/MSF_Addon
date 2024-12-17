class MSF_Module_OFE_MissArea : Module_F
{
	scope = 2;
	displayName = "Mission Area (Escape Ending)";
	icon = "a3\modules_f_curator\data\portraitendmission_ca.paa";
	category = "MSF_Module_OFE";
	function = "MSF_fnc_OFE_Mod_MissionArea";
	functionPriority = 2;
	isGlobal = 0;
	isTriggerActivated = 0;
	isDisposable = 1;	
	is3DEN = 1;
	curatorCanAttach = 0;
	canSetArea = 1;
	canSetAreaShape = 1;
	canSetAreaHeight = 0;

	class AttributeValues
	{
		size3[] = { 500, 500, -1 };
		isRectangle = 0;
	};

	class Attributes : AttributesBase
	{
        class OFESysDesc
		{
			data = "AttributeSystemSubcategory";				
			control = "SubCategoryNoHeader2";
			description = "This module sets the mission area that players will need to escape from.  If conditions are met, leaving the area of this module will end the mission.";
		};
        class EnemyStr
		{
			displayName = "Enemy Strength";
			tooltip = "Required Enemy Strength Level to allow escape.";
			property = "MSF_OFE_EscEnemyStr";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 2;
			typeName = "Number";
			class Values
			{
				class Over
				{
					name = "Overwhelming";
					tooltip = "Overwhelming (Not recommended).";
					value = 4;
				};
				class High
				{
					name = "High";
					tooltip = "High";
					value = 3;
				};
                class Med
				{
					name = "Medium";
					tooltip = "Medium";
					value = 2;
				};
                class Low
				{
					name = "Low";
					tooltip = "Low";
					value = 1;
				};
                class Insig
				{
					name = "Insignificant";
					tooltip = "Insignificant";
					value = 0;
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