class MSF_Module_Spawn_Supplies : Module_F
{
	scope = 2;
	displayName = "Spawn - Logistics";
	icon = "a3\ui_f\data\gui\cfg\communicationmenu\supplydrop_ca.paa";
	category = "MSF_Module";
	function = "MSF_fnc_Mod_Spawn_Supplies";
	functionPriority = 1;
	isGlobal = 0;
	isTriggerActivated = 0;
	isDisposable = 1;	
	is3DEN = 0;
	curatorCanAttach = 0;
	canSetArea = 0;
	canSetAreaShape = 0;
	canSetAreaHeight = 0;

	class AttributeValues
	{
		size3[] = { 0, 0, -1 };
		isRectangle = 0;
	};

	class Attributes : AttributesBase
	{
		class ActivationSide
		{
			displayName = "Activation Side";
			tooltip = "Faction that will activate this module.";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
			property = "MSF_Module_supply_ActSide";
			defaultValue = 1;
			typeName = "Number";
			class Values
			{
				class East
				{
					name = "East";
					tooltip = "OPFOR";
					value = 0;
				};
				class Independant
				{
					name = "Independant";
					tooltip = "Independant";
					value = 2;
				};
				class West
				{
					name = "West";
					tooltip = "BLUFOR";
					value = 1;
				};
				class Player
				{
					name = "AnyPlayer";
					tootip = "AnyPlayer";
					value = 3;
				};
			};	
		};
		class SpawnSide
		{
			displayName = "Enemy Spawn Side";
			tooltip = "Faction that will randomly be spawned as enemies at the location.";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
			property = "MSF_Module_supply_SpawnSide";
			defaultValue = 0;
			typeName = "Number";
			class Values
			{
				class East
				{
					name = "East";
					tooltip = "OPFOR";
					value = 0;
				};
				class Independant
				{
					name = "Independant";
					tooltip = "Independant";
					value = 2;
				};
				class West
				{
					name = "West";
					tooltip = "BLUFOR";
					value = 1;
				};
			};	
		};
		class VictimSide
		{
			displayName = "Victim Spawn Side";
			tooltip = "Faction that will randomly be spawned as dead units at the location.";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
			property = "MSF_Module_supply_VictimSide";
			defaultValue = 2;
			typeName = "Number";
			class Values
			{
				class East
				{
					name = "East";
					tooltip = "OPFOR";
					value = 0;
				};
				class Independant
				{
					name = "Independant";
					tooltip = "Independant";
					value = 2;
				};
				class West
				{
					name = "West";
					tooltip = "BLUFOR";
					value = 1;
				};
			};	
		};
		class SpawnType
		{
			displayName = "Spawn Type";
			tooltip = "Type of supplies location.";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
			property = "MSF_Module_supply_Type";
			defaultValue = "'Supply'";
			typeName = "Text";
			class Values
			{
				class Supply
				{
					name = "Supply Cache";
					tooltip = "Supply Cache (Items or Vic Ammo/Fuel)";
					value = "Supply";
				};
				class Medical
				{
					name = "Medical Supplies";
					tooltip = "Medical Supplies";
					value = "Medical";
				};
				class Weapons
				{
					name = "Weapons Cache";
					tooltip = "Weapons Cache";
					value = "Armory";
				};
				class UVic
				{
					name = "Unmanned Vehicle";
					tootip = "Unmanned Vehicle";
					value = "Vehicle";
				};
				class UArmor
				{
					name = "Unmanned Armor";
					tootip = "Unmanned Armor";
					value = "Armor";
				};
				class Food
				{
					name = "Food Cache";
					tooltip = "Food/water supplies";
					value = "Food";
				};
				class Random
				{
					name = "Random";
					tooltip = "Random Type";
					value = "Random";
				};
			};	
		};	
		
		class MSFSupply_Items
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Item generation (If selected type)";
		};
		class NumItems
		{
			displayName = "Number of Items";
			tooltip = "Sets the number of items to generate in the supply crate.";
			property = "MSF_Mod_Supply_Items_Num";			
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "50";
			validate = "number";
			typeName = "NUMBER";
		};
		class MSFSupply_VehicleAmmo
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Vehicle Ammo (If selected type)";
		};
		class VicAmmoMin
		{
			displayName = "Minimum Ammo Supply";
			tooltip = "Minimum vehicle ammo supply in box.";
			property = "MSF_Mod_Supply_VicAmmo_Min";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "250";
			validate = "number";
			typeName = "NUMBER";		
		};
		class VicAmmoMax
		{
			displayName = "Maximum Ammo Supply";
			tooltip = "Maximum vehicle ammo supply in box.";
			property = "MSF_Mod_Supply_VicAmmo_Max";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "750";
			validate = "number";
			typeName = "NUMBER";		
		};
		class Integrations
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Integrations";
		};
		class IntelIntegration
		{
			displayName = "Intel System";
			tooltip = "Automatically add this module to the intel system as an intel item on mission start.";
			property = "MSF_Mod_Supply_Integrate_Intel";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";					
			defaultValue = "true";
		};
		class Sup_IntelProvider
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategoryDesc1";
			displayName = "Intel System Provider";
			description = "Add spawned units to the intel system.";
		};
		class IntelProvider
		{
			displayName = "Intel Provider";
			tooltip = "Automatically add units spawned in with this module as intel providers.";
			property = "MSF_Mod_DU_Integrate_IntelP";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";					
			defaultValue = "false";
		};
		class InteractionChance
		{
			displayName = "Prompt Chance";
			tooltip = "Percent chance that an object will have an interaction prompt to check for intel.";
			property = "MSF_Mod_DU_InteractChance";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 0.7;
		};
		class IntelChance
		{
			displayName = "Chance of Intel";
			tooltip = "Percent chance that an object will have intel.";
			property = "MSF_Mod_DU_IntelChance";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 0.2;
		};

		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Spawns supplies/vehicles based on configuration on the module position.  Activation area is a 400x400 circle.";
		sync[] = { "LocationArea_F", "EmptyDetector" };

		class LocationArea_F
		{
			description[] = {};
			position = 0;
			direction = 0;
			optional = 0;
			duplicate = 1;
			synced[] = { "EmptyDetector" };
		};
	};
};