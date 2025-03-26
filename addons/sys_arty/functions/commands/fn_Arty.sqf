private _zero = 6;
private _closeUnits = _leader nearObjects 50 select { _x isKindOf "man" && side _x == side player};




private _leader = leader player;
private _pos = position _leader;

private _trig = createTrigger ["emptyDetector", _pos];
_trig setTriggerArea [25, 25, 0, false, -1];

[_trig] spawn
{
	params ["_trig"];

	
};
