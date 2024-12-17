_return = [];
_cfg = [] call MSF_fnc_GetLocalConfig;

if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'Drones' >> 'Classes') && isArray(_cfg >> 'MSF_Mission_Classes' >> 'Drones' >> 'Count'))
then 
{
	private _drones = getArray (_cfg >> 'MSF_Mission_Classes' >> 'Drones' >> 'Classes');
	private _num = getArray (_cfg >> 'MSF_Mission_Classes' >> 'Drones' >> 'Count');
	private _count = 0;
	private _max = count _drones;

	if (count _drones == count _num) then
	{
		while {_count < _max} do {			
			_return pushBack [_drones select _count, _num select _count];
			_count = _count + 1;
		};
	};
};

_return;