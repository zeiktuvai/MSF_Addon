class MSF_Gunner :  MSF_Soldier_Base
{
	displayName = "Support Gunner";
	icon = "iconManMG";
	role = "MSFAssault";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
        "MSF_rhs_m240B", "Binocular", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "rhsusf_100Rnd_762x51_m62_tracer", 
		"rhsusf_100Rnd_762x51_m61_ap", "rhsusf_100Rnd_762x51_m61_ap", 
		"rhsusf_100Rnd_762x51_m62_tracer", "rhsusf_100Rnd_762x51_m62_tracer", 
        "rhsusf_100Rnd_762x51_m62_tracer"
    };
    items[] = {
		"ACE_Banana", "ACE_WaterBottle", "ACE_RangeCard"
    };
    linkedItems[] = {
        "rhsusf_spcs_ocp_saw", "rhsusf_opscore_mc_cover_pelt", "rhsusf_oakley_goggles_clr", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
        "JAS_GPNVG18_Tan_TI"
    };	
	respawnWeapons[] = {
		"MSF_rhs_m240B", "Binocular", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "rhsusf_100Rnd_762x51_m62_tracer", 
		"rhsusf_100Rnd_762x51_m61_ap", "rhsusf_100Rnd_762x51_m61_ap", 
		"rhsusf_100Rnd_762x51_m62_tracer", "rhsusf_100Rnd_762x51_m62_tracer", 
        "rhsusf_100Rnd_762x51_m62_tracer"
	};
	RespawnItems[] = {
		"ACE_Banana", "ACE_WaterBottle", "ACE_RangeCard"
	};
	respawnLinkedItems[] = {
        "rhsusf_spcs_ocp_saw", "rhsusf_opscore_mc_cover_pelt", "rhsusf_oakley_goggles_clr", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
        "JAS_GPNVG18_Tan_TI"	
	};
    uniformClass = "rhs_uniform_cu_ocp";
    backpack = "MSF_mc_BaseBackpack";
};