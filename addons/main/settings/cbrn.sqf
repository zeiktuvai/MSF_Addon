[
	"MSF_CBRN_ProtSuit",
	"EDITBOX",
	["Protective Clothing", "Comma delimited list of class names for uniforms that protect against CBRN damage [String]."],
	"MSF - CBRN System",
	"""U_C_CBRN_Suit_01_Blue_F"",""U_B_CBRN_Suit_01_MTP_F"",""U_B_CBRN_Suit_01_Tropic_F"",""U_B_CBRN_Suit_01_Wdl_F"",""U_C_CBRN_Suit_01_White_F"",""U_C_CBRN_Suit_01_White_F"",""U_I_CBRN_Suit_01_AAF_F"",""U_I_E_CBRN_Suit_01_EAF_F"",""CUP_U_C_Fireman_01""",
	1
] call CBA_fnc_addSetting;
[
	"MSF_CBRN_ProtMask",
	"EDITBOX",
	["Protective Mask", "Comma delimited list of class names for goggles that protect against CBRN damage [String]."],
	"MSF - CBRN System",
	"""G_AirPurifyingRespirator_02_black_F"",""G_AirPurifyingRespirator_02_olive_F"",""G_AirPurifyingRespirator_02_sand_F"",""G_AirPurifyingRespirator_01_F"",""CUP_G_ESS_BLK_Facewrap_Black""",
	1
] call CBA_fnc_addSetting;