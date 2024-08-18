class MSF_Leader :  MSF_Soldier_Base
{
	displayName = "Leader";
	icon = "iconManLeader";
	role = "MSFCommand";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
        "MSF_rhs_SCARH_STD", "rhs_weap_M320", "Binocular", "Throw", "Put"
    };
    magazines[] = {
		"acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "1Rnd_HE_Grenade_shell", "ACE_HandFlare_Green",
		"ACE_HandFlare_Green", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareGreen_F", "UGL_FlareGreen_F",
		"1Rnd_HE_Grenade_shell", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203"
    };
    items[] = {
		"ACE_Banana", "ACE_DefusalKit", "ACE_M26_Clacker", "ACE_wirecutter", "ACE_WaterBottle", "ACE_epinephrine", "ACE_splint", "ACE_splint", "ACE_adenosine"       
    };
    linkedItems[] = {
        "rhsusf_spc_squadleader", "rhsusf_opscore_mc_cover_pelt_nsw", "rhsusf_oakley_goggles_clr", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "JAS_GPNVG18_Tan"
    };	
	respawnWeapons[] = {
		"MSF_rhs_SCARH_STD", "rhs_weap_M320", "Binocular", "Throw", "Put"
	};
	respawnMagazines[] = {
		"acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "1Rnd_HE_Grenade_shell", "ACE_HandFlare_Green",
		"ACE_HandFlare_Green", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareGreen_F", "UGL_FlareGreen_F",
		"1Rnd_HE_Grenade_shell", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203"
	};
	RespawnItems[] = {
		"ACE_Banana", "ACE_DefusalKit", "ACE_M26_Clacker", "ACE_wirecutter", "ACE_WaterBottle", "ACE_epinephrine", "ACE_splint", "ACE_splint", "ACE_adenosine"
	};
	respawnLinkedItems[] = {
        "rhsusf_spc_squadleader", "rhsusf_opscore_mc_cover_pelt_nsw", "rhsusf_oakley_goggles_clr", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "JAS_GPNVG18_Tan"		
	};
    uniformClass = "rhs_uniform_g3_mc";
    backpack = "MSF_mc_PMAGSupplyBackpack";
};