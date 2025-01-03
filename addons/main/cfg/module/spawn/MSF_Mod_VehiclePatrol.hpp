class MSF_Module_Spawn_VehiclePatrol : Module_F
{
	scope = 2;
	displayName = "Spawn - Vehicle Patrol";
	icon = "a3\ui_f\data\gui\rsc\rscdisplaygarage\car_ca.paa";
	category = "MSF_Module";
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
        class CombatMode
		{
			displayName = "Spawn Behavior";
			tooltip = "Controls how and when the patrol will engage enemy targets.";
			control = "CombatModeGroup";
			property = "MSF_Module_InfPatrol_cMode";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "yellow";
		};
		class Behavior
		{
			displayName = "Spawn Combat Mode";
			tooltip = "Behavior pattern of the patrol.";
			control = "BehaviourGroup";
			property = "MSF_Module_InfPatrol_Behav";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "aware";
		};
		class Speed
		{
			displayName = "Spawn Speed Mode";
			tooltip = "Speed mode of the patrol.";
			control = "SpeedModeGroup";
			property = "MSF_Module_InfPatrol_Speed";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "normal";
		};
		class SpawnCount
		{
			displayName = "Spawn two patrols";
			tooltip = "Adds a second spawned patrol on activation. (Could get weird if trigger area is too small).";
			control = "Checkbox";
			property = "MSF_Module_InfPatrol_SpawnC";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "false";				
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