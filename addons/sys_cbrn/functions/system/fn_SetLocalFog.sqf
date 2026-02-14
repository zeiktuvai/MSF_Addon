params [["_logic", objNull, [objNull]], ["_area", 100, [1]]];

private _emitter = "#particlesource" createVehicle (getPos _logic);
private _pos = getPos _logic;
_emitter setPos _pos;

private _colorRed = 0.6;
private _colorGreen = 0.6;
private _colorBlue = 0.1;
private _colorAlpha = 0.5;
private _timeout = 0;
private _particleLifeTime = 30;
private _particleDensity = 50;
private _particleSize = 75;
private _particleSpeed = 0;
private _particleLifting = 0.2 ;
private _windEffect = 0;
private _effectSize = _area;
private _expansion = 0;

_emitter setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal_02",8,0,40,1],"","billboard",1,_particleLifeTime,[0,0,0],[0,0,2*_particleSpeed],0,0.05,0.04*_particleLifting,0.05*_windEffect,[1 *_particleSize + 1,1.8 * _particleSize + 15],
	[[0.7*_colorRed,0.7*_colorGreen,0.7*_colorBlue,0.7*_colorAlpha],[0.7*_colorRed,0.7*_colorGreen,0.7*_colorBlue,0.6*_colorAlpha],[0.7*_colorRed,0.7*_colorGreen,0.7*_colorBlue,0.45*_colorAlpha],
	[0.84*_colorRed,0.84*_colorGreen,0.84*_colorBlue,0.28*_colorAlpha],[0.84*_colorRed,0.84*_colorGreen,0.84*_colorBlue,0.16*_colorAlpha],[0.84*_colorRed,0.84*_colorGreen,0.84*_colorBlue,0.09*_colorAlpha],
	[0.84*_colorRed,0.84*_colorGreen,0.84*_colorBlue,0.06*_colorAlpha],[1*_colorRed,1*_colorGreen,1*_colorBlue,0.02*_colorAlpha],[1*_colorRed,1*_colorGreen,1*_colorBlue,0*_colorAlpha]],
	[1,0.55,0.35], 0.1, 0.08*_expansion, "", "", ""];
_emitter setParticleRandom [_particleLifeTime/2, [0.5*_effectSize,0.5*_effectSize,0.2*_effectSize], [0.3,0.3,0.5], 1, 0, [0,0,0,0.06], 0, 0];
_emitter setDropInterval (1/_particleDensity);

_logic setVariable ["Emitter", _emitter];





//"Land_Device_assembled_F", 
//"Land_WaterTank_F"


// private _emitterArray = "#particlesource" createVehicle (getPos _logic);

// if (isMultiplayer) then {
// 	[_logic,_fnc,nil,true] call BIS_fnc_MP;
// } else {
// 	_logic call (missionnamespace getvariable _fnc);
// };


