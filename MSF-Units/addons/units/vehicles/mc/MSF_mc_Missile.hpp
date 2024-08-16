class MSF_ATRifleman :  MSF_Soldier_Base
{
	displayName = "AT Specialist";
	role = "MSFSpecial";
	icon = "iconManAT";
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
        "MSF_rhs_SCARH", "Rangefinder", "launch_MRAWS_green_F", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "rhs_mag_30Rnd_556x45_M855A1_PMAG", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_maaws_HEAT",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer"
    };
    items[] = {
		"ACE_Banana", "ACE_RangeCard"
    };
    linkedItems[] = {
        "rhsusf_plateframe_rifleman", "H_HelmetSpecB_paint1", "rhs_googles_clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk"
    };	
	respawnWeapons[] = {
		"MSF_rhs_SCARH", "Rangefinder", "launch_MRAWS_green_F", "Throw", "Put"
	};
	respawnMagazines[] = {
   		"acex_intelitems_notepad", "rhs_mag_30Rnd_556x45_M855A1_PMAG", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_maaws_HEAT",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer"
	};
	RespawnItems[] = {
		"ACE_Banana", "ACE_RangeCard"
	};
	respawnLinkedItems[] = {
        "rhsusf_plateframe_rifleman", "H_HelmetSpecB_paint1", "rhs_googles_clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk"
	};
    uniformClass = "rhs_uniform_g3_mc";
    backpack = "MSF_mc_ATBackpack";
};

class MSF_AARifleman :  MSF_Soldier_Base
{
	displayName = "AA Specialist";
	role = "MSFSpecial";
	icon = "iconManAT";
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
        "MSF_rhs_SCARH", "Rangefinder", "launch_I_Titan_F", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "rhs_mag_30Rnd_556x45_M855A1_PMAG", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
		"rhs_mag_30Rnd_556x45_Mk318_PMAG", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "Titan_AA",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer"
    };
    items[] = {
		"ACE_Banana"  
    };
    linkedItems[] = {
        "rhsusf_plateframe_rifleman", "H_HelmetSpecB_paint1", "rhs_googles_clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk"
    };	
	respawnWeapons[] = {
		"MSF_rhs_SCARH", "Rangefinder", "launch_I_Titan_F", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "rhs_mag_30Rnd_556x45_M855A1_PMAG", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
		"rhs_mag_30Rnd_556x45_Mk318_PMAG", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "Titan_AA",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer"
	};
	RespawnItems[] = {
		"ACE_Banana"
	};
	respawnLinkedItems[] = {
        "rhsusf_plateframe_rifleman", "H_HelmetSpecB_paint1", "rhs_googles_clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk"
	};
    uniformClass = "rhs_uniform_g3_mc";
    backpack = "MSF_mc_AABackpack";
};