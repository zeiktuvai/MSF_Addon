class CfgNonAIVehicles
{
	class EmptyDetector
	{		
		class Attributes
		{			
			class MSF_Trigger_Patrol
			{				
				displayName = "MSF: Enable Area Patrol";
				tooltip = "Creates patrol with random waypoints in the trigger area. (Works best with smaller triggers [area < 1000]. Does not work if trigger has no area)";
				property = "MSF_Trigger_Patrol";
				control = "Checkbox";
				expression = "_this setVariable ['%s',_value]; [_this, _value] call MSF_fnc_CheckNotifyTriggerHasArea;";
				defaultValue = "false";				
			};
			class MSF_Trig_Patrol_Group
			{
				displayName = "MSF: CfgGroups Entry Name";
				tooltip = "Name of group to be spawned for patrol from CfgGroup";
				property = "MSF_Trig_Patrol_Group";
				control = "EditCode";
				expression = "if ([_this, _value] call MSF_fnc_SetCfgEntryValidator) then { _this setVariable ['%s',_value]; };";
				defaultValue = "nil";				
			};
			class MSF_Trig_Patrol_Zeus
			{
				displayName = "MSF: Add Patrols to Zeus?";
				tooltip = "If checked, the generated patrols will be added to all Zeus's (curators) in the mission.";
				property = "MSF_Trig_Patrol_Zeus";
				control = "Checkbox";
				expression = "_this setVariable ['%s',_value];";
				defaultValue = "true";				
			};
			class MSF_Trig_Patrol_Despawn
			{
				displayName = "MSF: Despawn on Player exit";
				tooltip = "If checked, the spawned group will be removed when players leave the trigger area (for resource conservation). If trigger is repeatable, group will spawn again on enter.";
				property = "MSF_Trig_Patrol_Despawn";
				control = "Checkbox";
				expression = "_this setVariable ['%s',_value];";
				defaultValue = "false";				
			};
			class MSF_Trig_Patrol_SpawnCount
			{
				displayName = "MSF: Spawn two patrols";
				tooltip = "Adds a second spawned patrol on activation. (Could get weird if trigger area is too small).";
				property = "MSF_Trig_Patrol_SpawnCount";
				control = "Checkbox";
				expression = "_this setVariable ['%s',_value];";
				defaultValue = "false";				
			};
		};		
	};
};