params ["_unit"];

//items in vehicle that are containers (backpacks, uniforms, platecarriers, etc).
private _containers = everyContainer _unit;
//items in vehicle minus items that are containers
private _items = itemCargo _unit select { _item = _x; _containers findIf { _x select 0 == _item } isEqualTo -1 };
private _return = createHashMap;
private _containerItems = createHashMap;

//items in vic
_return set ["Items", _items call BIS_fnc_consolidateArray];
// mags in vic
_return set ["Mags", magazinesAmmoCargo _unit call BIS_fnc_consolidateArray];
// weapons in vic
_return set ["Weapons", weaponsItemsCargo _unit call BIS_fnc_consolidateArray];

{
	_x params[ "_cType", "_cont" ];
	
	_containerItems set [
		format ["%1_%2", _cType, [1, 999] call BIS_fnc_randomInt],
		createHashMapFromArray [
		["Type", _cType],
		// container items
		["Items", itemCargo _cont call BIS_fnc_consolidateArray],
		// container mags
		["Mags", magazinesAmmoCargo _cont call BIS_fnc_consolidateArray],
		// container weaps
		["Weapons", weaponsItemsCargo _cont call BIS_fnc_consolidateArray]
		]
	];
} forEach _containers;

_return set ["Containers", _containerItems];
_return;