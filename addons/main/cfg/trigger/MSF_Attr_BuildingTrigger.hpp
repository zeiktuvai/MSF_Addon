class MSFTriggerBuildingDestroy : EmptyDetector
{		
	displayName = "Trigger MSF Building Destruction";
	class Attributes
	{
		class MSFBuild_d
		{
			data = "AttributeSystemSubcategory";				
			control = "SubCategoryDesc1";
			displayName = "Building Destruction Options";				
			description = "Buildings in the area of the trigger will be chosen to be destroyed.";
		};
		class MSF_Trig_Build_DestructionProb
		{
			displayName = "Building Destruction Chance";
			tooltip = "The chance for each building in the trigger area to be destroyed.";
			property = "MSF_Trig_Build_DestructionProb";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;
		};
		class MSF_Trig_Build_Fire
		{
			displayName = "Enable Building Fires";
			tooltip = "This will enable spawning a fire in the destroyed building.";
			property = "MSF_Trig_Build_Fire";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "false";				
		};
		class MSF_Trig_Build_FireProp
		{
			displayName = "Fire Spawn Chance";
			tooltip = "The chance for a fire to be spawned in the destroyed building.";
			property = "MSF_Trig_Build_FireProp";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;
		};
	};
};