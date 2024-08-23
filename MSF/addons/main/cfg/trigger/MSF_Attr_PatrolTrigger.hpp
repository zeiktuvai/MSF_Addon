class MSFTrigger : EmptyDetector
{		
	displayName = "Trigger MSF Patrol";
	class Attributes
	{
		class MSFPatrols
		{
			data = "AttributeSystemSubcategory";				
			control = "SubCategoryDesc1";
			displayName = "Patrol Options";				
			description = "Be sure to set the trigger activation properties, or units won't spawn.";
		};
		class MSF_Trig_Patrol_CombatMode
		{
			displayName = "Spawn Behavior";
			tooltip = "Controls how and when the patrol will engage enemy targets.";
			property = "MSF_Trig_Patrol_CombatMode";
			control = "CombatModeGroup";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "2";		
			//"YELLOW"
		};
		class MSF_Trig_Patrol_Behav
		{
			displayName = "Spawn Combat Mode";
			tooltip = "Behavior pattern of the patrol.";
			property = "MSF_Trig_Patrol_Behav";
			control = "BehaviourGroup";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "1";
			//"AWARE"
		};
		class MSF_Trig_Patrol_Speed
		{
			displayName = "Spawn Speed Mode";
			tooltip = "Speed mode of the patrol.";
			property = "MSF_Trig_Patrol_Speed";
			control = "SpeedModeGroup";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "normal";
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
		class MSF_Trig_Patrol_WaypointCount
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
		class MSF_Trig_Patrol_Side
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
		class MSF_Trig_Patrol_HeightLimit
		{
			displayName = "Disable Trigger Height Limit";
			tooltip = "All triggers that spawn units (Patrol, Fortify, Wave Defense and Supply) are limited to 50m height to prevent mass trigger activiation as aircraft zoom past.  Enabling this removes that limit.";
			property = "MSF_Trig_Patrol_HeightLimit";			
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";					
			defaultValue = "false";
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
			displayName = "Enable Infantry Patrols";
			tooltip = "Creates an infantry patrol with random waypoints in the trigger area. (Works best with smaller triggers [area < 2000]. Does not work if trigger has no area)";
			property = "MSF_Trigger_Patrol";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value]; [_this, _value] call MSF_fnc_CheckNotifyTriggerHasArea;";
			defaultValue = "false";				
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
	};		
};