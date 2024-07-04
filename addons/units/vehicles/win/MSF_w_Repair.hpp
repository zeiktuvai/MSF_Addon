class MSF_Repair_W :  MSF_Repair
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
        "MSF_MXSW_W", "Binocular", "rhsusf_weap_m1911a1", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad",  "SmokeShellGreen", "SmokeShellGreen", "30Rnd_65x39_caseless_black_mag_Tracer", "9Rnd_45ACP_Mag",
        "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",        
        "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag",
		"9Rnd_45ACP_Mag", "rhsusf_mag_7x45acp_MHP"
    };
    items[] = {
		"ACE_Banana", "ACE_Flashlight_XL50"
    };
    linkedItems[] = {
        "NATO_WINTER_V_PLATECARRIER2", "NATO_WINTER_H_BOONIEHAT", "NATO_WINTER_BALACLAVA_WHITE_CAMO", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_Tan_TI"
    };	
	respawnWeapons[] = {
		"MSF_MXSW_W", "Binocular", "rhsusf_weap_m1911a1", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad",  "SmokeShellGreen", "SmokeShellGreen", "30Rnd_65x39_caseless_black_mag_Tracer", "9Rnd_45ACP_Mag",
        "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",        
        "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag",
		"9Rnd_45ACP_Mag", "rhsusf_mag_7x45acp_MHP"
	};
	RespawnItems[] = {
		"ACE_Banana", "ACE_Flashlight_XL50"
	};
	respawnLinkedItems[] = {
        "NATO_WINTER_V_PLATECARRIER2", "NATO_WINTER_H_BOONIEHAT", "NATO_WINTER_BALACLAVA_WHITE_CAMO", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_Tan_TI"
	};
    uniformClass = "NATO_WINTER_HELIPILOT_COVERALLS";
    backpack = "MSF_w_PMAGBackpack";
};