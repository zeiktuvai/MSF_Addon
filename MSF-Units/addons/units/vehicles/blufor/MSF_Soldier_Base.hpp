class B_Soldier_base_f;
class MSF_Soldier_Base : B_Soldier_base_f
{
	displayName = "Rifleman";
    icon = "iconMan";
	role = "MSFAssault";
	author = "Zeik_Tuvai";
	faction = "BLU_F_MSF";
	weapons[] = {
        "MSF_rhs_weap_hk416_m320", "Binocular", "Throw", "Put"
    };
	magazines[] = {
		"acex_intelitems_notepad"
	};
	items[] = {
		"ACE_EarPlugs", "ACE_MapTools", "ACE_M26_Clacker", "ACE_IR_Strobe_Item", "ACE_CableTie", 
        "ACE_HuntIR_monitor", "ACE_WaterBottle", "ACE_Canteen", "ACE_microDAGR", "ACE_Banana"
	};
	respawnWeapons[] = {
		"MSF_rhs_weap_hk416_m320", "Binocular", "Throw", "Put"
	};
	respawnMagazines[] = {
		"acex_intelitems_notepad"
	};
	RespawnItems[] = {
		"ACE_EarPlugs", "ACE_MapTools", "ACE_M26_Clacker", "ACE_IR_Strobe_Item", "ACE_CableTie", 
        "ACE_HuntIR_monitor", "ACE_WaterBottle", "ACE_Canteen", "ACE_microDAGR", "ACE_Banana"
	};
	class eventhandlers
	{
		class MSF_Insignia
		{
			init = "[_this select 0] call MSF_fnc_SetInsigniaEH;";
		};
		class MSF_Radio
		{
			init = "[_this select 0] call MSF_fnc_AddRadio;";
		};
		class MSF_Stealth
		{
			init = "[_this select 0] call MSF_fnc_AddSilencer;";
		};
	};
};