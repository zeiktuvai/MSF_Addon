// Type 0: Armory/Weapons 1: Supply Cache
params [["_class", "", [""]], ["_type", "", [""]]];

parseSimpleArray selectRandom getArray (configFile >> "MSF_OFE_Config" >> "LocationTypes" >> _class >> _type >> "Compositions");
