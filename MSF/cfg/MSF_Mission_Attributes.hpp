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
					defaultValue = false;
				};
				class EnableEndMission
				{
					displayName = "Enable End Mission Action";
					tooltip = "Adds an ACE menu option called End Mission when a specific trigger is activated.";
					property = "MSF_Mission_EndMission";			
					control = "Checkbox";
					expression = "_this setVariable ['%s',_value];";					
					defaultValue = false;
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
					defaultValue = false;
				};
				class NATOMissionUniforms
				{
					displayName = "NATO Faction Uniform";
					tooltip = "Selects the uniform color for the base NATO faction. (Not Pacific or Woodland).";
					property = "MSF_Loadout_NATO_Uniform";
					control = "UniCombo";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = false;
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
					defaultValue = false;
				};
				class EnableJnP
				{
					displayName = "Enable Join near Player";
					tooltip = "When enabled, any player that joins after mission start will spawn near other players instead of at the start point.";
					property = "MSF_Multi_JnP";	
					control = "Checkbox";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = false;
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
					expression = "_this setVariable ['%s',_value];";
					defaultValue = false;
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
					defaultValue = false;
				};
				class EnableLoading
				{
					displayName = "Enable Loading";
					tooltip = "Enables loading persistence data on enabled objects.";
					property = "MSF_Mission_Loading";			
					control = "Checkbox";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = false;
				};
			};
		};
		class MSFHelpers
		{
			displayName = "MSF Helper Functions";			
			class Attributes
			{
				class InventoryHelper
				{
					displayName = "Inventory Generation";
					data = "AttributeSystemSubcategory";
					control = "SubCategoryDesc2";
					description = "These pre-configured lists are what the inventory generation system uses to pick items to randomly fill enabled objects.";
				};
				class InventoryItems
				{
					displayName = "General item types";
					tooltip = "List of items to use for auto filling containers/vehicles";
					property = "MSF_Helper_Inv_Item";
					control = "EditCodeMulti3";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'items');";
				};
				class InventoryMagList
				{
					displayName = "Magazine types";
					tooltip = "List of mags to use for auto filling containers/vehicles";
					property = "MSF_Helper_Inv_Mag";
					control = "EditCodeMulti3";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'natoStdMags');";
				};
				class InventoryMagLauncher
				{
					displayName = "Launcher Ammmo types";
					tooltip = "List of launcher ammo to use for auto filling containers/vehicles";
					property = "MSF_Helper_Inv_Launcher";
					control = "EditCodeMulti3";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'launcherRounds');";
				};
				class InventoryGrenades
				{
					displayName = "Grenade types";
					tooltip = "List of grenades to use for auto filling containers/vehicles";
					property = "MSF_Helper_Inv_Grenades";
					control = "EditCodeMulti3";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'grenades');";
				};
				class InventoryMedicalList
				{
					displayName = "Medical types";
					tooltip = "List of medical items to use for auto filling containers/vehicles";
					property = "MSF_Helper_Inv_Med";
					control = "EditCodeMulti3";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'aceMedical');";
				};
				class InventoryFoodList
				{
					displayName = "Food types";
					tooltip = "List of food items to use for auto filling containers/vehicles";
					property = "MSF_Helper_Inv_Food";
					control = "EditCodeMulti3";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'aceFood');";
				};
			};
		};
	};		
};