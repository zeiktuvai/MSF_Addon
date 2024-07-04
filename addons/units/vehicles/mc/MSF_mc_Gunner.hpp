class MSF_Gunner :  MSF_Soldier_Base
{
	displayName = "Support Gunner";
	icon = "iconManMG";
	role = "MSFAssault";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
        "MSF_rhs_m249", "Binocular", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch", 
		"rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_coyote", "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_ucp", 
		"rhsusf_100Rnd_556x45_M855_mixed_soft_pouch", "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch", 
        "rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote"
    };
    items[] = {
		"ACE_Banana", "ACE_WaterBottle"        
    };
    linkedItems[] = {
        "rhsusf_spcs_ocp_saw", "rhsusf_opscore_mc_cover_pelt", "rhsusf_oakley_goggles_clr", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
        "JAS_GPNVG18_Tan_TI"
    };	
	respawnWeapons[] = {
		"MSF_rhs_m249", "Binocular", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch", 
		"rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_coyote", "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_ucp", 
		"rhsusf_100Rnd_556x45_M855_mixed_soft_pouch", "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch", 
        "rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote"
	};
	RespawnItems[] = {
		"ACE_Banana", "ACE_WaterBottle" 
	};
	respawnLinkedItems[] = {
        "rhsusf_spcs_ocp_saw", "rhsusf_opscore_mc_cover_pelt", "rhsusf_oakley_goggles_clr", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
        "JAS_GPNVG18_Tan_TI"	
	};
    uniformClass = "rhs_uniform_cu_ocp";
    backpack = "MSF_mc_BaseBackpack";
};