class MSF_Module_InfantryPatrol : Module_F
{
	scope = 2;
	displayName = "Random Infantry Patrol";
	icon = "a3\ui_f\data\igui\cfg\simpletasks\types\rifle_ca.paa";
	category = "MSF_Module";
	function = "MSF_fnc_ModTest";
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
        class CombatMode
		{
			displayName = "Spawn Behavior";
			tooltip = "Controls how and when the patrol will engage enemy targets.";
			property = "MSF_Trig_Patrol_CombatMode";
			control = "CombatModeGroup";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "yellow";
		};
		class Behavior
		{
			displayName = "Spawn Combat Mode";
			tooltip = "Behavior pattern of the patrol.";
			property = "MSF_Trig_Patrol_Behav";
			control = "BehaviourGroup";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "aware";
		};
		class Speed
		{
			displayName = "Spawn Speed Mode";
			tooltip = "Speed mode of the patrol.";
			property = "MSF_Trig_Patrol_Speed";
			control = "SpeedModeGroup";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "normal";
		};
		class SpawnCount
		{
			displayName = "Spawn two patrols";
			tooltip = "Adds a second spawned patrol on activation. (Could get weird if trigger area is too small).";
			property = "MSF_Trig_Patrol_SpawnCount";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "false";				
		};
		class WaypointCount
		{
			displayName = "Number of waypoints";
			tooltip = "Sets the number of waypoints to be generated. (Minimum of 4 - Max of 10)";
			property = "MSF_Trig_Patrol_WaypointCount";			
			control = "EditShort";
			expression = "if (_value > 3 && _value < 11) then {_this setVariable ['%s',_value];} else {_this setVariable ['%s',8];};";
			defaultValue = 8;
			validate = "number";
			typeName = "NUMBER";
		};
		class Side
		{
			displayName = "Side";
			tooltip = "Faction to spawn the patrol in.";
			property = "MSF_Trig_Patrol_Side";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
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
		description = "Generates a random patrol in the area of the trigger.";
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