class rhs_weap_SCARH_LB;
class MSF_rhs_SCARH : rhs_weap_SCARH_LB
{
	scope = 1;
	displayName = "MSF SCARH (Long Barrel)";
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG_MDO";
		};
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15side_bk";
		};
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "ACE_muzzle_mzls_B";
		};
		class LinkedItemsUnder {
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_grip2";
		};
	};
};