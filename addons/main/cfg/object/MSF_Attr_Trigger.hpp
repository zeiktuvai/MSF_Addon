class CfgNonAIVehicles
{
	class EmptyDetector;
	class MSFTrigger : EmptyDetector
	{		
		displayName = "Trigger MSF Patrol";
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
						value = 1;
					};
					class West
					{
						name = "West";
						tooltip = "BLUFOR";
						value = 2;
					};
				};	
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
			class MSF_Trig_Patrol_Group
			{
				displayName = "CfgGroups Entry Name";
				tooltip = "Name of group to be spawned for patrol from CfgGroup";
				property = "MSF_Trig_Patrol_Group";
				control = "EditCode";
				expression = "_this setVariable ['%s',_value];";
				defaultValue = "getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'AFRF_Classes' >> 'Groups');";
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
			class MSF_Trig_Patrol_Vic_Types
			{
				displayName = "Vehicle Type Class Names";
				tooltip = "Array of vehicle class names. i.e. [""Jeep"",""Truck""]";
				property = "MSF_Trig_Patrol_Vic_Types";
				control = "EditCode";
				expression = "_this setVariable ['%s',_value];";
				defaultValue = "getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'AFRF_Classes' >> 'Vehicles');";
			};

		};		
	};
	class MSFTriggeFortify : EmptyDetector
	{		
		displayName = "Trigger MSF Fortify";
		class Attributes
		{
			class MSF_Trig_Fortify_Enable
			{
				displayName = "Enable Area Fortification";
				tooltip = "Enables the area fortification system for this trigger.";
				property = "MSF_Trig_Fortify_Enable";
				control = "CheckboxState";
				expression = "_this setVariable ['%s',_value];";
				defaultValue = "true";				
			};
			class MSF_Trig_Fortify_Side
			{
				displayName = "Side";
				tooltip = "Faction to spawn units in.";
				property = "MSF_Trig_Fortify_Side";
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
						value = 1;
					};
					class West
					{
						name = "West";
						tooltip = "BLUFOR";
						value = 2;
					};
				};	
			};
			class MSFFortify_Building
			{
				data = "AttributeSystemSubcategory";
				control = "SubCategory";
				displayName = "Building Fortification Options";
			};
			class MSF_Trig_Fortify_Building_Enable
			{
				displayName = "Enable Area Fortification";
				tooltip = "Spawn enemies in buildings in this trigger. (If there are no buildings, no enemies will spawn).";
				property = "MSF_Trig_Fortify_Building_Enable";
				control = "Checkbox";
				expression = "_this setVariable ['%s',_value];";
				defaultValue = "true";				
			};
			class MSF_Trig_Fortify_Building_Num
			{
				displayName = "Number to Spawn";
				tooltip = "Number of buildings to fortify (1-10).";
				property = "MSF_Trig_Fortify_Building_Num";
				control = "EditShort";
				expression = "if (_value > 0 && _value < 11) then { _this setVariable ['%s',_value]; } else { _this setVariable ['%s',5]; }";
				defaultValue = "false";				
			};
			class MSFFortify_Vics
			{
				data = "AttributeSystemSubcategory";
				control = "SubCategory";
				displayName = "Area Fortification Vechicles";
			};
			class MSF_Trig_Fortify_Vehicle_Enable
			{
				displayName = "Enable Vehicles ";
				tooltip = "Spawn vehicles in the fortification area.";
				property = "MSF_Trig_Fortify_Vehicle_Enable";
				control = "Checkbox";
				expression = "_this setVariable ['%s',_value];";
				defaultValue = "true";				
			};
			class MSF_Trig_Fortify_Vehicle_Num
			{
				displayName = "Number to Spawn";
				tooltip = "Number of vehicles to spawn.";
				property = "MSF_Trig_Fortify_Vehicle_Num";
				control = "EditShort";
				expression = "if (_value > 0 && _value < 11) then { _this setVariable ['%s',_value]; } else { _this setVariable ['%s',2]; }";
				defaultValue = "false";				
			};
		};
	};
};