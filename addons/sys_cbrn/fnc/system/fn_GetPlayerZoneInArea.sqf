params ["_logic"];

private _zone = 0;
private _modArea = _logic getVariable ["objectArea", [100, 100]];

if (player inArea [_logic, _modArea select 1, _modArea select 0, 0, _modArea select 3]) then {
	private _dist = player distance _logic;
	private _mark = ([_logic, false] call MSF_fnc_GetAreaRadius) / 5;
	
	if (_dist > _mark * 4) then
	{
		_zone = 1;
	};
	
	if (_dist < _mark * 4) then
	{
		_zone = 2;
	};
	
	if (_dist < _mark * 3) then
	{
		_zone = 3;
	};
	
	if (_dist < _mark * 2) then
	{
		_zone = 4;
	};
	
	if (_dist < _mark * 1) then
	{
		_zone = 5;
	};
};

_zone;