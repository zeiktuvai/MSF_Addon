class CfgFunctions
{
    class MSF
	{
		class MSF_Escape
		{
			file = "z\msf\addons\sys_escape\fnc";
			class Esc_Init {};
		};
		class MSF_Escape_System
		{
			file = "z\msf\addons\sys_escape\fnc\system";
			class Esc_GetEnemyStrength {};
		};
		class MSF_Escape_UI
		{
			file = "z\msf\addons\sys_escape\fnc\ui";
			class Esc_InitStatusDisplay {};
			class Esc_GetStrengthText {};
			class Esc_GetNotorietyText {};
		};
		// class Initialization
		// {
		// 	file = "z\msf\addons\fnc";
		// 	class Init {};
		// 	class MissionInit
		// 	{				
		// 		postInit = 1;
		// 	};
		// };
	};
};