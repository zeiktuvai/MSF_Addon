class MSF_Module_IntelItem : Module_F
{
	scope = 2;
	displayName = "Intel System - Intel Item";
	icon = "a3\modules_f\data\iconstrategicmapmission_ca.paa";
	category = "MSF_Module_Intel";
	function = "";
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
        class MarkerLayer
		{
			displayName = "Marker Layer Name";
			tooltip = "Name of the layer that contains the markers to show.";
			property = "MarkerLayer";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "nil";
            typeName = "STRING";
            validate = "none";
		};
        class NotificationName
		{
			displayName = "Notification Name";
			tooltip = "Name of the notification defined in the description.ext to show.";
			property = "NotificationName";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "nil";
            typeName = "STRING";
            validate = "none";
		};
        class DiaryDesc
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Diary Entry (Optional)";
		};
        class DiaryTitle
		{
			displayName = "Diary Entry Title";
			tooltip = "Title of the diary entry to add.";
			property = "DiaryTitle";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "nil";
            typeName = "STRING";
            validate = "none";
		};
        class DiaryBody
		{
			displayName = "Diary Entry Body";
			tooltip = "Content of the diary entry to be added (Can accept structured text).";
			property = "DiaryBody";
			control = "EditCodeMulti5";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "nil";
			typeName = "STRING";
            validate = "none";
		};
        class TaskDesc
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Task (Optional)";
		};
        class TaskSide
		{
			displayName = "Task Side";
			tooltip = "Faction to assign task to (i.e. BLUFOR, OPFOR, etc.).";
			property = "TaskSide";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;
			typeName = "Number";
			class Values
			{
				class West
				{
					name = "West";
					tooltip = "BLUFOR";
					value = 1;
				};
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
			};	
		};
        class TaskID
		{
			displayName = "Task ID";
			tooltip = "Task Name (No Spaces Allowed).";
			property = "TaskID";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "nil";
			typeName = "STRING";
            validate = "none";
		};
        class TaskTitle
		{
			displayName = "Task Title";
			tooltip = "Title of the task.";
			property = "TaskTitle";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "nil";
			typeName = "STRING";
            validate = "none";
		};
		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "MSF Intel System - Define an intel item that can be randomly attached to a unit.";
		sync[] = { "LocationArea_F" };

		class LocationArea_F
		{
			description[] = {};
			position = 1;
			direction = 0;
			optional = 1;
			duplicate = 1;
			synced[] = { };
		};
	};
};