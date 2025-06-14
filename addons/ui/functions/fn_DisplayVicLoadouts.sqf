disableSerialization;

createDialog "MSF_VicLoadout";

//TODO: Update with code to get stored loadouts.
tvAdd [1500, [], "Private"];
//tvAdd [1500, [0], "Supply Truck"];
tvAdd [1500, [], "Server"];
//tvAdd [1500, [1], "TFY Ambulance"];
tvExpand [1500, [0]];
tvExpand [1500, [1]];
tvSetCurSel [1500, [0,0]];

lnbAddColumn [1501, 0.05];
lnbAddColumn [1501, 0.1];
lnbAddColumn [1501, 0.9];