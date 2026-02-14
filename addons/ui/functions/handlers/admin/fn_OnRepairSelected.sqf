params ["_ctrl"];

{
	private _idx = _x;
	private _unit = (allPlayers select {str _x == tvData [1500, _idx]}) # 0;
	
	if (objectParent _unit isNotEqualTo objNull) then {
		vehicle _unit setDamage 0;
	};
} forEach (tvSelection _ctrl)
