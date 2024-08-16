class MSF_Repair :  MSF_Soldier_Base
{
	displayName = "Mechanic";
	role = "MSFSupport";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;	
	engineer = 1;
	icon = "iconManEngineer";
	weapons[] = {
        "MSF_rhs_SCARH", "Binocular", "rhsusf_weap_m1911a1", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad",  "SmokeShellGreen", "SmokeShellGreen", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "9Rnd_45ACP_Mag",
        "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",        
        "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag",
		"9Rnd_45ACP_Mag", "rhsusf_mag_7x45acp_MHP"
    };
    items[] = {
		"ACE_Banana", "ACE_Flashlight_XL50", "ToolKit"
    };
    linkedItems[] = {
        "rhsusf_iotv_ocp_Repair", "rhs_Booniehat_ocp", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_Tan_TI"
    };	
	respawnWeapons[] = {
		"MSF_rhs_SCARH", "Binocular", "rhsusf_weap_m1911a1", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad",  "SmokeShellGreen", "SmokeShellGreen", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "9Rnd_45ACP_Mag",
        "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",        
        "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag",
		"9Rnd_45ACP_Mag", "rhsusf_mag_7x45acp_MHP"
	};
	RespawnItems[] = {
		"ACE_Banana", "ACE_Flashlight_XL50", "ToolKit"
	};
	respawnLinkedItems[] = {
        "rhsusf_iotv_ocp_Repair", "rhs_Booniehat_ocp", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_Tan_TI"
	};
    uniformClass = "rhs_uniform_g3_tan";
    backpack = "MSF_mc_PMAGBackpack";
};