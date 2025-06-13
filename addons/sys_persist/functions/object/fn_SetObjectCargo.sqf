params ["_unit", "_inventory"];


{
	_x params[ "_vicContents", "_containerCont" ];	

	clearItemCargoGlobal _unit;
	clearMagazineCargoGlobal _unit;
	clearWeaponCargoGlobal _unit;
	clearBackpackCargoGlobal _unit;
				
	{
		[_forEachIndex, _x, _unit] call MSF_Logi_fnc_AddVehicleCargoFormatted;
	} forEach _vicContents;
	
	{
		_x params[ "_containerType", "_containerContents" ];
		
		if ( _containerType call BIS_fnc_itemType select 1 == "backpack" ) then {
			_unit addBackpackCargoGlobal[ _containerType, 1 ];
		}else{
			_unit addItemCargoGlobal[ _containerType, 1 ];
		};
		everyContainer _unit select ( count everyContainer _unit - 1 ) params[ "_type", "_container" ];
		
		clearItemCargoGlobal _container;
		clearMagazineCargoGlobal _container;
		clearWeaponCargoGlobal _container;
		clearBackpackCargoGlobal _container;
		
		{
			[_forEachIndex, _x, _container] call MSF_Logi_fnc_AddVehicleCargoFormatted;
		} forEach _containerContents;		
	} forEach _containerCont;			
} forEach _inventory;



// [
// 	[
// 		[
// 			[["ACE_rope6",1]],
// 			[],
// 			[]
// 		],
// 		[
// 			["MSF_mc_BaseBackpack",
// 				[
// 					[
// 						["ACE_quikclot",5],["ACE_packingBandage",5],["ACE_tourniquet",2],["ACE_splint",2],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_morphine",4],["ACE_salineIV_500",2],["ACE_bloodIV",1],["ACE_bodyBag",1],["ACE_EarPlugs",1],["ACE_MapTools",1],["ACE_M26_Clacker",1],["ACE_IR_Strobe_Item",1],["ACE_CableTie",1],["ACE_HuntIR_monitor",1],["ACE_WaterBottle",1],["ACE_Canteen",1],["ACE_microDAGR",1]
// 					],
// 					[
// 						[["HandGrenade",1],2],[["SmokeShellRed",1],1],[["SmokeShellGreen",1],1]
// 					],
// 					[]
// 				]
// 			]
// 		]
// 	]
// ]