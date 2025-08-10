params [["_points", 0, [0]], ["_subtract", false, [false]], ["_side", west, [west]]];

private _logi = ((missionNamespace getVariable "MSF") get "Logi_Points");
private _curPoints = _logi get _side;
private _sum = 0;

if (_subtract) then {
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

_logi set [_side, _sum];
["MSF", "Logi_Points", _logi] call MSF_fnc_SetConfigValue;
