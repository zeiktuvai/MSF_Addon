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
		class MSFSpawnProps
		{
			displayName = "MSF Spawn Properties";			
			class Attributes
			{
				class UnitLists
				{
					displayName = "Unit Lists";
					data = "AttributeSystemSubcategory";
					control = "SubCategoryDesc1";
					description = "Unit class names used for spawning enemy units.";
				};
				class PatrolVicTypes
				{
					displayName = "List of Vehicles to spawn";
					tooltip = "List of enemy vehicles to spawn in triggers.";
					property = "MSFProp_Vic_Types";
					control = "EditCodeMulti3";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'AFRF_Classes' >> 'Vehicles');";
				};
				class PatrolGroupTypes
				{
					displayName = "List of Groups to spawn";
					tooltip = "List of enemy groups to spawn in triggers.";
					property = "MSFProp_Group_Types";
					control = "EditCodeMulti3";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'AFRF_Classes' >> 'Groups');";
				};
				class ArmorTypes
				{
					displayName = "List of Armor to Spawn";
					tooltip = "List of enemy armor to spawn in triggers.";
					property = "MSFProp_Armor_Types";
					control = "EditCodeMulti3";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'AFRF_Classes' >> 'Armor');";
				};
				class TurretTypes
				{
					displayName = "List of Turrets to Spawn";
					tooltip = "List of enemy turrets to spawn in triggers.";
					property = "MSFProp_Turrets_Types";
					control = "EditCodeMulti3";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'AFRF_Classes' >> 'Turrets');";
				};
				class UnitTypes
				{
					displayName = "List of units";
					tooltip = "List of enemy units to spawn in vehicles.";
					property = "MSFProp_Unit_Types";
					control = "EditCodeMulti3";
					expression = "_this setVariable ['%s',_value];";
					defaultValue = "getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'AFRF_Classes' >> 'Units');";
				};
			};
		};
	};
};