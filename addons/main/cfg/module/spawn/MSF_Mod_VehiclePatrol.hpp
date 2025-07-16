class MSF_Module_Spawn_VehiclePatrol : Module_F
{
	scope = 2;
	displayName = "Vehicle Patrol";
	icon = "a3\ui_f\data\gui\rsc\rscdisplaygarage\car_ca.paa";
	category = "MSF_Module_Spawn";
	function = "MSF_fnc_Mod_InfantryVehiclePatrol";
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
		size3[] = { 1000, 1000, -1 };
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
			property = "MSF_Module_vicPatrol_ActSide";
			defaultValue = 3;
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
        class CombatMode
		{
			displayName = "Spawn Behavior";
			tooltip = "Controls how and when the patrol will engage enemy targets.";
			control = "CombatModeGroup";
			property = "MSF_Module_vicPatrol_cMode";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "'yellow'";
		};
		class Behavior
		{
			displayName = "Spawn Combat Mode";
			tooltip = "Behavior pattern of the patrol.";
			control = "BehaviourGroup";
			property = "MSF_Module_vicPatrol_Behav";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "'aware'";
		};
		class Speed
		{
			displayName = "Spawn Speed Mode";
			tooltip = "Speed mode of the patrol.";
			control = "SpeedModeGroup";
			property = "MSF_Module_vicPatrol_Speed";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "normal";
		};
		class SpawnCount
		{
			displayName = "Spawn two patrols";
			tooltip = "Adds a second spawned patrol on activation. (Could get weird if trigger area is too small).";
			control = "Checkbox";
			property = "MSF_Module_vicPatrol_SpawnC";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "false";				
		};
		class Side
		{
			displayName = "Spawn Side";
			tooltip = "Faction to spawn the patrol in.";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
			property = "MSF_Module_vicPatrol_Side";
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
					
		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Generates a vehicle patrol in the area of the module with a random path along the nearest roads. Module area MUST be larger than 500 for the module to function. The modules size determines the area units need to be in for the module to spawn.";
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
