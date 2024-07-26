class MSFTriggeFortify : EmptyDetector
{		
	displayName = "Trigger MSF Fortify";
	class Attributes
	{
		class MSFFortifyA
		{
			data = "AttributeSystemSubcategory";				
			control = "SubCategoryDesc1";
			displayName = "Area Fortification Options";				
			description = "Be sure to set the trigger activation properties, or units won't spawn.";
		};
		class MSF_Trig_Fortify_Side
		{
			displayName = "Side";
			tooltip = "Faction to spawn units in.";
			property = "MSF_Trig_Fortify_Side";
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
		class MSF_Trig_Fortify_Probability
		{
			displayName = "Spawn Chance";
			tooltip = "Percent chance that the area will fortify.";
			property = "MSF_Trig_Fortify_Probability";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;				
		};
		class MSFFortify_Building
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Building Fortification Options";
		};
		class MSF_Trig_Fortify_Building_Enable
		{
			displayName = "Enable Building Fortification";
			tooltip = "Spawn enemies in buildings in this trigger. (If there are no buildings, no enemies will spawn).";
			property = "MSF_Trig_Fortify_Building_Enable";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "false";				
		};
		class MSF_Trig_Fortify_Building_Num
		{
			displayName = "Number to Spawn";
			tooltip = "Number of buildings to fortify (1-10).";
			property = "MSF_Trig_Fortify_Building_Num";
			control = "EditShort";
			expression = "if (_value > 0 && _value < 11) then { _this setVariable ['%s',_value]; } else { _this setVariable ['%s',5]; }";
			defaultValue = "5";
			validate = "number";
			typeName = "NUMBER";
		};
		class MSF_Trig_Fortify_Building_Probability
		{
			displayName = "Spawn Chance";
			tooltip = "Percent chance that patrols will spawn";
			property = "MSF_Trig_Fortify_Building_Probability";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;				
		};
		class MSFFortify_Vics
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Area Fortification Vechicles";
		};
		class MSF_Trig_Fortify_Vehicle_Enable
		{
			displayName = "Enable Vehicles";
			tooltip = "Spawn vehicles in the fortification area.";
			property = "MSF_Trig_Fortify_Vehicle_Enable";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "false";				
		};
		class MSF_Trig_Fortify_Vehicle_Num
		{
			displayName = "Number to Spawn";
			tooltip = "Number of vehicles to spawn.";
			property = "MSF_Trig_Fortify_Vehicle_Num";
			control = "EditShort";
			expression = "if (_value > 0 && _value < 11) then { _this setVariable ['%s',_value]; } else { _this setVariable ['%s',2]; }";
			defaultValue = "2";
			validate = "number";
			typeName = "NUMBER";		
		};
		class MSF_Trig_Fortify_VicFillPercentage
		{
			displayName = "Chance of full vehicle";
			tooltip = "This percentage sets the chance that the spawned vehicle will be full of infantry.";
			property = "MSF_Trig_Fortify_VicFillPercentage";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 0;				
		};
		class MSF_Trig_Fortify_Vehicle_Probability
		{
			displayName = "Spawn Chance";
			tooltip = "Percent chance that patrols will spawn";
			property = "MSF_Trig_Fortify_Vehicle_Probability";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;				
		};
		class MSFFortify_Armor
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Area Fortification Armored Vehicles";
		};
		class MSF_Trig_Fortify_Armor_Enable
		{
			displayName = "Enable Armored Vehicles";
			tooltip = "Spawn armored vehicles in the fortification area.";
			property = "MSF_Trig_Fortify_Armor_Enable";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "false";				
		};
		class MSF_Trig_Fortify_Armor_Num
		{
			displayName = "Number to Spawn";
			tooltip = "Number of armored vehicles to spawn.";
			property = "MSF_Trig_Fortify_Armor_Num";
			control = "EditShort";
			expression = "if (_value > 0 && _value < 5) then { _this setVariable ['%s',_value]; } else { _this setVariable ['%s',2]; }";
			defaultValue = "2";
			validate = "number";
			typeName = "NUMBER";		
		};
		class MSF_Trig_Fortify_Armor_Probability
		{
			displayName = "Spawn Chance";
			tooltip = "Percent chance that patrols will spawn";
			property = "MSF_Trig_Fortify_Armor_Probability";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;				
		};
		class MSFFortify_Static
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Area Fortification Static Turret Emplacements";
		};
		class MSF_Trig_Fortify_Static_Enable
		{
			displayName = "Enable Static Turrets";
			tooltip = "Spawn turret emplacements in the fortification area.";
			property = "MSF_Trig_Fortify_Static_Enable";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "false";				
		};
		class MSF_Trig_Fortify_Static_Num
		{
			displayName = "Number to Spawn";
			tooltip = "Number of turret emplacements to spawn. (Capped at 10)";
			property = "MSF_Trig_Fortify_Static_Num";
			control = "EditShort";
			expression = "if (_value > 0 && _value < 10) then { _this setVariable ['%s',_value]; } else { _this setVariable ['%s',2]; }";
			defaultValue = "2";
			validate = "number";
			typeName = "NUMBER";		
		};
		class MSF_Trig_Fortify_Static_Probability
		{
			displayName = "Spawn Chance";
			tooltip = "Percent chance that patrols will spawn";
			property = "MSF_Trig_Fortify_Static_Probability";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;				
		};
		class MSFFortify_Patrol
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Area Fortification Infantry Patrols";
		};
		class MSF_Trig_Fortify_Patrol_Enable
		{
			displayName = "Enable area patrols";
			tooltip = "Spawn patrols in the fortification area.";
			property = "MSF_Trig_Fortify_Patrol_Enable";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "false";				
		};
		class MSF_Trig_Fortify_patrol_Num
		{
			displayName = "Number to Spawn";
			tooltip = "Number of patrols emplacements to spawn. (capped at 5)";
			property = "MSF_Trig_Fortify_patrol_Num";
			control = "EditShort";
			expression = "if (_value > 0 && _value < 5) then { _this setVariable ['%s',_value]; } else { _this setVariable ['%s',2]; }";
			defaultValue = "2";
			validate = "number";
			typeName = "NUMBER";		
		};
		class MSF_Trig_Fortify_Patrol_Probability
		{
			displayName = "Spawn Chance";
			tooltip = "Percent chance that patrols will spawn";
			property = "MSF_Trig_Fortify_Patrol_Probability";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;				
		};
		class MSFFortify_Air
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Area Fortification Air unit attack";
		};
		class MSF_Trig_Fortify_Air_Enable
		{
			displayName = "Enable Air Units";
			tooltip = "Spawn air units that fly to the trigger and seek and destroy.";
			property = "MSF_Trig_Fortify_Air_Enable";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "false";				
		};
		class MSF_Trig_Fortify_Air_Num
		{
			displayName = "Number to Spawn";
			tooltip = "Number of patrols emplacements to spawn. (capped at 5)";
			property = "MSF_Trig_Fortify_Air_Num";
			control = "EditShort";
			expression = "if (_value > 0 && _value < 5) then { _this setVariable ['%s',_value]; } else { _this setVariable ['%s',2]; }";
			defaultValue = "2";
			validate = "number";
			typeName = "NUMBER";		
		};
		class MSF_Trig_Fortify_Air_Probability
		{
			displayName = "Spawn Chance";
			tooltip = "Percent chance that air units will spawn";
			property = "MSF_Trig_Fortify_Air_Probability";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;				
		};
	};
};