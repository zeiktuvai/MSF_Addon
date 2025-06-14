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
