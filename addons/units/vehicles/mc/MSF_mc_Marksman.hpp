class MSF_Marksman : MSF_Soldier_Base
{
	displayName = "Designated Marksman";
	role = "MSFRecon";
	editorSubcategory = "MSF_EdSubcat_Inf_Trop";
	scope = 2;
	scopecurator = 2;
	weapons[] = {
		"MSF_rhs_weap_m14ebrri","Rangefinder","rhsusf_weap_glock17g4", "Throw", "Put"
	};
	magazines[] = {
		"acex_intelitems_notepad",
		"rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", 
		"rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_20Rnd_762x51_m993_Mag", 
		"rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_mag_17Rnd_9x19_JHP"
	};
	items[] = {
		"ACE_Banana", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", 
		"ACE_elasticBandage", "ACE_epinephrine", "ACE_morphine", "ACE_adenosine"
	};
	linkedItems[] = {
		"V_PlateCarrier2_rgr", "H_HelmetB_camo", "G_Balaclava_TI_tna_F", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_Tan_TI"
	};
	respawnWeapons[] = {
		"MSF_rhs_weap_m14ebrri","Rangefinder","rhsusf_weap_glock17g4", "Throw", "Put"
	};
	respawnMagazines[] = {
		"acex_intelitems_notepad",
		"rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", 
		"rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_20Rnd_762x51_m993_Mag", 
		"rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_mag_17Rnd_9x19_JHP"
	};
	RespawnItems[] = {
		"ACE_Banana", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", 
		"ACE_elasticBandage", "ACE_epinephrine", "ACE_morphine", "ACE_adenosine"
	};
	respawnLinkedItems[] = {
		"V_PlateCarrier2_rgr", "H_HelmetB_camo", "G_Balaclava_TI_tna_F", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_Tan_TI"			
	};
	uniformClass = "U_B_T_Soldier_SL_F";
	backpack = "MSF_mc_MarksmanBackpack";
};