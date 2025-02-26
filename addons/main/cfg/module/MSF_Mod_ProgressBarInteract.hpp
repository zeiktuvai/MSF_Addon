class MSF_Module_ProgressBarInteract : Module_F
{
	scope = 2;
	displayName = "Object - Progressbar Interaction";
	icon = "iconModule";
	category = "MSF_Module";
	function = "MSF_fnc_Mod_ProgressBarInteraction";
	functionPriority = 1;
	isGlobal = 1;
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
			property = "MSF_Mod_PBI_Units";
            defaultValue = "'0'";
		};
		class InteractionTime
		{
			displayName = "Interaction Time";
			tooltip = "How many seconds the interaction will take";
			property = "MSF_MOD_prog_time";			
			control = "SliderTimeRespawn";
			expression = "_this setVariable ['%s',_value];";			
			defaultValue = "10";
		};
		class ActionName
		{
			displayName = "Action Text";
			tooltip = "The text that will be displayed for this action in the ACE interaction menu.";
			property = "MSF_MOD_prog_name";			
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";			
			defaultValue = "Interact";
		};
		class SuccessCode
		{
			displayName = "Action Code";
			tooltip = "Code block that is ran upon completion of the interaction. Use _obj in your code to refer to the object being interacted with.";
			property = "MSF_MOD_prog_action";
			control = "EditCodeMulti3";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "";
		};
		class FailText
		{
			displayName = "Fail Text";
			tooltip = "Text that will be displayed when the interaction fails (is interrupted).";
			property = "MSF_MOD_prog_fail";			
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";			
			defaultValue = "Interaction failed";
		};
		class Repeat
		{
			displayName = "Repeatable?";
			tooltip = "If enabled, the interaction menu item will remain after it is completed and can be used again.";
			property = "MSF_MOD_prog_enable";	
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "false";
		};

		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Any object synced to this module will have an ACE Interaction item added to trigger a time base progress bar interaction.";
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