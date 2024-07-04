class MSF_Crewman_W :  MSF_Crewman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
        "MSF_MXSW_W", "Binocular", "rhsusf_weap_m1911a1", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellRed", "30Rnd_65x39_caseless_black_mag_Tracer",
        "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag",
		"9Rnd_45ACP_Mag", "30Rnd_65x39_caseless_black_mag_Tracer", "rhsusf_mag_7x45acp_MHP"
    };
    items[] = {
		"ACE_ATragMX", "ACE_RangeCard", "ACE_Banana", "ToolKit"
    };
    linkedItems[] = {
        "NATO_WINTER_V_PLATECARRIER1", "NATO_WINTER_H_HELMETCREW", "NATO_WINTER_BALACLAVA_STEALTH", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter",
		"ItemGPS", "JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_MXSW_W", "Binocular", "rhsusf_weap_m1911a1", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellRed", "30Rnd_65x39_caseless_black_mag_Tracer",
        "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag",
		"9Rnd_45ACP_Mag", "30Rnd_65x39_caseless_black_mag_Tracer", "rhsusf_mag_7x45acp_MHP"
	};
	RespawnItems[] = {
		 "ACE_ATragMX", "ACE_RangeCard", "ACE_Banana", "ToolKit"
	};
	respawnLinkedItems[] = {
        "NATO_WINTER_V_PLATECARRIER1", "NATO_WINTER_H_HELMETCREW", "NATO_WINTER_BALACLAVA_STEALTH", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter",
		"ItemGPS", "JAS_GPNVG18_blk_TI"
	};
    uniformClass = "NATO_WINTER_HELIPILOT_COVERALLS";
    backpack = "MSF_w_PMAGBackpack";
};