params ["_logic"];

private _script = [_logic] spawn {
	params ["_logic"];
  	private _foundation = localNamespace getVariable "MSF_Local";

	_emitter = (_logic getVariable "effectEmitter") select 0;
	_pos = getPos _logic;
	_emitter setPos _pos;

	//--- variables set by user
	_colorRed = 0.6;
	_colorGreen = 0.6;
	_colorBlue = 0.1;
	_colorAlpha = 0.5;
	_timeout = 0;
	_particleLifeTime = 30;
	_particleDensity = 500;
	_particleSize = 100;
	_particleSpeed = 0;
	_particleLifting = 1 ;
	_windEffect = 0;
	_effectSize = 100;
	_expansion = 0;


	while {true} do {
		private _zone = [_logic] call MSF_CBRN_fnc_GetPlayerZoneInArea;
		//private _screen = _foundation get "Fog_Overlay";

		if (_zone > 0) then {
			switch (_zone) do {
				case 1: { };
				case 2: { };
				case 3: { };
				case 4: { };
				case 5: { };
			};
		}
		else
		{
			
			// if (!(isNil "_screen")) then 
			// {
			// 	ppEffectDestroy _screen;
			// 	_foundation deleteAt "Fog_Overlay";
			// };
		};

		// if (isNil "_screen") then {
		// 	_handle = ppEffectCreate ["colorCorrections", 1500];
		// 	_handle ppEffectEnable true;
		// 	_handle ppEffectAdjust [1.0, 1.0, 0.0, [0.9, 0.9, 0.1, 0.1], [0.5, 0.5, 0.5, 0.8], [0.199, 0.587, 0.114, 0.0]];
		// 	_handle ppEffectCommit 0;
		// 	_foundation set ["Fog_Overlay", _handle];
		// };

		sleep 5;
  };
};

//_logic getVariable "effectEmitter"

//"Land_Device_assembled_F", 
//"Land_WaterTank_F"

if ((_fnc != "") && !(isNull _logic)) then {
    _emitterArray = [];
    while {_nr > 0} do {
        _source = "#particlesource" createVehicle (getPos _logic);
        _emitterArray = _emitterArray + [_source];
        _nr = _nr - 1;
    };
    _logic setVariable ["effectEmitter",_emitterArray,true];

};
