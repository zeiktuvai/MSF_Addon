params ["_units"];

private _handle = [_units] spawn {
  _this params ["_units"];

  private _suits = ["U_C_CBRN_Suit_01_Blue_F","U_B_CBRN_Suit_01_MTP_F","U_B_CBRN_Suit_01_Tropic_F","U_C_CBRN_Suit_01_White_F","U_C_CBRN_Suit_01_White_F","U_I_CBRN_Suit_01_AAF_F","U_I_E_CBRN_Suit_01_EAF_F","CUP_U_C_Fireman_01"];
  private _masks = ["G_AirPurifyingRespirator_02_black_F","G_AirPurifyingRespirator_02_olive_F","G_AirPurifyingRespirator_02_sand_F","G_AirPurifyingRespirator_01_F","CUP_G_ESS_BLK_Facewrap_Black"];
  private _parts = ["Head", "Body", "LeftArm", "RightArm", "LeftLeg", "RightLeg"];
  private _int = 0.009;
  private _dmin = 0.01;
  private _dmid = 0.125;
  private _dmax = 0.25;

  while {true} do {
  
  {
    private _dmg = random [_dmin, _dmid, _dmax];
    private _protection = 0;
    if (goggles _x in _masks) then {_protection = 1};
    if (uniform _x in _suits) then {_protection = 2};
    if (goggles _x in _masks && uniform _x in _suits) then {_protection = 3};
    //systemChat format ["Protection: %1", _protection];
    switch (_protection) do {
      case 1: {_dmg = _dmg * 0.75 };
      case 2: {_dmg = _dmg * 0.50 };
      case 3: {_dmg = 0};
    };

  //systemChat format ["Tick - Base: %1 Dam: %2", [_dmin,_dmid,_dmax], _dmg];
    if (_dmg != 0) then {[_x, _dmg, selectRandom _parts, "burn"] call   ace_medical_fnc_addDamageToUnit;};
  } forEach _units;
  
  _dmin = _dmin + _int;
  _dmid = _dmid + _int;
  _dmax = _dmax + _int;
  sleep random [0.5, 0.625, 1.25];
  };
};

_handle;

_i = 0;
_d = 0.009;
_x = 0.01;
while {_i < 50} do {
  _x = _x + _d;
  _i = _i + 1;
  systemChat str _x;
  sleep 0.5;
};



_i = 0;
_d = 0.009;
_x = 0.01;
_u = 0.1;
while {_i < 50} do {
  _v = _d * _u;
  _x = _x + _v;
  _i = _i + 1;
  _u = _u + 0.1;
  systemChat str _x;
  sleep 0.5;
};