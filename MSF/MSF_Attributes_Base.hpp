class MSFAttributes
{
	displayName = "MSF Unit Attributes";
	collapsed = 1;
	class Attributes
	{
		class PlayerOptions
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Unit Attributes";
		};
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
		class MSF_Player_IsSL
		{
			displayName = "Is Commander/Leader";
			tooltip = "Set this object as a command unit for special ACE menu options.";
			property = "MSF_Player_IsSL";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 0;
			unique = 0; 
			validate = "none";
			condition = "objectControllable";
		};
		class PlayerLoadouts
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Unit Loadout Options";
		};
	};
};