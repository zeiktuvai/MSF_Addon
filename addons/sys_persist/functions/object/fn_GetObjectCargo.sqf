params ["_unit"];

private _containers = everyContainer _unit; 

private _items = itemCargo _unit select {
	_item = _x; 
	_containers findIf { _x select 0 == _item } isEqualTo -1 };

private _vicContents = [ 
	_items call BIS_fnc_consolidateArray,
	magazinesAmmoCargo _unit call BIS_fnc_consolidateArray,
	weaponsItemsCargo _unit call BIS_fnc_consolidateArray
];

private _containerCont = [];

{
	_x params[ "_cType", "_cont" ];
	
	_containerCont pushBack [ 
		_cType,
		[
			itemCargo _cont call BIS_fnc_consolidateArray,
			magazinesAmmoCargo _cont call BIS_fnc_consolidateArray,
			weaponsItemsCargo _cont call BIS_fnc_consolidateArray
		]
	];
} forEach _containers;

[[ _vicContents, _containerCont ]];
