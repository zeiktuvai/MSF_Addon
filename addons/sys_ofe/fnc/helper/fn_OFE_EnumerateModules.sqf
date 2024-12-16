params [["_modules", [], [[]]]];

private _count = 0;

{
	_x params ["_name", "_hasType", ["_type", 0]];
	
	if (_hasType) then {
		_count = _count + count (allMissionObjects _name select { _x getVariable "Type" == _type });
	} 
	else
	{
		_count = _count + count (allMissionObjects _name);
	};
} forEach _modules;

_count;
