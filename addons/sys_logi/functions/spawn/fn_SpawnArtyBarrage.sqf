params [["_pos", [], [[]]], ["_type", "", [""]]];

[_pos, _type] spawn {
	params ["_pos", "_type"];

	private _dir = 0;
	private _velocity = [];
	private _altitude = 1000;
	private _ammo = "";
	_pos set [2, _altitude];
	private _posAmmo = [_pos];
	private _sounds = [];
	
	switch (_type) do {
		case "ArtyMis": { 
			private _dir = 0;
			_ammo = "ModuleOrdnanceRocket_F_ammo";
			_posAmmo = [[_pos, 500, _dir + 180] call bis_fnc_relpos];
			_posAmmo set [1, _posAmmo select 0];
			_velocity = [sin _dir * 68,cos _dir * 68,-100];
			_sounds = ["MSF_DistantMissile1", "MSF_DistantMissile2", "MSF_DistantMissile3", "MSF_DistantMissile4"];
		};
		case "ArtyShell": { 
			_ammo = "ModuleOrdnanceHowitzer_F_ammo";
			_posAmmo = [_pos];
			for "_i" from 0 to 1 do {
				_posAmmo pushBack ([_pos, random [20, 30, 40], random 360] call BIS_fnc_relPos);
			};
			_velocity = [0,0,-100];
			_sounds = ["MSF_DistantHowitzer"];
		};
		case "ArtyMortar": { 
			_ammo = "ModuleOrdnanceMortar_F_ammo";
			_posAmmo = [_pos];
			for "_i" from 0 to 2 do {
				_posAmmo pushBack ([_pos, random [10, 20, 30], random 360] call BIS_fnc_relPos);
			};
			_velocity = [0,0,-100];
			_sounds = ["MSF_DistantMortar1", "MSF_DistantMortar2", "MSF_DistantMortar3"];
		};
	};

	{
		[selectRandom _sounds] remoteExec ["playSound"];
		sleep random [1, 2, 3];
	} forEach _posAmmo;
	
	sleep random [10, 12, 15];

	{
		private _loc = _posAmmo select _forEachIndex;
		sleep random [1, 2, 4];
		private _projectile = createVehicle [_ammo, _loc, [], 0, "none"];
		_projectile setPos _loc;
		_projectile setVelocity _velocity;
	} forEach _posAmmo;	
};
