private _handle = [] spawn {
  //Base damage and interval.
  //TODO: Can any of these [in the whole function] be configurable?
  private _int = 0.009;
  private _dmin = 0.01;
  private _dmid = 0.115;
  private _dmax = 0.24;
    
  while {true} do {  
      private _pl = player;
      private _trigs = missionNamespace getVariable ["MSF_RadiationZones", []];
      
      private _trig = _trigs select { _pl inArea _x };
      if (_trig isNotEqualTo []) then {        
        private _zones = (_trig # 0) getVariable ["Rad_Zones", []];
        private _hspot = (_zones select {
          private _zarea = _x getVariable ["objectArea", [0,0,0,false,-1]];
          position _pl inArea [_x, _zarea # 0, _zarea # 1, _zarea # 2, _zarea # 3, _zarea # 4];
        }) isNotEqualTo [];

        private _rad = _pl getVariable ["MSF_Radiation", 0];
        private _suitDur = uniformContainer _pl getVariable ["MSF_CBRN_Durability", 1];
        
        //Show radiation message.
        if (_pl getVariable ["RadMsg", true]) then {
          if (!([_pl, 2] call MSF_CBRN_fnc_GetPlayerCBRNGear && [_pl, 1] call MSF_CBRN_fnc_GetPlayerCBRNGear) || _suitDur < 0.35)
           then {cutText ["You start to feel a slight tingle.", "PLAIN", 0.5];};
        };
        
        //Update durability.
        //TODO: different durability loss for chemical/radiation.
        //TODO: dur loss based on hotspot intensity.
        if ([_pl, 1] call MSF_CBRN_fnc_GetPlayerCBRNGear) then {
          private _durLoss = [0.002, 0.005] select _hspot;
          uniformContainer _pl setVariable ["MSF_CBRN_Durability", [_suitDur - _durLoss, 0] select (_suitDur <= 0.005), true];
        };

        //Calculate damage.
        private _dmg = random [_dmin + _rad, _dmid + _rad, _dmax + _rad];
        private _dmgMltplier = [_pl] call MSF_CBRN_fnc_CalculateRadDamage;
        _dmg = _dmg * _dmgMltplier;

        //TODO: configurable hotspot intensity.
        if (_hspot) then {_dmg = _dmg * 2};

        if (MSF_Debug_Message_Enabled) then {
          [format ["Applied Damage: %1", _dmg]] call MSF_fnc_SendDebugMsg;
        };

        //Apply damage.
        if (_dmg != 0) then {
          private _parts = [[_pl, 1] call MSF_CBRN_fnc_GetPlayerCBRNGear, [_pl, 2] call MSF_CBRN_fnc_GetPlayerCBRNGear] call MSF_CBRN_fnc_GetDamageParts;
          [_pl, _dmg, selectRandom _parts, "radiation"] call ace_medical_fnc_addDamageToUnit;
          _pl setVariable ["MSF_Radiation", _rad + _int];        
        };

        _pl setVariable ["RadMsg", false];
      }
      else
      {
        _pl setVariable ["RadMsg", nil];
      };

  
    sleep random [0.5, 0.625, 1.25];
  };
};

_handle;
