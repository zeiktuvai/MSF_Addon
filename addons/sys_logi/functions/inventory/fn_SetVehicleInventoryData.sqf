params [["_unit", objNull, [objNull]], ["_inventory", createHashMap, [createHashMap]]];

clearItemCargoGlobal _unit;
clearMagazineCargoGlobal _unit;
clearWeaponCargoGlobal _unit;
clearBackpackCargoGlobal _unit;

[0, _inventory get "Items", _unit] call MSF_Logi_fnc_AddVehicleCargoFormatted;
[1, _inventory get "Mags", _unit] call MSF_Logi_fnc_AddVehicleCargoFormatted;
[2, _inventory get "Weapons", _unit] call MSF_Logi_fnc_AddVehicleCargoFormatted;

{
	_itemName = _y get "Type";
	if ( _itemName call BIS_fnc_itemType select 1 == "backpack" ) then {
		_unit addBackpackCargoGlobal[ _itemName, 1 ];
	}else{
		_unit addItemCargoGlobal[ _itemName, 1 ];
	};
	
	private _container = nil;
	{
		if (_x # 0 isEqualTo _itemName) then {_container = _x # 1};
	} forEach everyContainer _unit;

	//(everyContainer _unit select -1) params[ "_type", "_container" ];
		
	clearItemCargoGlobal _container;
	clearMagazineCargoGlobal _container;
	clearWeaponCargoGlobal _container;
	clearBackpackCargoGlobal _container;

	[0, _y get "Items", _container] call MSF_Logi_fnc_AddVehicleCargoFormatted;
	[1, _y get "Mags", _container] call MSF_Logi_fnc_AddVehicleCargoFormatted;
	[2, _y get "Weapons", _container] call MSF_Logi_fnc_AddVehicleCargoFormatted;
} forEach (_inventory get "Containers");
