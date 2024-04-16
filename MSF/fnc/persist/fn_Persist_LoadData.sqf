	private _vehicleList = vehicles select { _x getVariable "MSF_Persist_isEnable" == true; };
	private _prevMiss = format ["MSF_Persist_%1", [MSF_Persist_Miss_Num - 1, 0] call BIS_fnc_cutDecimals];
	private _data = missionProfileNamespace getVariable [_prevMiss, []];

	if (count _data != 0) then
	{
		{
			(_x select 0) params ["_vicName", "_vicType", "_dmg", "_inv", "_look", "_ammo", "_fuel", "_isAlive", "_loc", "_aceRefuel", "_aceRearm"];
			private ["_vic"];

			if (!isNil "_vic") then {
				[_vic, _vicType, _inv, _dmg, _look, _ammo, _fuel, _isAlive, _loc, _aceRefuel, _aceRearm] call MSF_fnc_Persist_SetVehicleData;
			};
		} forEach _data;
	};