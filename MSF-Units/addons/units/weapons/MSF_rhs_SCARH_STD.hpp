class rhs_weap_SCARH_STD;
class MSF_rhs_SCARH_STD : rhs_weap_SCARH_STD
{
	scope = 1;
	displayName = "MSF SCARH (STD)";
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "rhsusf_acc_ACOG_MDO";
		};
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15A";
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