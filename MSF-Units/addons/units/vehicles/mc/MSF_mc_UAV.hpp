class MSF_UAV :  MSF_Soldier_Base
{
	displayName = "Drone Operator";
	role = "MSFRecon";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
        "MSF_rhs_hk416d", "Binocular", "rhs_weap_rsp30_red", "Throw", "Put"
    };
    magazines[] = {
 		"acex_intelitems_notepad", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "HandGrenade", "HandGrenade", 
        "SmokeShellRed", "SmokeShellPurple", "SmokeShellPurple", "rhs_mag_30Rnd_556x45_M855A1_PMAG", "rhs_mag_30Rnd_556x45_M855A1_PMAG", 
        "rhs_mag_30Rnd_556x45_M855A1_PMAG", "SmokeShellGreen", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_rsp30_red"
    };
    items[] = {
		"ACE_EarPlugs", "ACE_MapTools", "ACE_DefusalKit", "ACE_M26_Clacker", "ACE_IR_Strobe_Item", "ACE_CableTie", "ACE_Banana", "ACE_Canteen", "ACE_WaterBottle", 
        "ACE_HuntIR_monitor", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_quikclot", 
        "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_bodyBag", "ACE_epinephrine", "ACE_adenosine", "ACE_morphine", "ACE_morphine", 
        "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_salineIV_500", "ACE_salineIV_500", "ACE_UAVBattery", 
        "ACE_microDAGR", "ACE_Banana"  
    };
    linkedItems[] = {
        "rhsusf_plateframe_teamleader", "rhsusf_opscore_ut_pelt_nsw", "rhs_googles_clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "B_UavTerminal", 
		"JAS_GPNVG18_blk"
    };	
	respawnWeapons[] = {
		"MSF_rhs_hk416d", "Binocular", "rhs_weap_rsp30_red", "Throw", "Put"
	};
	respawnMagazines[] = {
      	"acex_intelitems_notepad", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "HandGrenade", "HandGrenade", 
        "SmokeShellRed", "SmokeShellPurple", "SmokeShellPurple", "rhs_mag_30Rnd_556x45_M855A1_PMAG", "rhs_mag_30Rnd_556x45_M855A1_PMAG", 
	};
	RespawnItems[] = {
		"ACE_EarPlugs", "ACE_MapTools", "ACE_DefusalKit", "ACE_M26_Clacker", "ACE_IR_Strobe_Item", "ACE_CableTie", "ACE_Banana", "ACE_Canteen", "ACE_WaterBottle", 
        "ACE_HuntIR_monitor", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_quikclot", 
        "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_bodyBag", "ACE_epinephrine", "ACE_adenosine", "ACE_morphine", "ACE_morphine", 
        "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_salineIV_500", "ACE_salineIV_500", "ACE_UAVBattery", 
        "ACE_microDAGR", "ACE_Banana"  
	};
	respawnLinkedItems[] = {
        "rhsusf_plateframe_teamleader", "rhsusf_opscore_ut_pelt_nsw", "rhs_googles_clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "B_UavTerminal", 
		"JAS_GPNVG18_blk"
	};
    uniformClass = "rhs_uniform_g3_mc";
    backpack = "B_UAV_01_backpack_F";
};
