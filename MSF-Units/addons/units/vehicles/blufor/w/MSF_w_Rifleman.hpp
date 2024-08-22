class MSF_Rifleman_W :  MSF_Rifleman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
        "MSF_MXSW_W", "Binocular", "rhs_weap_M320", "Throw", "Put"
    };
    magazines[] = {
		"acex_intelitems_notepad",  "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", 
		"1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell",	"UGL_FlareGreen_F", "rhs_mag_M397_HET",
		"rhs_mag_M397_HET", "rhs_mag_M397_HET", "ACE_40mm_Flare_green",  "ACE_40mm_Flare_green", 
		"1Rnd_Smoke_Grenade_shell", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203"
    };
    linkedItems[] = {
        "NATO_WINTER_H_HELMETPLAIN", "NATO_WINTER_V_PLATECARRIERSPEC", "NATO_WINTER_BALACLAVA_STEALTH_G", "ItemMap", "ItemRadio", "ItemCompass", 
		"ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_MXSW_W", "Binocular", "rhs_weap_M320", "Throw", "Put"
	};
	respawnMagazines[] = {
		"acex_intelitems_notepad",  "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", 
		"1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell",	"UGL_FlareGreen_F", "rhs_mag_M397_HET",
		"rhs_mag_M397_HET", "rhs_mag_M397_HET", "ACE_40mm_Flare_green",  "ACE_40mm_Flare_green", 
		"1Rnd_Smoke_Grenade_shell", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203"
	};
	respawnLinkedItems[] = {
        "NATO_WINTER_H_HELMETPLAIN", "NATO_WINTER_V_PLATECARRIERSPEC", "NATO_WINTER_BALACLAVA_STEALTH_G", "ItemMap", "ItemRadio", "ItemCompass", 
		"ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
	};
    uniformClass = "NATO_WINTER_UNIFORM";
    backpack = "MSF_w_PMAGSupplyBackpack";
};