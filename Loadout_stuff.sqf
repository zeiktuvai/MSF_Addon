[aa, "config"] call BIS_fnc_exportInventory;
"uniformClass = ""U_B_T_Soldier_SL_F"";
backpack = ""B_ViperLightHarness_oli_F"";
weapons[] = {""rhs_weap_hk416d145_m320"",""Rangefinder"",""Throw"",""Put""};
magazines[] = {""rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"",""rhs_mag_M441_HE"",""acex_intelitems_notepad"",""HandGrenade"",""HandGrenade"",""HandGrenade"",""SmokeShellGreen"",""SmokeShellGreen"",""rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"",""rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"",""rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"",""rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"",""rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"",""rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red"",""rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red"",""rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red"",""rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red"",""rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red"",""1Rnd_SmokeGreen_Grenade_shell"",""1Rnd_SmokeGreen_Grenade_shell"",""1Rnd_SmokeGreen_Grenade_shell"",""1Rnd_SmokeGreen_Grenade_shell"",""1Rnd_HE_Grenade_shell"",""1Rnd_HE_Grenade_shell"",""1Rnd_HE_Grenade_shell"",""UGL_FlareGreen_F"",""UGL_FlareGreen_F"",""rhs_mag_M397_HET"",""rhs_mag_M397_HET"",""rhs_mag_M433_HEDP"",""rhs_mag_M433_HEDP"",""rhs_mag_M441_HE"",""ACE_HuntIR_M203"",""ACE_HuntIR_M203"",""ACE_HuntIR_M203"",""ACE_HuntIR_M203"",""ACE_HuntIR_M203"",""rhs_mag_m4009"",""rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan"",""1Rnd_HE_Grenade_shell""};
items[] = {""ACE_EarPlugs"",""ACE_IR_Strobe_Item"",""ACE_CableTie"",""ACE_MapTools"",""ACE_DefusalKit"",""ACE_M26_Clacker"",""ACE_Banana"",""ACE_packingBandage"",""ACE_packingBandage"",""ACE_HuntIR_monitor"",""ACE_WaterBottle"",""ACE_Canteen"",""ACE_packingBandage"",""ACE_packingBandage"",""ACE_bloodIV"",""ACE_bodyBag"",""ACE_epinephrine"",""ACE_epinephrine"",""ACE_morphine"",""ACE_morphine"",""ACE_morphine"",""ACE_morphine"",""ACE_tourniquet"",""ACE_tourniquet"",""ACE_splint"",""ACE_splint"",""ACE_splint"",""ACE_splint"",""ACE_adenosine"",""ACE_adenosine"",""ACE_quikclot"",""ACE_quikclot"",""ACE_quikclot"",""ACE_quikclot"",""ACE_salineIV_500"",""ACE_plasmaIV_500"",""ACE_Canteen"",""ACE_microDAGR""};
linkedItems[] = {""V_PlateCarrier2_tna_F"",""rhsusf_opscore_fg_pelt_nsw"",""rhsusf_oakley_goggles_clr"",""ItemMap"",""ItemCompass"",""ACE_Altimeter"",""ItemGPS"",""JAS_GPNVG18_blk_TI""};
"

[aa, "script"] call BIS_fnc_exportInventory;
"
// [!] UNIT MUST BE LOCAL [!]
_unit = player;

// Remove existing items
removeAllWeapons _unit;
removeAllItems _unit;
removeAllAssignedItems _unit;
removeUniform _unit;
removeVest _unit;
removeBackpack _unit;
removeHeadgear _unit;
removeGoggles _unit;

// Add weapons
_unit addWeapon ""rhs_weap_hk416d145_m320"";
_unit addPrimaryWeaponItem ""rhsusf_acc_SFMB556"";
_unit addPrimaryWeaponItem ""rhsusf_acc_su230"";
_unit addPrimaryWeaponItem ""rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"";
_unit addPrimaryWeaponItem ""rhs_mag_M441_HE"";

// Add containers
_unit forceAddUniform ""U_B_T_Soldier_SL_F"";
_unit addVest ""V_PlateCarrier2_tna_F"";
_unit addBackpack ""B_ViperLightHarness_oli_F"";

// Add binoculars
_unit addWeapon ""Rangefinder"";

// Add items to containers
_unit addItemToUniform ""ACE_EarPlugs"";
_unit addItemToUniform ""ACE_IR_Strobe_Item"";
_unit addItemToUniform ""ACE_CableTie"";
_unit addItemToUniform ""ACE_MapTools"";
_unit addItemToUniform ""acex_intelitems_notepad"";
for ""_i"" from 1 to 3 do {_unit addItemToUniform ""HandGrenade"";};
for ""_i"" from 1 to 2 do {_unit addItemToUniform ""SmokeShellGreen"";};
_unit addItemToVest ""ACE_DefusalKit"";
_unit addItemToVest ""ACE_M26_Clacker"";
_unit addItemToVest ""ACE_Banana"";
for ""_i"" from 1 to 2 do {_unit addItemToVest ""ACE_packingBandage"";};
for ""_i"" from 1 to 5 do {_unit addItemToVest ""rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"";};
for ""_i"" from 1 to 5 do {_unit addItemToVest ""rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red"";};
for ""_i"" from 1 to 4 do {_unit addItemToVest ""1Rnd_SmokeGreen_Grenade_shell"";};
for ""_i"" from 1 to 3 do {_unit addItemToVest ""1Rnd_HE_Grenade_shell"";};
for ""_i"" from 1 to 2 do {_unit addItemToVest ""UGL_FlareGreen_F"";};
_unit addItemToBackpack ""ACE_HuntIR_monitor"";
_unit addItemToBackpack ""ACE_WaterBottle"";
for ""_i"" from 1 to 2 do {_unit addItemToBackpack ""ACE_Canteen"";};
for ""_i"" from 1 to 2 do {_unit addItemToBackpack ""ACE_packingBandage"";};
_unit addItemToBackpack ""ACE_bloodIV"";
_unit addItemToBackpack ""ACE_bodyBag"";
for ""_i"" from 1 to 2 do {_unit addItemToBackpack ""ACE_epinephrine"";};
for ""_i"" from 1 to 4 do {_unit addItemToBackpack ""ACE_morphine"";};
for ""_i"" from 1 to 2 do {_unit addItemToBackpack ""ACE_tourniquet"";};
for ""_i"" from 1 to 4 do {_unit addItemToBackpack ""ACE_splint"";};
for ""_i"" from 1 to 2 do {_unit addItemToBackpack ""ACE_adenosine"";};
for ""_i"" from 1 to 4 do {_unit addItemToBackpack ""ACE_quikclot"";};
_unit addItemToBackpack ""ACE_salineIV_500"";
_unit addItemToBackpack ""ACE_plasmaIV_500"";
_unit addItemToBackpack ""ACE_microDAGR"";
for ""_i"" from 1 to 2 do {_unit addItemToBackpack ""rhs_mag_M397_HET"";};
for ""_i"" from 1 to 2 do {_unit addItemToBackpack ""rhs_mag_M433_HEDP"";};
_unit addItemToBackpack ""rhs_mag_M441_HE"";
for ""_i"" from 1 to 5 do {_unit addItemToBackpack ""ACE_HuntIR_M203"";};
_unit addItemToBackpack ""rhs_mag_m4009"";
_unit addItemToBackpack ""rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan"";
_unit addItemToBackpack ""1Rnd_HE_Grenade_shell"";
_unit addHeadgear ""rhsusf_opscore_fg_pelt_nsw"";
_unit addGoggles ""rhsusf_oakley_goggles_clr"";

// Add items
_unit linkItem ""ItemMap"";
_unit linkItem ""ItemCompass"";
_unit linkItem ""ACE_Altimeter"";
_unit linkItem ""ItemGPS"";
_unit linkItem ""JAS_GPNVG18_blk_TI"";

// Set identity
[_unit,""WhiteHead_22_a"",""ace_novoice""] call BIS_fnc_setIdentity;
[_unit,""tfy_insignia""] call BIS_fnc_setUnitInsignia;
"


[aa, "init"] call BIS_fnc_exportInventory;

comment ""[!] UNIT MUST BE LOCAL [!]"";
if (!local this) exitWith {};

comment ""Remove existing items"";
removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

comment ""Add weapons"";
this addWeapon ""rhs_weap_hk416d145_m320"";
this addPrimaryWeaponItem ""rhsusf_acc_SFMB556"";
this addPrimaryWeaponItem ""rhsusf_acc_su230"";
this addPrimaryWeaponItem ""rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"";
this addPrimaryWeaponItem ""rhs_mag_M441_HE"";

comment ""Add containers"";
this forceAddUniform ""U_B_T_Soldier_SL_F"";
this addVest ""V_PlateCarrier2_tna_F"";
this addBackpack ""B_ViperLightHarness_oli_F"";

comment ""Add binoculars"";
this addWeapon ""Rangefinder"";

comment ""Add items to containers"";
this addItemToUniform ""ACE_EarPlugs"";
this addItemToUniform ""ACE_IR_Strobe_Item"";
this addItemToUniform ""ACE_CableTie"";
this addItemToUniform ""ACE_MapTools"";
this addItemToUniform ""acex_intelitems_notepad"";
for ""_i"" from 1 to 3 do {this addItemToUniform ""HandGrenade"";};
for ""_i"" from 1 to 2 do {this addItemToUniform ""SmokeShellGreen"";};
this addItemToVest ""ACE_DefusalKit"";
this addItemToVest ""ACE_M26_Clacker"";
this addItemToVest ""ACE_Banana"";
for ""_i"" from 1 to 2 do {this addItemToVest ""ACE_packingBandage"";};
for ""_i"" from 1 to 5 do {this addItemToVest ""rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"";};
for ""_i"" from 1 to 5 do {this addItemToVest ""rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red"";};
for ""_i"" from 1 to 4 do {this addItemToVest ""1Rnd_SmokeGreen_Grenade_shell"";};
for ""_i"" from 1 to 3 do {this addItemToVest ""1Rnd_HE_Grenade_shell"";};
for ""_i"" from 1 to 2 do {this addItemToVest ""UGL_FlareGreen_F"";};
this addItemToBackpack ""ACE_HuntIR_monitor"";
this addItemToBackpack ""ACE_WaterBottle"";
for ""_i"" from 1 to 2 do {this addItemToBackpack ""ACE_Canteen"";};
for ""_i"" from 1 to 2 do {this addItemToBackpack ""ACE_packingBandage"";};
this addItemToBackpack ""ACE_bloodIV"";
this addItemToBackpack ""ACE_bodyBag"";
for ""_i"" from 1 to 2 do {this addItemToBackpack ""ACE_epinephrine"";};
for ""_i"" from 1 to 4 do {this addItemToBackpack ""ACE_morphine"";};
for ""_i"" from 1 to 2 do {this addItemToBackpack ""ACE_tourniquet"";};
for ""_i"" from 1 to 4 do {this addItemToBackpack ""ACE_splint"";};
for ""_i"" from 1 to 2 do {this addItemToBackpack ""ACE_adenosine"";};
for ""_i"" from 1 to 4 do {this addItemToBackpack ""ACE_quikclot"";};
this addItemToBackpack ""ACE_salineIV_500"";
this addItemToBackpack ""ACE_plasmaIV_500"";
this addItemToBackpack ""ACE_microDAGR"";
for ""_i"" from 1 to 2 do {this addItemToBackpack ""rhs_mag_M397_HET"";};
for ""_i"" from 1 to 2 do {this addItemToBackpack ""rhs_mag_M433_HEDP"";};
this addItemToBackpack ""rhs_mag_M441_HE"";
for ""_i"" from 1 to 5 do {this addItemToBackpack ""ACE_HuntIR_M203"";};
this addItemToBackpack ""rhs_mag_m4009"";
this addItemToBackpack ""rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan"";
this addItemToBackpack ""1Rnd_HE_Grenade_shell"";
this addHeadgear ""rhsusf_opscore_fg_pelt_nsw"";
this addGoggles ""rhsusf_oakley_goggles_clr"";

comment ""Add items"";
this linkItem ""ItemMap"";
this linkItem ""ItemCompass"";
this linkItem ""ACE_Altimeter"";
this linkItem ""ItemGPS"";
this linkItem ""JAS_GPNVG18_blk_TI"";

comment ""Set identity"";
[this,""WhiteHead_22_a"",""ace_novoice""] call BIS_fnc_setIdentity;
[this,""tfy_insignia""] call BIS_fnc_setUnitInsignia;