class MSF_Grenadier_W :  MSF_Grenadier
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
        "MSF_MXGL_White","Rangefinder", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell",
		"1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_HE_Grenade_shell", 
		"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareGreen_F", "UGL_FlareGreen_F", "rhs_mag_M397_HET",
		"rhs_mag_M397_HET", "rhs_mag_M433_HEDP", "rhs_mag_M433_HEDP", "rhs_mag_M441_HE", "rhs_mag_M441_HE",
		"ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "rhs_mag_m4009",
		"1Rnd_HE_Grenade_shell"
    };
    items[] = {
		"ACE_Banana"      
    };
    linkedItems[] = {
        "NATO_WINTER_H_HELMETPLAIN", "NATO_WINTER_V_PLATECARRIERGL", "NATO_WINTER_BALACLAVA_STEALTH_G", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_MXGL_White","Rangefinder", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell",
		"1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_HE_Grenade_shell", 
		"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareGreen_F", "UGL_FlareGreen_F", "rhs_mag_M397_HET",
		"rhs_mag_M397_HET", "rhs_mag_M433_HEDP", "rhs_mag_M433_HEDP", "rhs_mag_M441_HE", "rhs_mag_M441_HE",
		"ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "rhs_mag_m4009",
		"1Rnd_HE_Grenade_shell"
	};
	RespawnItems[] = {
		"ACE_Banana"
	};
	respawnLinkedItems[] = {
        "NATO_WINTER_H_HELMETPLAIN", "NATO_WINTER_V_PLATECARRIERGL", "NATO_WINTER_BALACLAVA_STEALTH_G", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "JAS_GPNVG18_blk_TI"	
	};
    uniformClass = "NATO_WINTER_UNIFORM";
    backpack = "MSF_w_PMAGBackpack";
};