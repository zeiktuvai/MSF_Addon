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
				expression = "_this setVariable ['%s',_value];";
				defaultValue = "false";				
			};
			class MSF_Trig_Patrol_Group
			{
				displayName = "MSF: CfgGroups Entry Name";
				tooltip = "Name of group to be spawned for patrol from CfgGroup";
				property = "MSF_Trig_Patrol_Group";
				control = "EditCode";
				expression = "_this setVariable ['%s',_value]; [_this, _value] call MSF_fnc_SetCfgEntryValidator;";
				defaultValue = "nil";				
			};
		};		
	};
};