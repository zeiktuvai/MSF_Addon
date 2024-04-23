class MSFHelpersInventory
{
	displayName = "MSF Inventory Generation System";
	collapsed = 1;
	class Attributes
	{
		class InventoryGenSys
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategoryDesc1";
			displayName = "Inventory Generation System";
			description = "Generates inventory items for this object based on items in MSF Settings and enabled categories."
		};
		class MSF_Helper_InvGenerate_Enabled
		{			
			displayName = "Enable Inventory Generation";			
			tooltip = "Enables random inventory generation.";
			property = "MSF_Helper_InvGenerate_Enabled";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = false;			
			condition = "objectHasInventoryCargo";
		};
		class MSF_Helper_InvGenerate_ItemCount
		{
			displayName = "Number of Items";
			tooltip = "Sets the number of items to generate for this object. (If fill container is disabled.)";
			property = "MSF_Helper_InvGenerate_ItemCount";			
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			condition = "objectHasInventoryCargo";
			defaultValue = 0;
			validate = "number";
			typeName = "NUMBER";
		};
		class MSF_Helper_InvGenerate_Fill
		{			
			displayName = "Fill Container";			
			tooltip = "If enabled, the system will fill 80% of the objects inventory ignoring number of items.";
			property = "MSF_Helper_InvGenerate_Fill";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = false;			
			condition = "objectHasInventoryCargo";
		};
		class InventoryGenSysCategories
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategoryDesc1";
			displayName = "Weighted Item Generation";
			description = "How likely an item category will be picked when generating items (0.1 disables a category)."
		};
		class MSF_Helper_InvGenerate_MagWeight
		{			
			displayName = "Magazine Likeliness";			
			tooltip = "How likely the system is to add mags to the items inventory. (0.1 disables this catetory)";
			property = "MSF_Helper_InvGenerate_MagWeight";
			control = "SliderZeroToOneSmall";
			expression = "if (_value == 0.1) then { _this setVariable ['%s',0]; } else { _this setVariable ['%s',_value]; };";
			defaultValue = 1;			
			condition = "objectHasInventoryCargo";
		};
		class MSF_Helper_InvGenerate_LauncherWeight
		{			
			displayName = "Launcher Ammo Likeliness";			
			tooltip = "How likely the system is to add launcher ammo to the items inventory. (0.1 disables this catetory)";
			property = "MSF_Helper_InvGenerate_LauncherWeight";
			control = "SliderZeroToOneSmall";
			expression = "if (_value == 0.1) then { _this setVariable ['%s',0]; } else { _this setVariable ['%s',_value]; };";
			defaultValue = 1;			
			condition = "objectHasInventoryCargo";
		};
		class MSF_Helper_InvGenerate_GrenadeWeight
		{			
			displayName = "Grenades Likeliness";			
			tooltip = "How likely the system is to add grenades to the items inventory. (0.1 disables this catetory)";
			property = "MSF_Helper_InvGenerate_GrenadeWeight";
			control = "SliderZeroToOneSmall";
			expression = "if (_value == 0.1) then { _this setVariable ['%s',0]; } else { _this setVariable ['%s',_value]; };";
			defaultValue = 1;			
			condition = "objectHasInventoryCargo";
		};
		class MSF_Helper_InvGenerate_MedicalWeight
		{			
			displayName = "Medical Likeliness";			
			tooltip = "How likely the system is to add medical to the items inventory. (0.1 disables this catetory)";
			property = "MSF_Helper_InvGenerate_MedicalWeight";
			control = "SliderZeroToOneSmall";
			expression = "if (_value == 0.1) then { _this setVariable ['%s',0]; } else { _this setVariable ['%s',_value]; };";
			defaultValue = 1;			
			condition = "objectHasInventoryCargo";
		};
		class MSF_Helper_InvGenerate_FoodWeight
		{			
			displayName = "Food Likeliness";			
			tooltip = "How likely the system is to add food to the items inventory. (0.1 disables this catetory)";
			property = "MSF_Helper_InvGenerate_FoodWeight";
			control = "SliderZeroToOneSmall";
			expression = "if (_value == 0.1) then { _this setVariable ['%s',0]; } else { _this setVariable ['%s',_value]; };";
			defaultValue = 1;			
			condition = "objectHasInventoryCargo";
		};
	};
};
class MSFHelpersGeneral
{
	displayName = "MSF Functions";
	collapsed = 1;
	class Attributes
	{
		class MSF_Helper_InfFuel_Enable
		{			
			displayName = "Enable Infinite Fuel";			
			tooltip = "Adds vehicle to a handler that sets the vehicles fuel to 100% ever 300 seconds.";
			property = "MSF_Helper_InfFuel_Enable";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = false;			
			condition = "objectVehicle";
		};
	};
};