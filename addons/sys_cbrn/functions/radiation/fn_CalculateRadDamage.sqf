params [["_unit", objNull, [objNull]]];

private _suits = parseSimpleArray format ["[%1]", MSF_CBRN_ProtSuit];
private _masks = parseSimpleArray format ["[%1]", MSF_CBRN_ProtMask];
private _suitDur = uniformContainer player getVariable ["MSF_CBRN_Durability", 1];
private _pro = [];
private _combo = 1;

if (goggles _unit in _masks) then {_pro pushBack 0.25};
if (uniform _unit in _suits) then {
	_pro pushBack ([0.75, 0.75 * (_suitDur / 0.35)] select (_suitDur < 0.35));
};
[format ["Protection Reduct: %1", [_pro] call MSF_fnc_SumNumArray]] call MSF_fnc_SendDebugMsg;

{_combo = _combo - _x } forEach _pro;
_combo;
