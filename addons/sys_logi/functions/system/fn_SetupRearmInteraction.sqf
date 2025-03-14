params [["_object", objNull, [objNull]], ["_repeat", true, [true]]];

[
	_object,
	"Re-Arm",
	"a3\ui_f\data\igui\cfg\cursors\iconrearmat_ca.paa",
	"a3\ui_f\data\igui\cfg\cursors\iconrearmat_ca.paa",
	"true",
	"true",
	{},
	{},
	{
		[_caller] call MSF_Logi_fnc_RearmUnit;
	},
	{},
	[],
	2,
	nil,
	!_repeat,
	false
] remoteExec ["BIS_fnc_holdActionAdd", 0, _object];
