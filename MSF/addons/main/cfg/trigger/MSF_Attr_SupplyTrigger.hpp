class MSFTriggerSupply : EmptyDetector
{		
	displayName = "Trigger MSF Supplies";
	class Attributes
	{
		class MSFSupply
		{
			data = "AttributeSystemSubcategory";				
			control = "SubCategory";
			displayName = "Supply generation option";				
		};
		class MSF_Trig_Supply_ActivationSize
		{
			displayName = "Activation Size";
			tooltip = "This sets the additional size added to the trigger size to determine the activation area. (i.e. if trigger is 400x400 and this is set to 400x400, trigger will activate at 800x800 from the center.)";
			property = "MSF_Trig_Supply_ActivationSize";
			control = "EditAB";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "[500,500]";
		};		
		class MSF_Trig_Supply_Items
		{
			displayName = "Enable Supply Cache";
			tooltip = "Spawn a supply box in the trigger area with items (See probabilies below).";
			property = "MSF_Trig_Supply_Items";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "true";				
		};
		class MSF_Trig_Supply_VehicleAmmo
		{
			displayName = "Enable Vehicle Ammo";
			tooltip = "Spawn a vehicle ammo crate.";
			property = "MSF_Trig_Supply_VehicleAmmo";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "true";				
		};
		class MSF_Trig_Supply_Fuel
		{
			displayName = "Enable Fuel Cans";
			tooltip = "Spawn fuel cans.";
			property = "MSF_Trig_Supply_Fuel";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "true";				
		};
		class MSF_Trig_Supply_HeightLimit
		{
			displayName = "Disable Trigger Height Limit";
			tooltip = "All triggers that spawn units (Patrol, Fortify, Wave Defense and Supply) are limited to 50m height to prevent mass trigger activiation as aircraft zoom past.  Enabling this removes that limit.";
			property = "MSF_Trig_Supply_HeightLimit";			
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";					
			defaultValue = "false";
		};
		class MSFSupply_Items
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Item generation options";
		};
		class MSF_Trig_Supply_Items_Num
		{
			displayName = "Number of Items";
			tooltip = "Sets the number of items to generate in the supply crate.";
			property = "MSF_Trig_Supply_Items_Num";			
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "25";
			validate = "number";
			typeName = "NUMBER";
		};
		class MSF_Trig_Supply_Items_MagWeight
		{			
			displayName = "Magazine Likeliness";			
			tooltip = "How likely the system is to add mags to the items inventory. (0.1 disables this catetory)";
			property = "MSF_Trig_Supply_Items_MagWeight";
			control = "SliderZeroToOneSmall";
			expression = "if (_value == 0.1) then { _this setVariable ['%s',0]; } else { _this setVariable ['%s',_value]; };";
			defaultValue = 1;
		};
		class MSF_Trig_Supply_Items_LauncherWeight
		{			
			displayName = "Launcher Ammo Likeliness";			
			tooltip = "How likely the system is to add launcher ammo to the items inventory. (0.1 disables this catetory)";
			property = "MSF_Trig_Supply_Items_LauncherWeight";
			control = "SliderZeroToOneSmall";
			expression = "if (_value == 0.1) then { _this setVariable ['%s',0]; } else { _this setVariable ['%s',_value]; };";
			defaultValue = 1;
		};
		class MMSF_Trig_Supply_Items_GrenadeWeight
		{			
			displayName = "Grenades Likeliness";			
			tooltip = "How likely the system is to add grenades to the items inventory. (0.1 disables this catetory)";
			property = "MSF_Trig_Supply_Items_GrenadeWeight";
			control = "SliderZeroToOneSmall";
			expression = "if (_value == 0.1) then { _this setVariable ['%s',0]; } else { _this setVariable ['%s',_value]; };";
			defaultValue = 1;			
		};
		class MSF_Trig_Supply_Items_MedicalWeight
		{			
			displayName = "Medical Likeliness";			
			tooltip = "How likely the system is to add medical to the items inventory. (0.1 disables this catetory)";
			property = "MSF_Trig_Supply_Items_MedicalWeight";
			control = "SliderZeroToOneSmall";
			expression = "if (_value == 0.1) then { _this setVariable ['%s',0]; } else { _this setVariable ['%s',_value]; };";
			defaultValue = 1;
		};
		class MSF_Trig_Supply_Items_FoodWeight
		{			
			displayName = "Food Likeliness";			
			tooltip = "How likely the system is to add food to the items inventory. (0.1 disables this catetory)";
			property = "MSF_Trig_Supply_Items_FoodWeight";
			control = "SliderZeroToOneSmall";
			expression = "if (_value == 0.1) then { _this setVariable ['%s',0]; } else { _this setVariable ['%s',_value]; };";
			defaultValue = 1;
		};
		class MSFSupply_VehicleAmmo
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Vehicle Ammo";
		};
		class MSF_Trig_Supply_VicAmmo_Min
		{
			displayName = "Minimum Ammo Supply";
			tooltip = "Minimum vehicle ammo supply in box.";
			property = "MSF_Trig_Supply_VicAmmo_Min";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "500";
			validate = "number";
			typeName = "NUMBER";		
		};
		class MSF_Trig_Supply_VicAmmo_Max
		{
			displayName = "Maximum Ammo Supply";
			tooltip = "Maximum vehicle ammo supply in box.";
			property = "MSF_Trig_Supply_VicAmmo_Max";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "1000";
			validate = "number";
			typeName = "NUMBER";		
		};			
		class MSFSupply_Fuel
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Fuel Canisters";
		};
		class MSF_Trig_Supply_Fuel_Count
		{
			displayName = "Number of Fuel Cans";
			tooltip = "Number of Fuel Cans to spawn.";
			property = "MSF_Trig_Supply_Fuel_Count";
			control = "EditShort";
			expression = "if (_value > 0 && _value < 7) then { _this setVariable ['%s',_value]; } else { _this setVariable ['%s',3]; }";
			defaultValue = "5";
			validate = "number";
			typeName = "NUMBER";		
		};
	};
};