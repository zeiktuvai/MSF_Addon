class MSFSettings
{
	displayName = "MSF Settings";
	display = "Display3DENEditAttributes";
	class AttributeCategories
	{
		class MSFBase
		{
			displayName = "MSF Options";
			class Attributes
			{
				// class OperationName
				// {
				// 	displayName = "Operation Name";
				// 	tooltip = "Sets the...";
				// 	property = "MSF_Mission_OpName";
				// 	control = "Edit";							
				// 	defaultValue = "Operation";
				// 	validate = "variable";
				// };
				class EnableGMAct
				{
					displayName = "Enable GM Actions";
					tooltip = "Adds an ACE menu option called GM Actions to any player unit with the IsGM attribute set true.";
					property = "MSF_Mission_GM";			
					control = "Checkbox";							
					defaultValue = false;
				};
				class EnableEndMission
				{
					displayName = "Enable End Mission Action";
					tooltip = "Adds an ACE menu option called End Mission when a specific trigger is activated.";
					property = "MSF_Mission_EndMission";			
					control = "Checkbox";							
					defaultValue = false;
				};
				class EndTriggerName
				{
					displayName = "Ending Trigger Name";
					tooltip = "The variable name of the trigger that ends the mission (For this to work it should not be synced to a scenario end module, or call BIS_fnc_EndMission) If 'End Mission Action' is enabled then this is required!";
					property = "MSF_Mission_EndTrig";
					control = "Edit";							
					defaultValue = "trig_end_mission";
					validate = "variable";
				};
				class EnablementCategory
				{
					data = "AttributeSystemSubcategory";
					control = "SubCategory";
					displayName = "Loadouts and Uniforms";
				};
				class NATOMissionUniforms
				{
					displayName = "Uniform";
					tooltip = "Selects the uniform color for the NATO faction.";
					property = "MSF_Mission_NATO_Uniforms";
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
				};
				class MissionNumber
				{
					displayName = "Mission Number";
					tooltip = "Sets the mission number in the series. (i.e. If this is mission 3 of a 10 mission series then set this to 3 so that it loads persistence data from mission 2).";
					property = "MSF_Mission_Number";			
					control = "EditShort";
					validate = "number";
					defaultValue = 1;
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
					defaultValue = false;
				};
				class EnableLoading
				{
					displayName = "Enable Loading";
					tooltip = "Enables loading persistence data on enabled objects.";
					property = "MSF_Mission_Loading";			
					control = "Checkbox";							
					defaultValue = false;
				};
			};
		};
	};		
};
