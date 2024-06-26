class CfgNonAIVehicles
{
	class EmptyDetector;
	class MSFTrigger : EmptyDetector
	{		
		displayName = "MSF Trigger";
		class Attributes
		{
			class MSFPatrols
			{
				data = "AttributeSystemSubcategory";
				control = "SubCategory";
				displayName = "Patrol Options";
			};
			class MSF_Trig_Patrol_Zeus
			{
				displayName = "Add Generated Patrols to Zeus";
				tooltip = "If checked, the generated patrols will be added to all Zeus's (curators) in the mission.";
				property = "MSF_Trig_Patrol_Zeus";
				control = "Checkbox";
				expression = "_this setVariable ['%s',_value];";
				defaultValue = "true";				
			};
			class MSF_Trig_Patrol_CombatMode
			{
				displayName = "Spawn Behavior";
				tooltip = "Controls how and when the patrol will engage enemy targets.";
				property = "MSF_Trig_Patrol_CombatMode";
				control = "CombatModeGroup";
				expression = "_this setVariable ['%s',_value];";
				defaultValue = "YELLOW";				
			};
			class MSF_Trig_Patrol_Behav
			{
				displayName = "Spawn Combat Mode";
				tooltip = "Behavior pattern of the patrol.";
				property = "MSF_Trig_Patrol_Behav";
				control = "BehaviourGroup";
				expression = "_this setVariable ['%s',_value];";
				defaultValue = "SAFE";				
			};
			class MSFInfPatrols
			{
				data = "AttributeSystemSubcategory";
				control = "SubCategoryDesc1";
				displayName = "Random Infantry Patrol";
				description = "Generates a random patrol in the area of the trigger. (Only if Vehicle patrol is disabled.)";
			};
			class MSF_Trigger_Patrol
			{				
				displayName = "Enable Patrols";
				tooltip = "Creates patrol with random waypoints in the trigger area. (Works best with smaller triggers [area < 2000]. Does not work if trigger has no area)";
				property = "MSF_Trigger_Patrol";
				control = "Checkbox";
				expression = "_this setVariable ['%s',_value]; [_this, _value] call MSF_fnc_CheckNotifyTriggerHasArea;";
				defaultValue = "false";				
			};
			class MSF_Trig_Patrol_Group
			{
				displayName = "CfgGroups Entry Name";
				tooltip = "Name of group to be spawned for patrol from CfgGroup";
				property = "MSF_Trig_Patrol_Group";
				control = "EditCode";
				expression = "_this setVariable ['%s',_value];";
				defaultValue = "getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'Groups');";
			};
			class MSF_Trig_Patrol_Despawn
			{
				displayName = "Despawn on Player exit";
				tooltip = "If checked, the spawned group will be removed when players leave the trigger area (for resource conservation). If trigger is repeatable, group will spawn again on enter.";
				property = "MSF_Trig_Patrol_Despawn";
				control = "Checkbox";
				expression = "_this setVariable ['%s',_value];";
				defaultValue = "false";				
			};
			class MSF_Trig_Patrol_SpawnCount
			{
				displayName = "Spawn two patrols";
				tooltip = "Adds a second spawned patrol on activation. (Could get weird if trigger area is too small).";
				property = "MSF_Trig_Patrol_SpawnCount";
				control = "Checkbox";
				expression = "_this setVariable ['%s',_value];";
				defaultValue = "false";				
			};
			class MSFVicPatrols
			{
				data = "AttributeSystemSubcategory";
				control = "SubCategoryDesc2";
				displayName = "Area Vehicle Patrols";
				description = "Generates a vehicle patrol in the (mostly) area of the trigger that tries to make waypoints on roads. (Only if Inf patrol is disabled.)";
			};
			class MSF_Trigger_Patrol_Vic
			{				
				displayName = "Enable Vehicle Patrols";
				tooltip = "Creates a vehicle patrol in the area (mostly) of the trigger.  Best for triggers 1000-3000 in diameter.";
				property = "MSF_Trigger_Patrol_Vic";
				control = "Checkbox";
				expression = "_this setVariable ['%s',_value]; [_this, _value] call MSF_fnc_CheckNotifyTriggerHasArea;";
				defaultValue = "false";				
			};
			class MSF_Trig_Patrol_Vic_Types
			{
				displayName = "Vehicle Type Class Names";
				tooltip = "Array of vehicle class names. i.e. [""Jeep"",""Truck""]";
				property = "MSF_Trig_Patrol_Vic_Types";
				control = "EditCode";
				expression = "_this setVariable ['%s',_value];";
				defaultValue = "getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'Vehicles');";
			};

		};		
	};
};