params [["_class", "", [""]], ["_type", "", [""]]];

parseSimpleArray selectRandom getArray (configFile >> "MSFConfig" >> "Locations" >> _class >> _type >> "Compositions");
