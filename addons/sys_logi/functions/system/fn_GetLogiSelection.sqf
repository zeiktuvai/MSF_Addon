params [["_unit", objNull, [objNull]],["_type", "", [""]]];

switch (_type) do {
	case "Ammo": { 
		[_unit] call MSF_Logi_fnc_SpawnRearmCrate;
	};	
};