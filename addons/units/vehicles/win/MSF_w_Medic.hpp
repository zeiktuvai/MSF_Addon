class MSF_Medic_W :  MSF_Medic
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
        "MSF_MXSW_W", "Binocular", "rhs_weap_rsp30_red", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple", 
        "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", 
        "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", 
        "30Rnd_65x39_caseless_black_mag_Tracer", "rhs_mag_rsp30_red"
    };
    items[] = {
		"ACE_Banana"  
    };
    linkedItems[] = {
        "NATO_WINTER_V_TACVEST", "NATO_WINTER_H_HELMETPLAIN", "NATO_WINTER_BALACLAVA_STEALTH_G", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter",
        "B_UavTerminal", "JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_MXSW_W", "Binocular", "rhs_weap_rsp30_red", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple", 
        "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", 
        "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", 
        "30Rnd_65x39_caseless_black_mag_Tracer", "rhs_mag_rsp30_red"
	};
	RespawnItems[] = {
		"ACE_Banana"
	};
	respawnLinkedItems[] = {
        "NATO_WINTER_V_TACVEST", "NATO_WINTER_H_HELMETPLAIN", "NATO_WINTER_BALACLAVA_STEALTH_G", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter",
        "B_UavTerminal", "JAS_GPNVG18_blk_TI"
	};
    uniformClass = "NATO_WINTER_UNIFORM";
    backpack = "MSF_w_MedicBackpack";
};