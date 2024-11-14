private ["_cpval", "_opval", "_baseval", "_abval"];

private _cpWeight = 50;
private _opWeight = 100;
private _baseWeight = 200;
private _abWeight = 300;

private _cpClr = missionNamespace getVariable ["MSF_cpClear", 0];
private _opClr = missionNamespace getVariable ["MSF_opClear", 0];
private _bClr = missionNamespace getVariable ["MSF_baseClear", 0];
private _abClr = missionNamespace getVariable ["MSF_airbaseClear", 0];

private _cpc = count (allMissionObjects "MSF_ ??? _Checkpoint");
private _opc = count (allMissionObjects "MSF_ ??? _Outpost");
private _bc = count (allMissionObjects "MSF_ ??? _Base");
private _abc = count (allMissionObjects "MSF_ ??? _Airbase");

private _totalVal = 0;
if (_cpc > 0) then { _cpval =  (_cpWeight / _cpc) * _cpClr; _totalVal = _totalVal + _cpWeight; } else { _cpval = 0 };
if (_opc > 0) then { _opval = (_opWeight / _opc) * _opClr; _totalVal = _totalVal + _opWeight; } else { _opval = 0 };
if (_bc > 0) then { _baseval = (_baseWeight / _bc) * _bClr; _totalVal = _totalVal + _baseWeight; } else { _baseval = 0 };
if (_abc > 0) then { _abval = (_abWeight / _abc) * _abClr; _totalVal = _totalVal + _abWeight; } else { _abval = 0 };

private _strength = (_cpval + _opval + _baseval + _abval) / _totalVal;

if (_strength < 0.2) exitWith { 4 };
if (_strength >= 0.2 && _strength < 0.4) exitWith { 3 };
if (_strength >= 0.4 && _strength < 0.6) exitWith { 2 };
if (_strength >= 0.6 && _strength < 0.8) exitWith { 1 };
if (_strength >= 0.8) exitWith { 0 };
