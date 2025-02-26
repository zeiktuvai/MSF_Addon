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
				class EnableTFAR
				{
					displayName = "Enable TFAR Radios";
					tooltip = "When enabled, an appropriate TFAR radio will be equipped to all MSF Units. (When disabled a standard radio is used instead)";
					property = "MSF_Radio_TFAR";	
					control = "Checkbox";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "false";
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
				class IntelSys
				{
					data = "AttributeSystemSubcategory";
					control = "SubCategory";
					displayName = "Intel System Options";
				};
				class MSF_Intel_EnableDiscovery
				{
					displayName = "Enable Location Discovery";
					tooltip = "When enabled, intel items will automatically be discovered by players when near. (This will not activate notfications or tasks).";
					property = "MSF_Intel_EnableDiscovery";
					control = "Checkbox";
					expression = "_this setVariable ['%s',_value];";					
					defaultValue = "true";
				};	
			};
		};		
	};		
};