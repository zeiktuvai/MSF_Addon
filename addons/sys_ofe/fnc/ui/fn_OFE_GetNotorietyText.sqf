params [["_id", 4, [4]]];
private ["_val"];

switch (_id) do {
	case 4: { _val = "<t color='#880808'>Wanted</t>" };
	case 3: { _val = "<t color='#CC5500'>High</t>" };
	case 2: { _val = "<t color='#FFC300'>Medium</t>" };
	case 1: { _val = "<t color='#abebc6'>Low</t>" };
	case 0: { _val = "<t color='#145a32'>Insignificant</t>" };
	default { _val = "<t color='#145a32'>Unkown</t>"}
};
_val;