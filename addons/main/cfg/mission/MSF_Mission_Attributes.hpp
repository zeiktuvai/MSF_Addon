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
				class EnablementCategory
				{
					data = "AttributeSystemSubcategory";
					control = "SubCategory";
					displayName = "Loadouts and Uniforms";
				};
				class EnableDynLoadout
				{
					displayName = "Enable Dynamic Loadouts";
					tooltip = "This enables automatic starting loadout and respawn loadouts to be applied to player units based on unit class.";
					property = "MSF_Loadout_Dyn_Enable";			
					control = "Checkbox";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "false";
				};
				class NATOMissionUniforms
				{
					displayName = "NATO Faction Uniform";
					tooltip = "Selects the uniform color for the base NATO faction. (Not Pacific or Woodland).";
					property = "MSF_Loadout_NATO_Uniform";
					control = "UniCombo";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "false";
					condition = "objectControllable";
					typeName = "Number";

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
				class EnableUnitPatch
				{
					displayName = "Apply Unit patch on start";
					tooltip = "Applys unit patch to all players on start (WIP: only applys TFY patch as of right now.)";
					property = "MSF_Loadout_UnitPatch";			
					control = "Checkbox";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "true";
				};
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
			};
		};		
	};		
};