class MSF_Marksman : MSF_Soldier_Base
{
	displayName = "Designated Marksman";
	role = "MSFRecon";
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
		"MSF_rhs_weap_m14ebrri","Rangefinder","rhsusf_weap_glock17g4", "Throw", "Put"
	};
	magazines[] = {
		"acex_intelitems_notepad", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag",
		"rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ",
		"rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_mag_17Rnd_9x19_JHP"
	};
	items[] = {
		"ACE_Banana", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", 
		"ACE_elasticBandage", "ACE_epinephrine", "ACE_morphine", "ACE_adenosine"
	};
	linkedItems[] = {
		"rhsusf_spcs_ocp_sniper", "H_HelmetB_camo", "rhsusf_shemagh2_tan", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_Tan_TI"
	};
	respawnWeapons[] = {
		"MSF_rhs_weap_m14ebrri","Rangefinder","rhsusf_weap_glock17g4", "Throw", "Put"
	};
	respawnMagazines[] = {
		"acex_intelitems_notepad", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag",
		"rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ",
		"rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_mag_17Rnd_9x19_JHP"	
	};
	RespawnItems[] = {
		"ACE_Banana", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", 
		"ACE_elasticBandage", "ACE_epinephrine", "ACE_morphine", "ACE_adenosine"
	};
	respawnLinkedItems[] = {
		"rhsusf_spcs_ocp_sniper", "H_HelmetB_camo", "rhsusf_shemagh2_tan", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_Tan_TI"			
	};
	uniformClass = "rhs_uniform_g3_mc";
	backpack = "MSF_mc_MarksmanBackpack";
};