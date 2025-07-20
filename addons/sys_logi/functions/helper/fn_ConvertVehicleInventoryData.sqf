private _lds = profileNamespace getVariable ["MSF_VehicleLoadouts", createHashMap];
private _array = 0;

{
	if (typeName _y == "ARRAY") then {_array = _array + 1;};
} forEach _lds;

if (_array > 0) then {
	copyToClipboard str _lds;
	private _return = createHashMap;
	private _containerItems = createHashMap;

	{	   
		{	
			_x params[ "_cType", "_cont" ];
	
			_containerItems set [
				format ["%1_%2", _cType, [1, 999] call BIS_fnc_randomInt],
				createHashMapFromArray [	
					["Type", _cType],
					["Items", _cont # 0],
					["Mags", _cont # 1],
					["Weapons", _cont # 2]
				]
			]
		} forEach _y # 0 # 0 # 1;
		
		 _return set [
			_x, 
			createHashMapFromArray [
				["Items", _y # 0 # 0 # 0 # 0],
				["Mags", _y # 0 # 0 # 0 # 1],
				["Weapons", _y # 0 # 0 # 0 # 2],
				["Containers", _containerItems],
				["Shared", _y # 1]	
			]
		];
	} forEach _lds;

	profileNamespace setVariable ["MSF_VehicleLoadouts", _return];
	saveProfileNamespace;

	[] spawn {
		["A recent update to the logistics database required it to be upgraded. <br/><br/> The process is complete, and a backup was copied to the clip board.",
			"Database Converted", true, true] call BIS_fnc_guiMessage;
	};
};
