class MSF_Module_IntelItem : MSF_Module_Intel
{
	scope = 2;
	displayName = "Intel Item/Location";
	icon = "a3\modules_f\data\iconstrategicmapmission_ca.paa";
	category = "MSF_Module_Intel";
	function = "";
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
        class Description
		{
			displayName = "Short Description";
			tooltip = "Short descriptive name of the intel item.";
			property = "MSF_MOD_IntelItem_Name";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "''";
            typeName = "STRING";
		};
		class IntelItem_Targets
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Allowed Intel Targets";
		};
        class AllowCIV
		{
			displayName = "Allow Civillians";
			tooltip = "Allow civilians to have this intel item.";
			property = "MSF_MOD_IntelItem_Target_CIV";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "true";			
		};
		class AllowMIL
		{
			displayName = "Allow Military";
			tooltip = "Allow any Military Unit (i.e. BLUFOR, OPFOR, IND) to have this intel item.";
			property = "MSF_MOD_IntelItem_Target_MIL";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "true";
		};
		class AllowOBJ
		{
			displayName = "Allow Objects";
			tooltip = "Allow some objects like documents, laptops or radios to have this intel item.";
			property = "MSF_MOD_IntelItem_Target_OBJ";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "true";
		};
		class IntelItem_Marker
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Map Marker Settings";
		};
		class MarkerType
		{
			displayName = "Marker Type";
			tooltip = "Type of marker to be created.";
			property = "MSF_MOD_IntelItem_Marker";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";            
			defaultValue = "'hd_unknown'";
			typeName = "STRING";
			class Values {
				class Unknown {
					name = "Unknown";
					value = "hd_unknown";
					picture = "a3\ui_f\data\map\markers\handdrawn\unknown_ca.paa";
				};
				class Warning {
					name = "Warning";
					value = "hd_warning";
					picture = "a3\ui_f\data\map\markers\handdrawn\warning_ca.paa";
				};
				class Dot {
					name = "Dot";
					value = "hd_dot";
					picture = "a3\ui_f\data\map\markers\handdrawn\dot_ca.paa";
				};
				class Objective {
					name = "Objective";
					value = "hd_objective";
					picture = "a3\ui_f\data\map\markers\handdrawn\objective_ca.paa";
				};
				class Flag {
					name = "Flag";
					value = "hd_flag";
					picture = "a3\ui_f\data\map\markers\handdrawn\flag_ca.paa";
				};
				class Join {
					name = "Join";
					value = "hd_join";
					picture = "a3\ui_f\data\map\markers\handdrawn\join_ca.paa";
				};
				class End {
					name = "End";
					value = "hd_end";
					picture = "a3\ui_f\data\map\markers\handdrawn\end_ca.paa";
				};
				class Pickup {
					name = "Pickup";
					value = "hd_pickup";
					picture = "a3\ui_f\data\map\markers\handdrawn\pickup_ca.paa";
				};
				class Destroy {
					name = "Destroy";
					value = "hd_destroy";
					picture = "a3\ui_f\data\map\markers\handdrawn\destroy_ca.paa";
				};
			};
		};
		class MarkerColor
		{
			displayName = "Marker Color";
			tooltip = "Color of marker to be created.";
			property = "MSF_MOD_IntelItem_MarkerColor";
			control = "MarkerColor";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "'Default'";
			typeName = "STRING";
		};
		class IntelItem_Notification
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Intel Notification Settings";
		};
		class NotificationType
		{
			displayName = "Notification Type";
			tooltip = "Type of notification that will be displayed.";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
			property = "MSF_MOD_IntelItem_Notification";
			defaultValue = "'MapUpdate'";
			typeName = "STRING";
			class Values
			{
				class MapUpdated
				{
					name = "Map Updated";
					tooltip = "Displayes the Map updated notification with custom text.";
					value = "MapUpdate";
				};
			};
		};
		class NotificationText
		{
			displayName = "Notification Text";
			tooltip = "Custom text to display in notification.";
			property = "MSF_MOD_IntelItem_NotifText";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "''";
            typeName = "STRING";
		};

		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = ".";
		sync[] = { "LocationArea_F" };

		class LocationArea_F
		{
			description[] = {};
			position = 1;
			direction = 0;
			optional = 0;
			duplicate = 1;
			synced[] = { };
		};
	};
};