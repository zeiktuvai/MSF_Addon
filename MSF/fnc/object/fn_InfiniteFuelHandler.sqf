

private _vics = ["MSF_Helper_InfFuel_Enable"] call MSF_fnc_GetVehiclesByProperty;

if (count _vics > 0) then {
	[_vics] spawn 
	{ 
		params ["_vicList"];

		while { count (_vicList select { alive _x }) > 0 } do 
		{
			{
				if (fuel _x < 1) then 
				{ 
					_x setFuel 1; 
				}; 
			} forEach _vicList;
			systemChat format ["%1 vics alive, sleeping", count (_vicList select { alive _x }) ];
			sleep 300;
		};
	};
};