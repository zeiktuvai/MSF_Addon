class MSFSettings
{
	displayName = "MSF Settings";
	display = "Display3DENEditAttributesPreview";
	class AttributeCategories
	{
		class MSFBase
		{
			displayName = "MSF Settings";
			class Attributes
			{
				class OperationName
				{
					displayName = "Operation Name";
					tooltip = "Sets the...";
					property = "missionGroup";
					control = "Edit";							
					defaultValue = "";
					unique = 0;
				};
			};
		};
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
					defaultValue = false;
					unique = 0;
				};
				class EnableSaving
				{
					displayName = "Enable Saving";
					tooltip = "Enables saving persistence data on enabled objects.";
					property = "MSF_Mission_Saving";			
					control = "Checkbox";							
					defaultValue = false;
					unique = 0;
				};
				class EnableLoading
				{
					displayName = "Enable Loading";
					tooltip = "Enables loading persistence data on enabled objects.";
					property = "MSF_Mission_Loading";			
					control = "Checkbox";							
					defaultValue = false;
					unique = 0;
				};
			};
		};
	};		
};
