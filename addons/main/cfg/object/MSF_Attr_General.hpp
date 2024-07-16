// MSF General Functions
class MSFGeneralFunctions
{
	displayName = "MSF Functions";
	class Attributes
	{
		class MSF_General_InfiniteFuel
		{			
			displayName = "Enable Infinite Fuel";			
			tooltip = "Adds vehicle to a handler that sets the vehicles fuel to 100% ever 300 seconds.";
			property = "MSF_General_InfiniteFuel";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "false";			
			condition = "objectVehicle";
		};
		class MSF_General_DmgReduction
		{
			displayName = "Vehicle Toughness";
			tooltip = "This percentage sets the damage reduction to all incoming damage for this vehicle.  (i.e. at 75%, incoming fire will only do 25% damage.) Caps at 95%";
			property = "MSF_General_DmgReduction";
			control = "Slider";
			expression = "if (_value > 0.95) then { _this setVariable ['%s',0.95]; } else { _this setVariable ['%s',_value]; };";
			defaultValue = 0;			
			condition = "objectVehicle";
		};
		class MSF_Gen_prog
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategoryDesc2";
			displayName = "Object Interaction";
			description = "Creates an ACE interaction menu item that allows the object to be interacted with using a progress bar, then runs code on completion.";
		};
		class MSF_Gen_prog_en
		{
			displayName = "Enable Interaction";
			tooltip = "Enables adding ACE menu option to interact with object and perform action after timer.";
			property = "MSF_Gen_prog_en";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "false";
		};
		class MSF_Gen_prog_time
		{
			displayName = "Interaction Time";
			tooltip = "How many seconds the interaction will take";
			property = "MSF_Gen_prog_time";			
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";			
			defaultValue = 10;
			validate = "number";
			typeName = "NUMBER";
		};
		class MSF_Gen_prog_name
		{
			displayName = "Menu action title";
			tooltip = "The text that will be displaed for this action in the ACE interaction menu.";
			property = "MSF_Gen_prog_name";			
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";			
			defaultValue = "Interact";
		};
		class MSF_Gen_prog_CodeDesc
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategoryNoHeader1";
			description = "Use  _obj  in your code to refer to the object being interacted with.";
		};
		class MSF_Gen_prog_action
		{
			displayName = "Action Code";
			tooltip = "Code block that is ran upon completion of the interaction.";
			property = "MSF_Gen_prog_action";
			control = "EditCodeMulti3";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "hint ""Success""";
		};
		class MSF_Gen_prog_fail
		{
			displayName = "Fail Text";
			tooltip = "The text that will be displayed in a hint when the interaction fails (is interrupted).";
			property = "MSF_Gen_prog_fail";			
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";			
			defaultValue = "Interaction failed";
		};
		class MSF_Gen_prog_repeat
		{
			displayName = "Repeatable Interaction?";
			tooltip = "If enabled, the interaction menu item will remain after it is completed and can be used again.";
			property = "MSF_Gen_prog_enable";	
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "false";
		};
	};
};