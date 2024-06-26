class MSFProperties
{
	displayName = "MSF Properties";
	display = "Display3DENEditAttributes";
	class AttributeCategories
	{
		class MSFInventoryProperties
		{
			displayName = "MSF Inventory Properties";			
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
					displayName = "Launcher Ammo types";
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
		class MSFPatrolProps
		{
			displayName = "MSF Patrol Properties";			
			class Attributes
			{
				class PatrolHelper
				{
					displayName = "Patrol Spawning";
					data = "AttributeSystemSubcategory";
					control = "SubCategoryDesc1";
					description = "Patrol spawning class names.";
				};
				class PatrolVicTypes
				{
					displayName = "List of Vehicles to spawn.";
					tooltip = "List of enemy vehicles to spawn in triggers.";
					property = "MSFProp_Vic_Types";
					control = "EditCodeMulti3";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'Vehicles');";
				};
				class PatrolGroupTypes
				{
					displayName = "List of Groups to spawn.";
					tooltip = "List of enemy groups to spawn in triggers.";
					property = "MSFProp_Group_Types";
					control = "EditCodeMulti3";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'Groups');";
				};
			};
		};
	};
};