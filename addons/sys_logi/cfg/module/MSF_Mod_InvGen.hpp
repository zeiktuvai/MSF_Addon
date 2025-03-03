class MSF_Module_InvGen : Module_F
{
	scope = 2;
	displayName = "Logistics - Generate Inventory";
	icon = "a3\weapons_f\ammoboxes\data\ui\map_support_f_ca.paa";
	category = "MSF_Module";
	function = "MSF_Logi_fnc_Mod_InvGen";
	functionPriority = 2;
	isGlobal = 0;
	isTriggerActivated = 0;
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
		class Units : Units
		{
			property = "MSF_Mod_InvGen_Units";
			defaultValue = "'0'";
		};
        class Clear
		{			
			displayName = "Clear Container";			
			tooltip = "If enabled, the container will be emptied first before having items added..";
			property = "MSF_Mod_InvGen_Clear";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "true";
		};
        class ItemCount
		{
			displayName = "Number of Items";
			tooltip = "Sets the number of items to generate for this object. (If fill container is disabled.)";
			property = "MSF_Mod_InvGen_ItemCount";			
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 25;
			validate = "number";
			typeName = "NUMBER";
		};
		class Fill
		{			
			displayName = "Fill Container";			
			tooltip = "If enabled, the system will fill 80% of the objects inventory ignoring number of items.";
			property = "MSF_Mod_InvGen_Fill";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "false";
		};
		class InventoryGenCategories
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategoryDesc1";
			displayName = "Weighted Item Generation";
			description = "How likely an item category will be picked when generating items.";
		};
		class MagWeight
		{			
			displayName = "Magazine Likeliness";			
			tooltip = "How likely the system is to add weapon ammo to the objects inventory.";
			property = "MSF_Mod_InvGen_MagWeight";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;
		};
		class LauncherWeight
		{			
			displayName = "Launcher Ammo Likeliness";			
			tooltip = "How likely the system is to add launcher ammo to the objects inventory.";
			property = "MSF_Mod_InvGen_LauncherWeight";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;
		};
		class GrenadeWeight
		{			
			displayName = "Grenades Likeliness";			
			tooltip = "How likely the system is to add grenades to the objects inventory.";
			property = "MSF_Mod_InvGen_GrenadeWeight";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;
		};
        class AttachWeight
		{			
			displayName = "Attachment Likeliness";			
			tooltip = "How likely the system is to add weapon attachments to the objects inventory.";
			property = "MSF_Mod_InvGen_AttachWeight";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;
		};
		class MedicalWeight
		{			
			displayName = "Medical Likeliness";			
			tooltip = "How likely the system is to add medical items to the objects inventory.";
			property = "MSF_Mod_InvGen_MedicalWeight";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;
		};
		class FoodWeight
		{			
			displayName = "Food Likeliness";			
			tooltip = "How likely the system is to add food items to the objects inventory.";
			property = "MSF_Mod_InvGen_FoodWeight";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;
		};


		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Generates inventory for the synced items based on module settings.";
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