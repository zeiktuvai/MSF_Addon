class MSFSettings
{
	displayName = "MSF Settings";
	display = "Display3DENEditAttributes";
	class AttributeCategories
	{		
		class MSFPersist
		{
			displayName = "MSF Persistence";
			class Attributes
			{
				class EnablePersist
				{
					displayName = "Enable Persistence";
					tooltip = "Enable the persistence module for this mission.";
					property = "MSF_Mission_Persistence";			
					control = "Checkbox";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "false";
				};
				class MissionNumber
				{
					displayName = "Mission Number";
					tooltip = "Sets the mission number in the series. (i.e. If this is mission 3 of a 10 mission series then set this to 3 so that it loads persistence data from mission 2).";
					property = "MSF_Mission_Number";			
					control = "EditShort";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = 1;
					validate = "number";
					typeName = "NUMBER";
				};
				class EnablementCategory
				{
					data = "AttributeSystemSubcategory";
					control = "SubCategory";
					displayName = "Mission Data Persistence";
				};
				class EnableSaving
				{
					displayName = "Enable Saving";
					tooltip = "Enables saving persistence data on enabled objects.";
					property = "MSF_Mission_Saving";
					control = "Checkbox";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "false";
				};
				class EnableLoading
				{
					displayName = "Enable Loading";
					tooltip = "Enables loading persistence data on enabled objects.";
					property = "MSF_Mission_Loading";			
					control = "Checkbox";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "false";
				};
			};
		};

	};
};