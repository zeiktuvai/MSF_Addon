params [["_caller", 0, [0]]];

disableSerialization;

createDialog "MSFInputDialog";
ctrlSetText [10011, "Loadout Name"];
(findDisplay 6219 displayCtrl 10011) setVariable ["Caller", _caller];
(findDisplay 6219 displayCtrl 10011) getVariable "Caller";