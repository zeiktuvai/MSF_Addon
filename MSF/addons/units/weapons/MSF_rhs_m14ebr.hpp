class rhs_weap_m14ebrri;
class MSF_rhs_weap_m14ebrri : rhs_weap_m14ebrri
{
	scope = 1;
	displayName = "MSF EBR-RI";
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_DMS";
		};
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15side_bk";
		};
		class LinkedItemsUnder {
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_harris_bipod";
		};
	};
};