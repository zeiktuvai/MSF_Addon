class MSFHelpers
{
	displayName = "MSF Helper Functions";
	collapsed = 1;
	class Attributes
	{
		class InventoryGenSys
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategoryDesc2";
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
			displayName = "Item Count";
			tooltip = "Sets the number of items to generate for this object.";
			property = "MSF_Helper_InvGenerate_ItemCount";			
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 0;
			validate = "number";
			typeName = "NUMBER";
		};
		class MSF_Helper_InvGenerate_Type
		{			
			displayName = "Item Count per Category";			
			tooltip = "If enabled, item count is used to generate that many items per category. If disabled, item count is spread across all categories (default).";
			property = "MSF_Helper_InvGenerate_Type";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = false;			
			condition = "objectHasInventoryCargo";
		};
		class InventoryGenSysCategories
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Item Generation Categories";			
		};
		class MSF_Helper_InvGenerate_Magazines
		{			
			displayName = "Enable Generating Magazines";			
			tooltip = "Generates random mags from the list.";
			property = "MSF_Helper_InvGenerate_Magazines";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = false;			
			condition = "objectHasInventoryCargo";
		};
		class MSF_Helper_InvGenerate_Launcher
		{			
			displayName = "Enable Generating Launcher Ammo";			
			tooltip = "Generates random launcher ammo from the list.";
			property = "MSF_Helper_InvGenerate_Launcher";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = false;			
			condition = "objectHasInventoryCargo";
		};
		class MSF_Helper_InvGenerate_Grenade
		{			
			displayName = "Enable Generating Grenades";			
			tooltip = "Generates random grenages from the list.";
			property = "MSF_Helper_InvGenerate_Grenade";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = false;			
			condition = "objectHasInventoryCargo";
		};
		class MSF_Helper_InvGenerate_Medical
		{			
			displayName = "Enable Generating Medical Items";			
			tooltip = "Generates random medical items from the list.";
			property = "MSF_Helper_InvGenerate_Medical";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = false;			
			condition = "objectHasInventoryCargo";
		};
		class MSF_Helper_InvGenerate_Food
		{			
			displayName = "Enable Generating Food Items";			
			tooltip = "Generates random food items from the list.";
			property = "MSF_Helper_InvGenerate_Food";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = false;			
			condition = "objectHasInventoryCargo";
		};
	};
};