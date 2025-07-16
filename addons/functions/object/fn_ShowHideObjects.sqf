params [["_objects", [], [[]]], ["_show", true, [true]]];

{
	_x hideObjectGlobal !_show; 
	_x enableSimulationGlobal _show;
} forEach _objects;
