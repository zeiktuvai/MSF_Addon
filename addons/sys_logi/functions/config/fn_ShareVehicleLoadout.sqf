private _public = missionNamespace getVariable "MSF_Shared_VehicleLoadouts";

if !(isNil "_public") then {
	private _playerID = getPlayerUID player;
	private _local = profileNamespace getVariable ["MSF_VehicleLoadouts", createHashMap];
	private _shared = createHashMapFromArray [["PlayerName", profileNameSteam], ["Loadouts", createHashMap]];

	{
		if (typeName _y == "HASHMAP") then {
			if (_y get "Shared") then {
				(_shared get "Loadouts") set [_x, _y];
			};
		};
	} forEach _local;

	if (count (_shared get "Loadouts") > 0) then {
		_public set [_playerID, _shared];
	}
	else
	{
		private _existing = _public get _playerID;
		if !(isNil "_existing") then {
			_public deleteAt _playerID;
		};
	};

	missionNamespace setVariable ["MSF_Shared_VehicleLoadouts", _public, true];
};


//[["Aunti - Supply Truck",[["Weapons",[[["CUP_launch_RPG7V","","","",[],[],""],1],[["CUP_launch_FIM92Stinger","","","",[],[],""],6]]],["Mags",[[["CUP_PG7V_M",1],30],[["CUP_1Rnd_StarFlare_White_M203",1],40],[["ACE_HuntIR_M203",1],10],[["CUP_1Rnd_HE_M203",1],20],[["IEDUrbanSmall_Remote_Mag",1],4],[["IEDLandSmall_Remote_Mag",1],4]]],["Items",[["ACE_rope12",1],["ToolKit",1],["ACE_EarPlugs",1],["ACE_DefusalKit",1],["ACE_wirecutter",1],["ACE_CableTie",5],["ACE_UAVBattery",2],["ACE_Flashlight_XL50",2],["ACE_packingBandage",15],["ACE_quikclot",15],["ACE_morphine",15],["ACE_epinephrine",5],["ACE_adenosine",5],["ACE_tourniquet",5],["ACE_bodyBag",2],["ACE_personalAidKit",2],["ACE_bloodIV_500",8],["ACE_bloodIV",5],["ACE_Canteen",5],["ACE_MRE_BeefStew",2],["ACE_MRE_ChickenTikkaMasala",2],["ACE_MRE_ChickenHerbDumplings",2],["ACE_MRE_CreamChickenSoup",2],["ACE_MRE_CreamTomatoSoup",2],["ACE_MRE_LambCurry",2],["ACE_MRE_MeatballsPasta",1],["ACE_MRE_SteakVegetables",2],["MineDetector",2],["ACE_Banana",1],["ACE_painkillers_Item",10],["ACE_microDAGR",2]]],["Containers",[]],["Shared",true]]],["AA Test",[["Weapons",[]],["Mags",[[["CUP_1Rnd_StarFlare_White_M203",1],29],[["CUP_PG7V_M",1],30],[["ACE_HuntIR_M203",1],10],[["CUP_1Rnd_HE_M203",1],20],[["IEDUrbanSmall_Remote_Mag",1],4],[["IEDLandSmall_Remote_Mag",1],4]]],["Items",[["ACE_rope12",1],["ACE_EarPlugs",1],["ACE_DefusalKit",1],["ACE_wirecutter",1],["ACE_CableTie",5],["ACE_UAVBattery",2],["ACE_Flashlight_XL50",2],["ACE_packingBandage",15],["ACE_quikclot",15],["ACE_morphine",15],["ACE_epinephrine",5],["ACE_adenosine",5],["ACE_tourniquet",5],["ACE_bodyBag",2],["ACE_personalAidKit",2],["ACE_bloodIV_500",8],["ACE_bloodIV",5],["ACE_Canteen",5],["ACE_MRE_BeefStew",2],["ACE_MRE_ChickenTikkaMasala",2],["ACE_MRE_ChickenHerbDumplings",2],["ACE_MRE_CreamChickenSoup",2],["ACE_MRE_CreamTomatoSoup",2],["ACE_MRE_LambCurry",2],["ACE_MRE_MeatballsPasta",1],["ACE_MRE_SteakVegetables",2],["MineDetector",2],["ACE_Banana",1],["ACE_painkillers_Item",10],["ACE_microDAGR",2]]],["Containers",[["MSF_mc_BaseBackpack_325",[["Weapons",[]],["Mags",[[["HandGrenade",1],2],[["SmokeShellRed",1],1],[["SmokeShellGreen",1],1],[["30Rnd_65x39_caseless_mag_Tracer",30],3]]],["Items",[["ACE_quikclot",5],["ACE_packingBandage",5],["ACE_tourniquet",2],["ACE_splint",2],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_morphine",4],["ACE_salineIV_500",2],["ACE_bloodIV",1],["ACE_bodyBag",1],["ACE_EarPlugs",1],["ACE_MapTools",1],["ACE_M26_Clacker",1],["ACE_IR_Strobe_Item",1],["ACE_CableTie",1],["ACE_HuntIR_monitor",1],["ACE_WaterBottle",1],["ACE_Canteen",1],["ACE_microDAGR",1]]],["Type","MSF_mc_BaseBackpack"]]]]],["Shared",false]]],["SP2",[["Weapons",[[["launch_NLAW_F","","","",[],[],""],4],[["CUP_launch_FIM92Stinger","","","",[],[],""],3],[["hgun_P07_F","","","",[],[],""],1],[["CUP_arifle_ACR_DMR_wdl_68","","CUP_acc_ANPEQ_15","CUP_optic_SB_3_12x50_PMII_Tan_PIP",["CUP_30Rnd_680x43_Stanag_Tracer_Green",30],[],"bipod_01_F_khk"],1]]],["Mags",[[["SmokeShellRed",1],1],[["SmokeShellOrange",1],2],[["SmokeShellBlue",1],1],[["ACE_Chemlight_Orange",1],1],[["ACE_Chemlight_HiRed",1],1],[["ACE_Chemlight_HiBlue",1],1],[["16Rnd_9x21_green_Mag",17],5]]],["Items",[["ACE_Banana",1],["ACE_DefusalKit",4],["ACE_DeadManSwitch",3],["ACE_Can_Franta",2],["ACE_Can_RedGull",2],["ACE_MRE_CreamTomatoSoup",1],["ACE_MRE_CreamChickenSoup",1],["ACE_MRE_MeatballsPasta",1],["ACE_MRE_ChickenHerbDumplings",1],["ACE_EarPlugs",3],["ACE_fieldDressing",6],["ACE_packingBandage",4],["ACE_elasticBandage",5],["ACE_morphine",12],["ACE_epinephrine",5],["ACE_bloodIV",4],["ACE_bloodIV_250",4],["ACE_quikclot",4],["ACE_painkillers_Item",7],["ACE_rope6",1]]],["Containers",[["CUP_V_RUS_6B3_1_475",[["Weapons",[]],["Mags",[]],["Items",[]],["Type","CUP_V_RUS_6B3_1"]]],["CUP_B_AGS30_Tripod_Bag_362",[["Weapons",[]],["Mags",[]],["Items",[]],["Type","CUP_B_AGS30_Tripod_Bag"]]],["U_B_CombatUniform_mcam_541",[["Weapons",[]],["Mags",[[["SmokeShellGreen",1],2],[["acex_intelitems_notepad",1],1]]],["Items",[["MineDetector",1],["ACE_ATragMX",1],["ACE_RangeCard",1],["ACE_Banana",1],["ACE_WaterBottle",1]]],["Type","U_B_CombatUniform_mcam"]]],["V_PlateCarrier2_rgr_739",[["Weapons",[]],["Mags",[[["ACE_CTS9",1],2],[["30Rnd_9x21_Mag",30],2],[["CUP_30Rnd_680x43_Stanag_Tracer_Green",30],6]]],["Items",[["ACE_UAVBattery",1]]],["Type","V_PlateCarrier2_rgr"]]],["MSF_mc_BaseBackpack_199",[["Weapons",[]],["Mags",[[["HandGrenade",1],2],[["SmokeShellRed",1],1],[["SmokeShellGreen",1],1]]],["Items",[["ACE_quikclot",5],["ACE_packingBandage",5],["ACE_tourniquet",2],["ACE_splint",2],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_morphine",4],["ACE_salineIV_500",2],["ACE_bloodIV",1],["ACE_bodyBag",1],["ACE_EarPlugs",1],["ACE_MapTools",1],["ACE_M26_Clacker",1],["ACE_IR_Strobe_Item",1],["ACE_CableTie",1],["ACE_HuntIR_monitor",1],["ACE_WaterBottle",1],["ACE_Canteen",1],["ACE_microDAGR",1]]],["Type","MSF_mc_BaseBackpack"]]]]],["Shared",false]]]]
