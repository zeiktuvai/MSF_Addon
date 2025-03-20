v2.12.1
- Added standard backpack to supply depot
- Added intel laptop with custom screen animation
- Updated Rarm interaction to:
  Add UAV Battery to inventory if player is drone operator and has less than 2 batteries in inventory
  Add Hand Grenade if player has less than 3 in inventory
- Updated air drop code to use event handler.
- Updated Supply Depot UI
- Fixed bug in Logi code causing it to be called for every player and messing up logi points
- Fixed bug causing "Convert to Supply Depot" interaction to stay available after execution
- Fixed player rearm and inventory generation modules to persist when a vehicle is respawned

[position player, 40] call BIS_fnc_objectsGrabber;


[["CUP_arifle_M16A4_Grip",["CUP_arifle_M16A4_Grip","M16A4 (Grip)",["","CUP_acc_ANPEQ_15_Flashlight_Black_L","CUP_optic_AC11704_Black","CUP_bipod_VLTOR_Modpod_black"],[["CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_ar15",3],["CUP_30Rnd_556x45_Emag_Tracer_Green",3]]]],
["CUP_arifle_ACR_wdl_556",["CUP_arifle_ACR_wdl_556","ACR (5.56 NATO / Woodland)",["","acc_pointer_IR","ACE_optic_Hamr_2D",""],[["30Rnd_556x45_Stanag_Tracer_Green",8]]]],
["CUP_arifle_XM8_Carbine_Rail_Fish",["CUP_arifle_XM8_Carbine_Rail_Fish","XM8 Carbine (RIS/Bass)",["ACE_muzzle_mzls_L","CUP_acc_LLM_black","CUP_optic_AIMM_MICROT1_BLK",""],[["CUP_30Rnd_TE1_Green_Tracer_556x45_G36",3],["CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag",3]]]],
["CUP_smg_SA61_RIS",["CUP_smg_SA61_RIS","Sa vz. 61 (RIS)",["","","",""],[["CUP_10Rnd_B_765x17_Ball_M",10]]]],
["CUP_srifle_RSASS_Black",["CUP_srifle_RSASS_Black","R11 RSASS (Black)",["muzzle_snds_B","CUP_acc_ANPEQ_15_Flashlight_Black_L","NForce_Atcr_RMR_Top_SkeetIR_Down","CUP_bipod_VLTOR_Modpod_black"],[["CUP_20Rnd_TE1_Red_Tracer_762x51_M110",6]]]],
["CUP_arifle_ACR_DMR_wdl_68",["CUP_arifle_ACR_DMR_wdl_68","ACR DMR (6.8 SPC / Woodland)",["","CUP_acc_ANPEQ_15","CUP_optic_SB_3_12x50_PMII_Tan","bipod_01_F_khk"],[["CUP_30Rnd_680x43_Stanag_Tracer_Green",7]]]]]