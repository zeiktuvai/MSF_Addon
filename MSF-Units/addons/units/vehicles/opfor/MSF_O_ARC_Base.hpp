class O_soldier_F;
class MSF_O_ARC_Soldier_Base : O_soldier_F
{
	displayName = "Rifleman";
	scope = 0;
	_generalMacro = "O_soldier_F";
    icon = "iconMan";
	role = "MSFAssault";
	author = "Zeik_Tuvai";
	faction = "OPF_ARC_MSF";
	identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
	genericNames = "TakistaniMen";
	model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; 
	hiddenSelections[] = {"Camo","Insignia"}; 
	hiddenSelectionsTextures[] = {"z\msf\addons\units\data\MSF_O_ARC_clothing.paa"};  
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
		// class MSF_Insignia
		// {
		// 	init = "[_this select 0] call MSF_fnc_ApplyInsignia; [_this select 0] call MSF_fnc_SetInsigniaHandler;";
		// };
		// class MSF_Radio
		// {
		// 	init = "[_this select 0] call MSF_fnc_AddRadio;";
		// };
		// class MSF_Stealth
		// {
		// 	init = "[_this select 0] call MSF_fnc_AddSilencer;";
		// };
	};
};