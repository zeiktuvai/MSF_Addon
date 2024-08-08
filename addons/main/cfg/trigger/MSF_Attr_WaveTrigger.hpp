class MSFTriggerWave : EmptyDetector
{		
	displayName = "Trigger MSF Wave Defense";
	class Attributes
	{
		class MSFWave_d
		{
			data = "AttributeSystemSubcategory";				
			control = "SubCategoryDesc1";
			displayName = "Wave Defense Options";				
			description = "Be sure to set the trigger activation properties, or units won't spawn.";
		};
		class MSF_Trig_Wave_Side
		{
			displayName = "Side";
			tooltip = "Faction to spawn units in.";
			property = "MSF_Trig_Wave_Side";
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
				class Independant
				{
					name = "Independant";
					tooltip = "Independant";
					value = 1;
				};
				class West
				{
					name = "West";
					tooltip = "BLUFOR";
					value = 2;
				};
			};	
		};
		class MSF_Trig_Waves_Num
		{
			displayName = "Number of waves";
			tooltip = "Number of waves to spawn";
			property = "MSF_Trig_Waves_Num";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "2";
			validate = "number";
			typeName = "NUMBER";
		};
		class MSF_Trig_Waves_Interval
		{
			displayName = "Wave Interval";
			tooltip = "Interval in seconds between waves.";
			property = "MSF_Trig_Waves_Interval";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "300";
			validate = "number";
			typeName = "NUMBER";
		};
		class MSF_Trig_Waves_HeightLimit
		{
			displayName = "Disable Trigger Height Limit";
			tooltip = "All triggers that spawn units (Patrol, Fortify, Wave Defense and Supply) are limited to 50m height to prevent mass trigger activiation as aircraft zoom past.  Enabling this removes that limit.";
			property = "MSF_Trig_Waves_HeightLimit";			
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";					
			defaultValue = "false";
		};
		class MSFWave_Types
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Spawn Options";
		};		
		class MSF_Trig_Wave_Infantry_Num
		{
			displayName = "Infantry Group Count";
			tooltip = "Number of infantry groups to spawn per wave";
			property = "MSF_Trig_Wave_Infantry_Num";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "0";
			validate = "number";
			typeName = "NUMBER";
		};
		class MSF_Trig_Wave_Vehicle_Num
		{
			displayName = "Vehicle Count";
			tooltip = "Number of vehicles to spawn per wave.";
			property = "MSF_Trig_Wave_Vehicle_Num";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "0";
			validate = "number";
			typeName = "NUMBER";		
		};
		class MSF_Trig_Wave_Armor_Num
		{
			displayName = "Armored Vehicle Count";
			tooltip = "Number of armored vehicles to spawn per wave.";
			property = "MSF_Trig_Wave_Armor_Num";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "0";
			validate = "number";
			typeName = "NUMBER";		
		};
		class MSF_Trig_Wave_Air_Num
		{
			displayName = "Air Unit Count";
			tooltip = "Number of air units to spawn per wave.";
			property = "MSF_Trig_Wave_Air_Num";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "0";
			validate = "number";
			typeName = "NUMBER";		
		};		
		class MSFWave_Fill
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Vehicle Options";
		};
		class MSF_Trig_Wave_VicFillPercentage
		{
			displayName = "Chance of full vehicle";
			tooltip = "This percentage sets the chance that the spawned vehicle will be full of infantry.";
			property = "MSF_Trig_Wave_VicFillPercentage";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 0;
		};		
	};
};