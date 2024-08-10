class MSF_Sniper : MSF_Sniper_Base
{
	displayName = "Sniper";
	role = "MSFRecon";
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
		"MSF_rhs_M107","Rangefinder","rhsusf_weap_m1911a1", "Throw", "Put"
	};
	magazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellRed", "SmokeShellPurple", "rhsusf_mag_10Rnd_STD_50BMG_mk211", 
		"rhsusf_mag_10Rnd_STD_50BMG_mk211",	"rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhsusf_mag_10Rnd_STD_50BMG_mk211", 		
		"9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"
	};
	items[] = {
		"ACE_Banana", "ACE_RangeCard", "ACE_PlottingBoard", "ACE_ATragMX", "ACE_bodyBag"
	};
	linkedItems[] = {
		"rhsusf_spcs_ocp_sniper", "H_Shemag_olive_hs", "G_Balaclava_TI_tna_F", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk"
	};
	respawnWeapons[] = {
		"MSF_rhs_M107","Rangefinder","rhsusf_weap_m1911a1", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellRed", "SmokeShellPurple", "rhsusf_mag_10Rnd_STD_50BMG_mk211", 
		"rhsusf_mag_10Rnd_STD_50BMG_mk211",	"rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhsusf_mag_10Rnd_STD_50BMG_mk211", 		
		"9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"
	};
	RespawnItems[] = {
		"ACE_Banana", "ACE_RangeCard", "ACE_PlottingBoard", "ACE_ATragMX", "ACE_bodyBag"
	};
	respawnLinkedItems[] = {
		"rhsusf_spcs_ocp_sniper", "H_Shemag_olive_hs", "G_Balaclava_TI_tna_F", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk"		
	};
	uniformClass = "U_B_GhillieSuit";
	backpack = "MSF_mc_SniperBackpack";
};