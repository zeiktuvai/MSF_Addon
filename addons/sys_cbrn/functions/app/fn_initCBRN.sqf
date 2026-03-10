[] spawn {
	sleep 10;
	
	if (allMissionObjects "MSF_Module_Radiation_Area" isNotEqualTo [] && !isDedicated) then {
		addMissionEventHandler ["EntityRespawned", {
			params ["_newEntity", "_oldEntity"];

		if !(isNil {_newEntity getVariable "MSF_Radiation"}) then { _newEntity setVariable ["MSF_Radiation", nil]; };
		}];

		player addEventHandler ["SlotItemChanged", {
			params ["_unit", "_name", "_slot", "_assigned", "_weapon"];
			
			private _suits = parseSimpleArray format ["[%1]", MSF_CBRN_ProtSuit];

			if (_assigned && _slot == 801 && uniform player in _suits) then {
				if (uniformContainer player getVariable ["MSF_CBRN_Durability", -1] == -1) then {
					uniformContainer player setVariable ["MSF_CBRN_Durability", 1, true];
				};
			};
		
			//systemChat format ["%1 %2 %3", _assigned, (_assigned && _slot == 801 && uniform player in _suits), ""];
		}];

		[] call MSF_CBRN_fnc_SetRadiationArea;
	};
};
