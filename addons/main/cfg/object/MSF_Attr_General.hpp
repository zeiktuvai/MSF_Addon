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
			defaultValue = "false";			
			condition = "objectVehicle";
		};
		class MSF_General_DmgReduction
		{
			displayName = "Vehicle Toughness";
			tooltip = "This percentage sets the damage reduction to all incoming damage for this vehicle.  (i.e. at 75%, incoming fire will only do 25% damage.) Caps at 95%";
			property = "MSF_General_DmgReduction";
			control = "Slider";
			expression = "if (_value > 0.95) then { _this setVariable ['%s',0.95,true]; } else { _this setVariable ['%s',_value,true]; };";
			defaultValue = 0;			
			condition = "objectVehicle";
		};
	};
};