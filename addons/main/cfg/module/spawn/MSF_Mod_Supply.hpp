class MSF_Module_Spawn_Supplies : Module_F
{
	scope = 2;
	displayName = "Spawn - Supplies";
	icon = "a3\ui_f\data\gui\cfg\communicationmenu\supplydrop_ca.paa";
	category = "MSF_Module";
	function = "MSF_fnc_Mod_Spawn_Supplies";
	functionPriority = 1;
	isGlobal = 0;
	isTriggerActivated = 0;
	isDisposable = 1;	
	is3DEN = 0;
	curatorCanAttach = 0;
	canSetArea = 1;
	canSetAreaShape = 1;
	canSetAreaHeight = 1;

	class AttributeValues
	{
		size3[] = { 500, 500, -1 };
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
					value = "3";
				};
			};	
		};
		class MSFSupply
		{
			data = "AttributeSystemSubcategory";				
			control = "SubCategory";
			displayName = "Supply generation option";				
		};
		class SpawnItems
		{
			displayName = "Spawn Supply Cache";
			tooltip = "Spawn a supply box in the Modger area with items (See probabilies below).";
			property = "MSF_Mod_Supply_Items";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "true";	
		};
		class SpawnVehicleAmmo
		{
			displayName = "Spawn Vehicle Ammo";
			tooltip = "Spawn a vehicle ammo crate.";
			property = "MSF_Mod_Supply_VehicleAmmo";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "true";				
		};
		class SpawnFuel
		{
			displayName = "Spawn Fuel Cans";
			tooltip = "Spawn fuel cans.";
			property = "MSF_Mod_Supply_Fuel";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "true";				
		};
		class MSFSupply_Items
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Item generation options";
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
		class MagWeight
		{			
			displayName = "Magazine Likeliness";			
			tooltip = "How likely the system is to add mags to the items inventory. (0.1 disables this catetory)";
			property = "MSF_Mod_Supply_Items_MagWeight";
			control = "SliderZeroToOneSmall";
			expression = "if (_value == 0.1) then { _this setVariable ['%s',0]; } else { _this setVariable ['%s',_value]; };";
			defaultValue = 1;
		};
		class LauncherWeight
		{			
			displayName = "Launcher Ammo Likeliness";			
			tooltip = "How likely the system is to add launcher ammo to the items inventory. (0.1 disables this catetory)";
			property = "MSF_Mod_Supply_Items_LauncherWeight";
			control = "SliderZeroToOneSmall";
			expression = "if (_value == 0.1) then { _this setVariable ['%s',0]; } else { _this setVariable ['%s',_value]; };";
			defaultValue = 1;
		};
		class GrenadeWeight
		{			
			displayName = "Grenades Likeliness";			
			tooltip = "How likely the system is to add grenades to the items inventory. (0.1 disables this catetory)";
			property = "MSF_Mod_Supply_Items_GrenadeWeight";
			control = "SliderZeroToOneSmall";
			expression = "if (_value == 0.1) then { _this setVariable ['%s',0]; } else { _this setVariable ['%s',_value]; };";
			defaultValue = 1;			
		};
		class MedicalWeight
		{			
			displayName = "Medical Likeliness";			
			tooltip = "How likely the system is to add medical to the items inventory. (0.1 disables this catetory)";
			property = "MSF_Mod_Supply_Items_MedicalWeight";
			control = "SliderZeroToOneSmall";
			expression = "if (_value == 0.1) then { _this setVariable ['%s',0]; } else { _this setVariable ['%s',_value]; };";
			defaultValue = 1;
		};
		class FoodWeight
		{			
			displayName = "Food Likeliness";			
			tooltip = "How likely the system is to add food to the items inventory. (0.1 disables this catetory)";
			property = "MSF_Mod_Supply_Items_FoodWeight";
			control = "SliderZeroToOneSmall";
			expression = "if (_value == 0.1) then { _this setVariable ['%s',0]; } else { _this setVariable ['%s',_value]; };";
			defaultValue = 1;
		};
		class MSFSupply_VehicleAmmo
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Vehicle Ammo";
		};
		class VicAmmoMin
		{
			displayName = "Minimum Ammo Supply";
			tooltip = "Minimum vehicle ammo supply in box.";
			property = "MSF_Mod_Supply_VicAmmo_Min";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "500";
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
			defaultValue = "1000";
			validate = "number";
			typeName = "NUMBER";		
		};
		class MSFSupply_Fuel
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Fuel Canisters";
		};
		class FuelCount
		{
			displayName = "Number of Fuel Cans";
			tooltip = "Number of Fuel Cans to spawn.";
			property = "MSF_Mod_Supply_Fuel_Count";
			control = "EditShort";
			expression = "if (_value > 0 && _value < 7) then { _this setVariable ['%s',_value]; } else { _this setVariable ['%s',3]; }";
			defaultValue = "5";
			validate = "number";
			typeName = "NUMBER";		
		};

		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Spawns supplies on the modules position.  The modules size determines the area units need to be in for the module to spawn.";
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