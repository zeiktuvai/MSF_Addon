params [["_class", "", [""]], ["_type", "", [""]]];

createHashMapFromArray (
	configProperties [configFile >> "MSFConfig" >> "Locations" >> _class >> _type] apply {
		 [configName _x, [_x] call BIS_fnc_getCfgData] 
	}
);
