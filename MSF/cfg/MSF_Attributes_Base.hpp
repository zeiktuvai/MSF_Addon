class MSFAttributes
{
	displayName = "MSF Attributes";
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
		class MSF_Player_Loadout_Override
		{
			displayName = "Override Mission Uniform";
			tooltip = "Allows the following option to override the mission setting.";
			property = "MSF_Player_Loadout_Override";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 0;
			unique = 0; 
			validate = "none";
			condition = "objectControllable";
		};
		class MSF_Player_Loadout_Uni
		{
			displayName = "Uniform";
			tooltip = "Selects the uniform color for this unit.";
			property = "MSF_Player_Loadout_Uni";
			control = "UniCombo";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 0;
			condition = "objectControllable";
			typeName = "NUMBER";

			class Values
			{
				class Temperate
				{
					name = "Temperate";
					tooltip = "Temperate Uniform (i.e. Multicam)";
					value = 0;
				};
				class Night
				{
					name = "Night";
					tooltip = "Night Uniform";
					value = 1;
				};
				class Winter
				{
					name = "Winter";
					tooltip = "Winter Uniforms (Requires NATO Winter Faction [by MALLINGA] to be installed)";
					value = 2;
				};
			};
		};
		class MSF_Player_Loadout_All
		{
			displayName = "All Respawn Loadouts";
			tooltip = "Overrides the default respawn loadout from the mission, and applies all respawn loadouts of the selected uniform type above.";
			property = "MSF_Player_Loadout_All";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 0;
			unique = 0; 
			validate = "none";
			condition = "objectControllable";
		};
	};
};