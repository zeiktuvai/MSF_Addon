class MSF_Module_IntelItem : MSF_Module_Intel
{
	scope = 2;
	displayName = "Intel Item/Location";
	icon = "a3\modules_f\data\iconstrategicmapmission_ca.paa";
	category = "MSF_Module_Intel";
	function = "MSF_Intel_fnc_Mod_IntelItem";
	functionPriority = 1;
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
			control = "Edit";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "''";
            typeName = "STRING";
		};
		class IntelLevel
		{
			displayName = "Required Intel Level";
			tooltip = "Mission intel level required for this item to be available to players.";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
			property = "MSF_MOD_IntelItem_Level";
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
		class IntelItem_SyncedUnits
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Synced Units";
		};
		class ActivationSide
		{
			displayName = "Activation Side";
			tooltip = "Faction that will show the hidden synced objects.";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
			property = "MSF_Module_IntelItem_ActSide";
			defaultValue = 3;
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
					value = 2;
				};
				class West
				{
					name = "West";
					tooltip = "BLUFOR";
					value = 1;
				};
				class Player
				{
					name = "AnyPlayer";
					tootip = "AnyPlayer";
					value = 3;
				};
			};	
		};
		class Units : Units
		{
			property = "MSF_Mod_IntelItem_Units";
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
		class IntelItem_Enablement
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Intel types provided to players upon discovery.";
		};
		class EnableTask
		{
			displayName = "Enable Task";
			tooltip = "Create a task for players to complete when discovered.";
			property = "MSF_MOD_IntelItem_En_Task";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "true";
		};
		class EnableNotification
		{
			displayName = "Enable Notification";
			tooltip = "Display a notification to players when discovered.";
			property = "MSF_MOD_IntelItem_En_Notif";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "true";
		};
		class EnableDiary
		{
			displayName = "Enable Diary Entry";
			tooltip = "Create a diary entry when discovered.";
			property = "MSF_MOD_IntelItem_En_Diary";
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
				class Ellipse {
					name = "Ellipse";
					value = "ELLIPSE";
					picture = "a3\3den\data\attributes\shape\ellipse_ca.paa";
				};
				class Rectangle {
					name = "Rectangle";
					value = "RECTANGLE";
					picture = "a3\3den\data\attributes\shape\rectangle_ca.paa";
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
		class MarkerSize
		{
			displayName = "Marker Area";
			tooltip = "Area of marker (Only for Ellipse and Rectangle).";
			property = "MSF_MOD_IntelItem_MarkerArea";
			control = "EditXY";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "[100, 100]";			
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
			property = "MSDisplayes the Map updated notification with custom textF_MOD_IntelItem_Notification";
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
				class IntelDiscovered
				{
					name = "Intel Discovered";
					tooltip = "Displayes the New Intel Discovered notification with custom text.";
					value = "IntelDiscovered";
				};
			};
		};
		class NotificationText
		{
			displayName = "Notification Text";
			tooltip = "Custom text to display in notification.";
			property = "MSF_MOD_IntelItem_NotifText";
			control = "Edit";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "''";
            typeName = "STRING";
		};
		class IntelItem_Diary
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Intel Diary Entry";
		};
		class DiarySubj
		{
			displayName = "Diary Subject";
			tooltip = "Subject to display the diary entry under.";
			property = "MSF_Mod_IntelItem_DiaryS";
			control = "Edit";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "''";
		};
		class DiaryTitle
		{
			displayName = "Diary Title";
			tooltip = "Title of the diary entry.";
			property = "MSF_Mod_IntelItem_DiaryTi";
			control = "Edit";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "''";
		};
		class DiaryText
		{
			displayName = "Diary Text";
			tooltip = "Diary entry content.";
			property = "MSF_Mod_IntelItem_DiaryT";
			control = "EditMulti5";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "''";
		};
		class IntelItem_Task
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Task Settings";
		};
		class TaskTitle
		{
			displayName = "Task Title";
			tooltip = "Title of task to create.";
			property = "MSF_Mod_IntelItem_Task";
			control = "Edit";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "''";
		};
		class TaskDesc
		{
			displayName = "Task Description";
			tooltip = "Description of task to create.";
			property = "MSF_Mod_IntelItem_TaskDesc";
			control = "EditMulti5";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "''";
		};
		class TaskAssigned
		{
			displayName = "Set as Current";
			tooltip = "Assigns the item as the current task when intel is discovered.";
			property = "MSF_Mod_IntelItem_TaskAssgn";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "false";
		};
		class TaskType
		{
			displayName = "Task Type";
			property = "MSF_Mod_IntelItem_TaskType";
			control = "TaskTypes";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "'Default'";
		};
		class IntelItem_TaskCompl
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Task Completion";
		};
		class TaskComplID
		{
			displayName = "Task ID";
			tooltip = "Task ID of a task to complete when this intel item is found.";
			property = "MSF_Mod_IntelItem_TaskCompl";
			control = "Edit";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "''";
		};

		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Adds a manual entry to the intel system.";
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