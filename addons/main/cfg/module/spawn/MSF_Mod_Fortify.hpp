class MSF_Module_Spawn_Fortify : Module_F
{
	scope = 2;
	displayName = "Spawn - Fortify Area";
	icon = "a3\ui_f\data\map\mapcontrol\bunker_ca.paa";
	category = "MSF_Module";
	function = "MSF_fnc_Mod_Spawn_Fortify";
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
		class Activation
		{
			displayName = "Spawn Activation";
			tooltip = "Sets the activation type for the activation trigger spawning the patrol.";
			control = "TriggerActivation";
			property = "MSF_Module_InfPatrol_Act";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "none";
		};
		class ActivationType
		{
			displayName = "Spawn Activation Type";
			tooltip = "Sets the presence type for the activation trigger.";
			control = "ActivationType";
			property = "MSF_Module_InfPatrol_ActType";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "present";
		};
        class Side
		{
			displayName = "Spawn Side";
			tooltip = "Faction to spawn the patrol in.";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
			property = "MSF_Module_InfPatrol_Side";
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
		class SpawnImmediately
		{
			displayName = "Spawn on Start";
			tooltip = "When checked, this makes the fortify activate as soon as the mission starts.";
			property = "MSF_Mod_Fortify_SpawnImmediately";			
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";					
			defaultValue = "false";
		};
        class MSFFortify_Building
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Building Fortification Options";
		};
		class BuildingEnable
		{
			displayName = "Enable Building Fortification";
			tooltip = "Spawn enemies in buildings within the module area. (If there are no buildings, no enemies will spawn).";
			property = "MSF_Mod_Fortify_Building_Enable";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "false";				
		};
		class BuildingNum
		{
			displayName = "Number to Spawn";
			tooltip = "Number of buildings to fortify (1-10).";
			property = "MSF_Mod_Fortify_Building_Num";
			control = "EditShort";
			expression = "if (_value > 0 && _value < 11) then { _this setVariable ['%s',_value]; } else { _this setVariable ['%s',5]; }";
			defaultValue = "5";
			validate = "number";
			typeName = "NUMBER";
		};
		class BuildingProbability
		{
			displayName = "Spawn Chance";
			tooltip = "Percent chance that patrols will spawn";
			property = "MSF_Mod_Fortify_Building_Probability";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;				
		};
		class MSFFortify_Vics
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Area Fortification Vechicles";
		};
		class VehicleEnable
		{
			displayName = "Enable Vehicles";
			tooltip = "Spawn vehicles in the fortification area.";
			property = "MSF_Mod_Fortify_Vehicle_Enable";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "false";				
		};
		class VehicleNum
		{
			displayName = "Number to Spawn";
			tooltip = "Number of vehicles to spawn.";
			property = "MSF_Mod_Fortify_Vehicle_Num";
			control = "EditShort";
			expression = "if (_value > 0 && _value < 11) then { _this setVariable ['%s',_value]; } else { _this setVariable ['%s',2]; }";
			defaultValue = "2";
			validate = "number";
			typeName = "NUMBER";		
		};
		class VicFillPercentage
		{
			displayName = "Chance of full vehicle";
			tooltip = "This percentage sets the chance that the spawned vehicle will be full of infantry.";
			property = "MSF_Mod_Fortify_VicFillPercentage";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 0;				
		};
		class VehicleProbability
		{
			displayName = "Spawn Chance";
			tooltip = "Percent chance that patrols will spawn";
			property = "MSF_Mod_Fortify_Vehicle_Probability";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;				
		};
		class MSFFortify_Armor
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Area Fortification Armored Vehicles";
		};
		class ArmorEnable
		{
			displayName = "Enable Armored Vehicles";
			tooltip = "Spawn armored vehicles in the fortification area.";
			property = "MSF_Mod_Fortify_Armor_Enable";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "false";				
		};
		class ArmorNum
		{
			displayName = "Number to Spawn";
			tooltip = "Number of armored vehicles to spawn.";
			property = "MSF_Mod_Fortify_Armor_Num";
			control = "EditShort";
			expression = "if (_value > 0 && _value < 5) then { _this setVariable ['%s',_value]; } else { _this setVariable ['%s',2]; }";
			defaultValue = "2";
			validate = "number";
			typeName = "NUMBER";		
		};
		class ArmorProbability
		{
			displayName = "Spawn Chance";
			tooltip = "Percent chance that patrols will spawn";
			property = "MSF_Mod_Fortify_Armor_Probability";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;				
		};
		class MSFFortify_Static
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Area Fortification Static Turret Emplacements";
		};
		class StaticEnable
		{
			displayName = "Enable Static Turrets";
			tooltip = "Spawn turret emplacements in the fortification area.";
			property = "MSF_Mod_Fortify_Static_Enable";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "false";				
		};
		class StaticNum
		{
			displayName = "Number to Spawn";
			tooltip = "Number of turret emplacements to spawn. (Capped at 10)";
			property = "MSF_Mod_Fortify_Static_Num";
			control = "EditShort";
			expression = "if (_value > 0 && _value < 10) then { _this setVariable ['%s',_value]; } else { _this setVariable ['%s',2]; }";
			defaultValue = "2";
			validate = "number";
			typeName = "NUMBER";		
		};
		class StaticProbability
		{
			displayName = "Spawn Chance";
			tooltip = "Percent chance that patrols will spawn";
			property = "MSF_Mod_Fortify_Static_Probability";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;				
		};
		// class MSFFortify_Patrol
		// {
		// 	data = "AttributeSystemSubcategory";
		// 	control = "SubCategory";
		// 	displayName = "Area Fortification Infantry Patrols";
		// };
		// class PatrolEnable
		// {
		// 	displayName = "Enable area patrols";
		// 	tooltip = "Spawn patrols in the fortification area.";
		// 	property = "MSF_Mod_Fortify_Patrol_Enable";
		// 	control = "Checkbox";
		// 	expression = "_this setVariable ['%s',_value];";
		// 	defaultValue = "false";				
		// };
		// class patrolNum
		// {
		// 	displayName = "Number to Spawn";
		// 	tooltip = "Number of patrols to spawn. (capped at 5)";
		// 	property = "MSF_Mod_Fortify_patrol_Num";
		// 	control = "EditShort";
		// 	expression = "if (_value > 0 && _value < 5) then { _this setVariable ['%s',_value]; } else { _this setVariable ['%s',2]; }";
		// 	defaultValue = "2";
		// 	validate = "number";
		// 	typeName = "NUMBER";		
		// };
		// class PatrolProbability
		// {
		// 	displayName = "Spawn Chance";
		// 	tooltip = "Percent chance that patrols will spawn";
		// 	property = "MSF_Mod_Fortify_Patrol_Probability";
		// 	control = "Slider";
		// 	expression = "_this setVariable ['%s',_value];";
		// 	defaultValue = 1;				
		// };
		class MSFFortify_Air
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Area Fortification Air unit attack";
		};
		class AirEnable
		{
			displayName = "Enable Air Units";
			tooltip = "Spawn air units that fly to the module area, then seek and destroy.";
			property = "MSF_Mod_Fortify_Air_Enable";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "false";				
		};
		class AirNum
		{
			displayName = "Number to Spawn";
			tooltip = "Number of air units to spawn. (capped at 5)";
			property = "MSF_Mod_Fortify_Air_Num";
			control = "EditShort";
			expression = "if (_value > 0 && _value < 5) then { _this setVariable ['%s',_value]; } else { _this setVariable ['%s',2]; }";
			defaultValue = "2";
			validate = "number";
			typeName = "NUMBER";		
		};
		class AirProbability
		{
			displayName = "Spawn Chance";
			tooltip = "Percent chance that air units will spawn";
			property = "MSF_Mod_Fortify_Air_Probability";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;				
		};
    	class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Fortifies area within module. Module area MUST be greater than 500 for the module to function. The modules size determines the area units need to be in for the module to spawn.";
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