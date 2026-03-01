addMissionEventHandler ["EntityRespawned", {
	params ["_newEntity", "_oldEntity"];

  if !(isNil {_newEntity getVariable "MSF_Radiation"}) then { _newEntity setVariable ["MSF_Radiation", nil]; };
}];

private _handle = [] spawn {

  private _suits = parseSimpleArray format ["[%1]", MSF_CBRN_ProtSuit];
  private _masks = parseSimpleArray format ["[%1]", MSF_CBRN_ProtMask];

  private _parts = ["Head", "Body", "LeftArm", "RightArm", "LeftLeg", "RightLeg"];
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

        if (_pl getVariable ["RadMsg", true]) then {
          if !(goggles _pl in _masks && uniform _pl in _suits) then {cutText ["You start to feel a slight tingle.", "PLAIN", 0.5];};
        };
      
        private _rad = _pl getVariable ["MSF_Radiation", 0];
        private _dmg = random [_dmin + _rad, _dmid + _rad, _dmax + _rad];
        private _protection = 0;
        if (goggles _pl in _masks) then {_protection = 1};
        if (uniform _pl in _suits) then {_protection = 2};
        if (goggles _pl in _masks && uniform _pl in _suits) then {_protection = 3};
        switch (_protection) do {
          case 1: {_dmg = _dmg * 0.75 };
          case 2: {_dmg = _dmg * 0.50 };
          case 3: {_dmg = 0};
        };

        if (_hspot) then {_dmg = _dmg * 2};

        if (MSF_Debug_Message_Enabled) then {
          [format ["Radiation Protection: %1 Applied Damage: %2", _protection, _dmg]] call MSF_fnc_SendDebugMsg;
        };

        if (_dmg != 0) then {
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
