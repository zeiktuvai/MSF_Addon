params [["_points", 0, [0]], ["_subtract", 0, [0]]];

private _curPoints = ((missionNamespace getVariable "MSF") get "Logi_Points");
private _sum = 0;

if (_subtract == 1) then {
	if (_curPoints - _points <= 0) then {
		_sum = 0;
	}
	else
	{
		_sum = _curPoints - _points;
	};
}
else
{
	_sum = _curPoints + _points;
};

["MSF", "Logi_Points", _sum] call MSF_fnc_SetConfigValue;
