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
				class PlayerCat
				{
					data = "AttributeSystemSubcategory";
					control = "SubCategory";
					displayName = "Player Options";
				};
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
				class EnableTFAR
				{
					displayName = "Enable TFAR Radios";
					tooltip = "When enabled, an appropriate TFAR radio will be equipped to all MSF Units. (When disabled a standard radio is used instead)";
					property = "MSF_Radio_TFAR";	
					control = "Checkbox";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "false";
				};
				class UAVSpawnInterval
				{
					displayName = "UAV Spawn Delay";
					tooltip = "Sets the delay that players (UAV Operators) must wait before spawning another UAV.";
					property = "MSF_Player_UAVSpawn_Delay";			
					control = "EditShort";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = 900;
					validate = "number";
					typeName = "NUMBER";
				};
				class SpawnCat
				{
					data = "AttributeSystemSubcategory";
					control = "SubCategory";
					displayName = "Spawn Options";
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
				class VicCat
				{
					data = "AttributeSystemSubcategory";
					control = "SubCategory";
					displayName = "Vehicle Options";
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
				class InfiniteFuelTick
				{
					displayName = "Infinite Fuel Interval";
					tooltip = "Sets the interval that the infinite fuel handler will use when refuling enabled vehicles.";
					property = "MSF_Vic_InfiniteFuel_Tick";			
					control = "EditShort";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = 120;
					validate = "number";
					typeName = "NUMBER";
				};
				class InventoryCat
				{
					data = "AttributeSystemSubcategory";
					control = "SubCategory";
					displayName = "Inventory Generation Options";
				};
				class MSF_Mission_Inventory_Mag1
				{
					displayName = "Mag Set 1";
					tooltip = "Enables generating inventory with RHS 5.56, M14 7.62 and similar mags.";
					property = "MSF_Mission_Inventory_Mag1";
					control = "Checkbox";
					expression = "_this setVariable ['%s',_value];";					
					defaultValue = "true";
				};
				class MSF_Mission_Inventory_Mag2
				{
					displayName = "Mag Set 2";
					tooltip = "Enables generating inventory with NATO 6.5mm and similar mags.";
					property = "MSF_Mission_Inventory_Mag2";
					control = "Checkbox";
					expression = "_this setVariable ['%s',_value];";					
					defaultValue = "false";
				};
				class MSF_Mission_Inventory_Mag3
				{
					displayName = "Mag Set 3";
					tooltip = "Enables generating inventory with SCAR 7.62, m240B 76.2 and similar mags.";
					property = "MSF_Mission_Inventory_Mag3";
					control = "Checkbox";
					expression = "_this setVariable ['%s',_value];";					
					defaultValue = "false";
				};	
			};
		};		
	};		
};