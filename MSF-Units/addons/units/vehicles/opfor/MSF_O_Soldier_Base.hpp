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
	hiddenSelectionsTextures[] = {"z\msf\addons\units\data\arc\MSF_O_ARC_clothing.paa"};  
	weapons[] = {
        "MSF_ARC_SPAR", "Binocular", "Throw", "Put"
    };
	magazines[] = {
		"acex_intelitems_notepad", "ACE_painkillers", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer",
		"ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_M993_AP_Mag", "ACE_20Rnd_762x51_M993_AP_Mag", "SmokeShellGreen",
		"SmokeShellRed", "HandGrenade", "HandGrenade", "20Rnd_762x51_Mag"
	};
	items[] = {
		"ACE_Banana", "ACE_RangeCard", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_CableTie", "ACE_EarPlugs", "ACE_HuntIR_monitor", "ACE_WaterBottle",
		"ACE_microDAGR", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_quikclot",
		"ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_splint", "ACE_tourniquet", "ACE_morphine", "ACE_bloodIV_500", "ACE_epinephrine"
	};
	linkedItems[] = {
		"ARC_Vest", "ARC_Helmet", "rhs_googles_orange", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"
	};
	respawnWeapons[] = {
		"MSF_ARC_SPAR", "Binocular", "Throw", "Put"
	};
	respawnMagazines[] = {
		"acex_intelitems_notepad", "ACE_painkillers", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer",
		"ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_M993_AP_Mag", "ACE_20Rnd_762x51_M993_AP_Mag", "SmokeShellGreen",
		"SmokeShellRed", "HandGrenade", "HandGrenade", "20Rnd_762x51_Mag"
	};
	RespawnItems[] = {
		"ACE_Banana", "ACE_RangeCard", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_CableTie", "ACE_EarPlugs", "ACE_HuntIR_monitor", "ACE_WaterBottle",
		"ACE_microDAGR", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_quikclot",
		"ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_splint", "ACE_tourniquet", "ACE_morphine", "ACE_bloodIV_500", "ACE_epinephrine"
	};
	respawnLinkedItems[] = {
		"ARC_Vest", "ARC_Helmet", "rhs_googles_orange", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"
	};
	uniformClass = "ARC_Uniform";
	backpack = "MSF_O_ARC_Backpack";
};