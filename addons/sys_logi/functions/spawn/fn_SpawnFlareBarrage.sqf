params [["_pos", [], [[]]], ["_type", "", [""]]];

private _class = switch (_type) do {
	case "ArtyFlareG": { "F_40mm_Green_Illumination" };
	case "ArtyFlareR": { "F_40mm_Red_Illumination" };
	case "ArtyFlareW": { "F_40mm_White_Illumination" };
	case "ArtyFlareY": { "F_40mm_Yellow_Illumination" };
	default { "F_40mm_White_Illumination" };
};

[_pos, _class] spawn {
	params ["_pos", "_class"];

	private _altitude = 100;
	private _velocity = [wind select 0,wind select 1,30];
	private _sound = "a3\missions_f_beta\data\sounds\Showcase_Night\flaregun_4.wss";
	private _ammo = _class;
	private _var = [50, 60, 70];
	private _posAmmo = [_pos, [_pos, random _var, random 360] call BIS_fnc_relPos, [_pos, random _var, random 360] call BIS_fnc_relPos];
	
	for "_i" from 0 to 2 do {
		{
			private _sound = selectRandom ["MSF_DistantMortar1", "MSF_DistantMortar2", "MSF_DistantMortar3"];
			[_sound] remoteExec ["playSound"];
			sleep random [1, 2, 3];
		} forEach _posAmmo;
		
		sleep random [10, 12, 15];

		{
			private _loc = _posAmmo select _forEachIndex;
			sleep random [1, 2, 4];
			_loc set [2, _altitude];
			private _projectile = createVehicle [_ammo,_loc,[],0,"none"];
			_projectile setPos _loc;
			_projectile setVelocity _velocity;
			sleep 2;
			playSound3D [_sound, _projectile];
		} forEach _posAmmo;

		sleep 40;		
	};	
};

