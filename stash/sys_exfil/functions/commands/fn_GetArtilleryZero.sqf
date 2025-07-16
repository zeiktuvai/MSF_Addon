params [["_logic", objNull, [objNull]], ["_grp", "", [""]], ["_isSameLoc", false, [false]]];

private _zeroVar = _logic getVariable [format ["Zero_%1", _grp], 0];
if (_isSameLoc) then {
	private _zero = 0;
	if !(isNil { _logic getVariable format ["Zero_%1", _grp]}) then {
	 	_zero = _zeroVar + 1;
	};
	if (_zero > 6) then {_zero = 6};
	_logic setVariable [format ["Zero_%1", _grp], _zero];
	_zero
}
else
{
	_logic setVariable [format ["Zero_%1", _grp], nil];
	0;
};
