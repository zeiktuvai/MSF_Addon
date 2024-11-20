private ["_cpval", "_opval", "_baseval", "_abval"];

private _cpWeight = 50;
private _opWeight = 100;
private _baseWeight = 200;
private _airbWeight = 300;

private _cpClr = missionNamespace getVariable ["MSF_OFE_cpClear", 0];
private _opClr = missionNamespace getVariable ["MSF_OFE_opClear", 0];
private _bClr = missionNamespace getVariable ["MSF_OFE_baseClear", 0];
private _airbClr = missionNamespace getVariable ["MSF_OFE_airbaseClear", 0];

private _cpCount = count (allMissionObjects "MSF_Mod_OFE_Checkpoint");
private _opCount = count (allMissionObjects "MSF_Mod_OFE_Outpost");
private _bCount = count (allMissionObjects "MSF_Mod_OFE_Base");
private _airbCount = count (allMissionObjects "MSF_Mod_OFE_Airbase");

private _totalVal = 0;
if (_cpCount > 0) then { _cpval =  (_cpWeight / _cpCount) * _cpClr; _totalVal = _totalVal + _cpWeight; } else { _cpval = 0 };
if (_opCount > 0) then { _opval = (_opWeight / _opCount) * _opClr; _totalVal = _totalVal + _opWeight; } else { _opval = 0 };
if (_bCount > 0) then { _baseval = (_baseWeight / _bCount) * _bClr; _totalVal = _totalVal + _baseWeight; } else { _baseval = 0 };
if (_airbCount > 0) then { _abval = (_airbWeight / _airbCount) * _airbClr; _totalVal = _totalVal + _airbWeight; } else { _abval = 0 };

private _strength = (_cpval + _opval + _baseval + _abval) / _totalVal;
private _emyStr = 0;
private _notoriety = 0;

if (_strength < 0.2) then { _emyStr = 4 };
if (_strength >= 0.2 && _strength < 0.4) then { _emyStr = 3 };
if (_strength >= 0.4 && _strength < 0.6) then { _emyStr = 2 };
if (_strength >= 0.6 && _strength < 0.8) then { _emyStr = 1 };
if (_strength >= 0.8) then { _emyStr = 0 };

if (_strength < 0.2) then { _notoriety = 0 };
if (_strength >= 0.2 && _strength < 0.4) then { _notoriety = 1 };
if (_strength >= 0.4 && _strength < 0.6) then { _notoriety = 2 };
if (_strength >= 0.6 && _strength < 0.8) then { _notoriety = 3 };
if (_strength >= 0.8) then { _notoriety = 4 };

private _return = [_emyStr, _notoriety, _strength];
_return;