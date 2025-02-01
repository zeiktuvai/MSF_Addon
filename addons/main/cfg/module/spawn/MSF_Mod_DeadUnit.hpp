class MSF_Module_Spawn_DeadUnit : Module_F
{
	scope = 2;
	displayName = "Spawn - Empty/Dead Units";
	icon = "A3\Modules_F_Tacops\Data\CivilianPresence\icon32_ca.paa";
	category = "MSF_Module";
	function = "MSF_fnc_Mod_DeadUnit";
	functionPriority = 1;
	isGlobal = 0;
	isTriggerActivated = 0;
	isDisposable = 0;	
	is3DEN = 0;
	curatorCanAttach = 0;
	canSetArea = 1;
	canSetAreaShape = 1;
	canSetAreaHeight = 0;

	class AttributeValues
	{
		size3[] = { 50, 50, -1 };
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
		class InfantryClasses
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Infantry Unit Classes";
		};
		class UnitTypes
		{
			displayName = "Unit Types";
			tooltip = "Faction to spawn dead units from.";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";con = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
			property = "MSF_Module_vicPatrol_ActSide";
			defaultValue = "'Civ_African'";
			typeName = "STRING";
			class Values
			{
				class Civ_African
				{
					name = "Men (Africans)";
					tooltip = "Men (Africans)";
					value = "Civ_African";
					picture = "\a3\Data_f\flags\flag_Altis_co.paa";
				};
				class Civ_Asian
				{
					name = "Men (Asian)";
					tooltip = "Men (Asian)";
					value = "Civ_Asian";
					picture = "\a3\Data_f\flags\flag_Altis_co.paa";
				};
				class Civ_European
				{
					name = "Men (European)";
					tooltip = "Men (European)";
					value = "Civ_European";
					picture = "\a3\Data_f\flags\flag_Altis_co.paa";
				};
				class Civ_Livionian
				{
					name = "Men (Livonian)";
					tooltip = "Men (Livonian)";
					value = "Civ_Livionian";
					picture = "\a3\Data_f_enoch\flags\flag_Enoch_CO.paa";
				};
				class Civ_Tanoan
				{
					name = "Men (Tanoan)";
					tooltip = "Men (Tanoan)";
					value = "Civ_Tanoan";
					picture = "\a3\Data_f_exp\flags\flag_Tanoa_CO.paa";
				};
				class Mil_NATO
				{
					name = "Men (NATO)";
					tooltip = "Men (NATO)";
					value = "Mil_NATO";
					picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
				};
				class Mil_OPFOR
				{
					name = "Men (OPFOR)";
					tooltip = "Men (OPFOR)";
					value = "Mil_OPFOR";
					picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
				};
				class Mil_IND
				{
					name = "Men (Independent)";
					tooltip = "Men (Independent)";
					value = "Mil_IND";
					picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
				};
				class Custom
				{
					name = "Custom";
					tooltip = "Use this option to specify custom classes below.";
					value = "Civ_African";
				};
			};	
		};		
		class UnitClasses
		{
			displayName = "Infantry Classes";
			tooltip = "Array of classes to spawn instead of the default units. (MUST be a valid array).";
			property = "MSF_Mod_DU_Classes";
			control = "EditCode";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "''";
		};
		class Vehicles
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Vehicle Classes";
		};
		class VicClassOverride
		{
			displayName = "Use Default Classes";
			tooltip = "Use default vehicle classes defined in MSF Config or the override module.";
			property = "MSF_Mod_DU_Vics";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";					
			defaultValue = "true";
		};
		class VicClasses
		{
			displayName = "Vehicle Classes";
			tooltip = "Array of classes to spawn instead of the default units. (MUST be a valid array).";
			property = "MSF_Mod_DU_VicClasses";
			control = "EditCode";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "''";
		};
		class Armor
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Armor Classes";
		};
		class ArmorClassOverride
		{
			displayName = "Use Default Classes";
			tooltip = "Use default Armor classes defined in MSF Config or the override module.";
			property = "MSF_Mod_DU_Armor";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";					
			defaultValue = "true";
		};
		class ArmorClasses
		{
			displayName = "Armor Classes";
			tooltip = "Array of classes to spawn instead of the default units. (MUST be a valid array).";
			property = "MSF_Mod_DU_ArmorClasses";
			control = "EditCode";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "''";
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
			tooltip = "Automatically add this location to the intel system as an intel item on mission start.";
			property = "MSF_Mod_DU_Integrate_Intel";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";					
			defaultValue = "true";
		};
		class DU_IntelProvider
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategoryDesc1";
			displayName = "Intel System Provider";
			description = "Add spawned units to the intel system (Non-Civilian Units)";
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
		description = "Works in conjunction with the MSF Dead Infantry placeholder to spawn dead civilians on each placeholder.  Shows when players are in module area, and hides when players leave the module area.";
		sync[] = { "LocationArea_F", "EmptyDetector" };

		class LocationArea_F
		{
			description[] = {};
			position = 1;
			direction = 0;
			optional = 0;
			duplicate = 1;
			synced[] = { "EmptyDetector" };
		};
	};
};