params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _clothing = _logic getVariable ["Clothing", ["U_C_CBRN_Suit_01_Blue_F","U_B_CBRN_Suit_01_MTP_F","U_B_CBRN_Suit_01_Tropic_F","U_C_CBRN_Suit_01_White_F","U_C_CBRN_Suit_01_White_F","U_I_CBRN_Suit_01_AAF_F","U_I_E_CBRN_Suit_01_EAF_F","CUP_U_C_Fireman_01"]];
private _mask = _logic getVariable ["Mask", ["G_AirPurifyingRespirator_02_black_F","G_AirPurifyingRespirator_02_olive_F","G_AirPurifyingRespirator_02_sand_F","G_AirPurifyingRespirator_01_F","CUP_G_ESS_BLK_Facewrap_Black"]];
private _damage = _logic getVariable ["DamageType", 0];
private _area = _logic getVariable ["objectArea", [0,0,0,false,-1]];


