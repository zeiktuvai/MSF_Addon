params ["_ctrl"];

{
	private _idx = _x;
	[(allPlayers select {str _x == (tvData [1500, _idx])}) # 0] call ace_medical_fnc_fullHeal;
} forEach (tvSelection _ctrl)
