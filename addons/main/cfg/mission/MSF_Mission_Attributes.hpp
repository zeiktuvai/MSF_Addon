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
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "false";
				};
				class EnableEndMission
				{
					displayName = "Enable End Mission Action";
					tooltip = "Adds an ACE menu option called End Mission when a specific trigger is activated.";
					property = "MSF_Mission_EndMission";			
					control = "Checkbox";
					expression = "_this setVariable ['%s',_value];";					
					defaultValue = "false";
				};
				class EndTriggerName
				{
					displayName = "Ending Trigger Name";
					tooltip = "The variable name of the trigger that ends the mission (For this to work it should not be synced to a scenario end module, or call BIS_fnc_EndMission) If 'End Mission Action' is enabled then this is required!";
					property = "MSF_Mission_EndTrig";
					control = "Edit";
					expression = "_this setVariable ['%s',_value];";			
					defaultValue = "trig_end_mission";
					validate = "variable";
				};
				class MSF_Mission_VicCustomization
				{
					displayName = "Persist Vehicle Customizations";
					tooltip = "When a vehicle has been customized in the garage, this presists those changes when vehicles are respawned with a vehicle respawn module.";
					property = "MSF_Mission_VicCustomization";			
					control = "Checkbox";
					expression = "_this setVariable ['%s',_value];";					
					defaultValue = "true";
				};
				class MSF_Mission_Zeus
				{
					displayName = "Add units to Zeus";
					tooltip = "Add all spawned units to every zeus module placed in the mission.";
					property = "MSF_Mission_Zeus";			
					control = "Checkbox";
					expression = "_this setVariable ['%s',_value];";					
					defaultValue = "true";
				};
				// class EnablementCategory
				// {
				// 	data = "AttributeSystemSubcategory";
				// 	control = "SubCategory";
				// 	displayName = "Loadouts and Uniforms";
				// };				
				// class EnableUnitPatch
				// {
				// 	displayName = "Apply Unit patch on start";
				// 	tooltip = "Applys unit patch to all players on start (WIP: only applys TFY patch as of right now.)";
				// 	property = "MSF_Loadout_UnitPatch";			
				// 	control = "Checkbox";
				// 	expression = "_this setVariable ['%s',_value];";
				// 	defaultValue = "true";
				// };
				class MultiplayerCategory
				{
					data = "AttributeSystemSubcategory";
					control = "SubCategory";
					displayName = "Multiplayer Options";
				};
				class EnableRoP
				{
					displayName = "Enable Respawn on Player";
					tooltip = "This enables setting each player on the units side as a respawn position.";
					property = "MSF_Multi_RoP";	
					control = "Checkbox";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "false";
				};
				class EnableJnP
				{
					displayName = "Enable Join near Player";
					tooltip = "When enabled, any player that joins after mission start will spawn near other players instead of at the start point.";
					property = "MSF_Multi_JnP";	
					control = "Checkbox";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "false";
				};
				class UnitRadio
				{
					data = "AttributeSystemSubcategory";
					control = "SubCategory";
					displayName = "Communications";
				};
				class EnableTFAR
				{
					displayName = "Enable TFAR Radios";
					tooltip = "When enabled, an appropriate TFAR radio will be equipped to all MSF Units. (When disabled a standard radio is used instead)";
					property = "MSF_Radio_TFAR";	
					control = "Checkbox";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "false";
				};
			};
		};		
	};		
};