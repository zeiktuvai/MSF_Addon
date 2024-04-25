// MSF General Functions
class MSFGeneralFunctions
{
	displayName = "MSF Functions";
	collapsed = 1;
	class Attributes
	{
		class MSF_General_InfiniteFuel
		{			
			displayName = "Enable Infinite Fuel";			
			tooltip = "Adds vehicle to a handler that sets the vehicles fuel to 100% ever 300 seconds.";
			property = "MSF_General_InfiniteFuel";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = false;			
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
		class PlayerOptions
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Dialog Helper";
		};
		class MSF_General_Dialog
		{
			displayName = "Enable Dialog";
			tooltip = "Enable an ace interaction menu option to start a dialog conversation with this unit. (This requires additional setup; see readme).";
			property = "MSF_General_Dialog";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 0;						
			condition = "objectControllable";
		};
		class MSF_General_Dialog_Class
		{
			displayName = "Dialog Path";
			tooltip = "Path to dialog classes (i.e. MyAwesomeMission >> MissionBriefing)";
			property = "MSF_General_Dialog_Class";
			control = "EditCode";
			expression = "_this setVariable ['%s',_value]; [missionConfigFile >> 'CfgSentences' >> _value] call MSF_fnc_SetDialogValidator;";
			defaultValue =  "MyAwesomeMission >> MissionBriefing";
			condition = "objectControllable";
		};
		class MSF_General_Dialog_Action
		{
			displayName = "Custom Action";
			tooltip = "Code block that can be executed during the conversation if provided.";
			property = "MSF_Dialog_Action";
			control = "EditCodeMulti3";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = nil;
			condition = "objectControllable";
		};
	};
};