class MSF_Leader :  MSF_Soldier_Base
{
	displayName = "Leader";
	icon = "iconManLeader";
	role = "MSFCommand";	
	editorSubcategory = "MSF_EdSubcat_Inf_Trop";
	scope = 2;
	scopecurator = 2;
	weapons[] = {
        "MSF_rhs_weap_hk416_m320", "Binocular", "Throw", "Put"
    };
    magazines[] = {
		"acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "1Rnd_HE_Grenade_shell",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "ACE_HandFlare_Green",
		"ACE_HandFlare_Green", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareGreen_F", "UGL_FlareGreen_F",
		"1Rnd_HE_Grenade_shell"
    };
    items[] = {
		"ACE_Banana", "ACE_DefusalKit", "ACE_M26_Clacker", "ACE_wirecutter", "ACE_WaterBottle", "ACE_epinephrine", "ACE_splint", "ACE_splint", "ACE_adenosine"       
    };
    linkedItems[] = {
        "V_PlateCarrier2_tna_F", "rhsusf_opscore_rg_cover_pelt", "rhsusf_oakley_goggles_clr", "ItemMap", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "NVGogglesB_blk_F"
    };	
	respawnWeapons[] = {
		"MSF_rhs_weap_hk416_m320", "Binocular", "Throw", "Put"
	};
	respawnMagazines[] = {
		"acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "1Rnd_HE_Grenade_shell",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "ACE_HandFlare_Green",
		"ACE_HandFlare_Green", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareGreen_F", "UGL_FlareGreen_F",
		"1Rnd_HE_Grenade_shell"
	};
	RespawnItems[] = {
		"ACE_Banana", "ACE_DefusalKit", "ACE_M26_Clacker", "ACE_wirecutter", "ACE_WaterBottle", "ACE_epinephrine", "ACE_splint", "ACE_splint", "ACE_adenosine"
	};
	respawnLinkedItems[] = {
        "V_PlateCarrier2_tna_F", "rhsusf_opscore_rg_cover_pelt", "rhsusf_oakley_goggles_clr", "ItemMap", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "NVGogglesB_blk_F"		
	};
    uniformClass = "U_B_T_Soldier_SL_F";
    backpack = "MSF_mc_PMAGBackpack";
};