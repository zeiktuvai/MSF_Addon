//params [["_side", east [objNull]]];

[
getArray (configFile >> 'MSF_OFE_Config' >> 'Units' >> 'Empty' >> 'UnmannedVic'),
getArray (configFile >> 'MSF_OFE_Config' >> 'Units' >> 'Empty' >> 'UnmannedArmor'),
getArray (configFile >> 'MSF_OFE_Config' >> 'Units' >> 'Empty' >> 'UnmannedStatic')
];