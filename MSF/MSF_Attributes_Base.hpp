class MSFAttributes
{
	displayName = "MSF Settings";
	collapsed = 1;
	class Attributes
	{
		class MSF_Player_IsGM
		{
			displayName = "Is Game Master";
			tooltip = "Set this object as game master to allow special actions.";
			property = "MSF_Player_IsGM";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 0;
			unique = 0; 
			validate = "none";
			condition = "objectControllable";
		};
	};
};