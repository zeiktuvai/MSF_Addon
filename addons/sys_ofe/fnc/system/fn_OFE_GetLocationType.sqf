// Returns hashmap
params [["_class", "", [""]], ["_type", "", [""]]];

createHashMapFromArray (
	configProperties [configFile >> "MSF_OFE_Config" >> "LocationTypes" >> _class >> _type] apply {
		 [configName _x, [_x] call BIS_fnc_getCfgData] 
	}
);
