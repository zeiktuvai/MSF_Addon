params ("_dude", "_stances");

if (!isServer)  exitWith {};

_dude removeAllEventHandlers "FiredNear";
while {alive _dude} do {
	if ((unitPos _dude) == (_stances select 0)) then {
		_dude setUnitPos (_stances select 1);
	} else {
		_dude setUnitPos (_stances select 0);
	};
	sleep (1 + (random 7));
};