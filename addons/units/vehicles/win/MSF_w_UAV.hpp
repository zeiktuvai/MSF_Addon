class MSF_UAV_W :  MSF_UAV
{
	displayName = "Drone Operator";
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
        "MSF_MXSW_W", "Binocular", "rhs_weap_rsp30_red", "Throw", "Put"
    };
    magazines[] = {
 		"acex_intelitems_notepad", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "HandGrenade", 
        "HandGrenade", "SmokeShellRed", "SmokeShellPurple", "SmokeShellPurple", "30Rnd_65x39_caseless_black_mag_Tracer",
        "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "SmokeShellGreen",
        "30Rnd_65x39_caseless_black_mag_Tracer", "rhs_mag_rsp30_red"
    };
    items[] = {
		"ACE_EarPlugs", "ACE_MapTools", "ACE_DefusalKit", "ACE_M26_Clacker", "ACE_IR_Strobe_Item", "ACE_CableTie", "ACE_Banana", "ACE_Canteen", "ACE_WaterBottle", 
        "ACE_HuntIR_monitor", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_quikclot", 
        "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_bodyBag", "ACE_epinephrine", "ACE_adenosine", "ACE_morphine", "ACE_morphine", 
        "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_salineIV_500", "ACE_salineIV_500", "ACE_UAVBattery", 
        "ACE_microDAGR", "ACE_Banana"  
    };
    linkedItems[] = {
        "NATO_WINTER_V_PLATECARRIER2", "NATO_WINTER_H_HELMETPLAIN", "NATO_WINTER_BALACLAVA_STEALTH_G", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "B_UavTerminal", 
		"JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_MXSW_W", "Binocular", "rhs_weap_rsp30_red", "Throw", "Put"
	};
	respawnMagazines[] = {
 		"acex_intelitems_notepad", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "HandGrenade", 
        "HandGrenade", "SmokeShellRed", "SmokeShellPurple", "SmokeShellPurple", "30Rnd_65x39_caseless_black_mag_Tracer",
        "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "SmokeShellGreen",
        "30Rnd_65x39_caseless_black_mag_Tracer", "rhs_mag_rsp30_red"
	};
	RespawnItems[] = {
		"ACE_EarPlugs", "ACE_MapTools", "ACE_DefusalKit", "ACE_M26_Clacker", "ACE_IR_Strobe_Item", "ACE_CableTie", "ACE_Banana", "ACE_Canteen", "ACE_WaterBottle", 
        "ACE_HuntIR_monitor", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_quikclot", 
        "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_bodyBag", "ACE_epinephrine", "ACE_adenosine", "ACE_morphine", "ACE_morphine", 
        "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_salineIV_500", "ACE_salineIV_500", "ACE_UAVBattery", 
        "ACE_microDAGR", "ACE_Banana"  
	};
	respawnLinkedItems[] = {
        "NATO_WINTER_V_PLATECARRIER2", "NATO_WINTER_H_HELMETPLAIN", "NATO_WINTER_BALACLAVA_STEALTH_G", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "B_UavTerminal", 
		"JAS_GPNVG18_blk_TI"
	};
    uniformClass = "NATO_WINTER_UNIFORM";
    backpack = "NATO_WINTER_BACKPACK_UAV";
};
