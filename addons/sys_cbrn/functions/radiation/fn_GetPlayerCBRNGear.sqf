params [["_unit", objNull, [objNull]], ["_slot", 0, [0]]];

private _suits = parseSimpleArray format ["[%1]", MSF_CBRN_ProtSuit];
private _masks = parseSimpleArray format ["[%1]", MSF_CBRN_ProtMask];
private _suit =	parseNumber (uniform _unit in _suits);
private _mask = parseNumber (goggles _unit in _masks);

switch (_slot) do {
	case 1: {_suit == 1};
	case 2: {_mask == 1};
	default {[_suit, _mask]};
};
