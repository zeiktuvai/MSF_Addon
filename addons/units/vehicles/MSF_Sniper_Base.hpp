class B_T_Sniper_F;
class MSF_Sniper_Base : B_T_Sniper_F
{
	displayName = "Rifleman";
    icon = "iconMan";
	role = "MSFAssault";
	author = "Zeik_Tuvai";
	faction = "BLU_F_MSF";
	scope = 0;
	class eventhandlers
	{
		class MSF_Init
		{
			init = "[_this select 0] call MSF_fnc_ApplyInsignia; [_this select 0] call MSF_fnc_AddRadio;";
		};
	};
};