private _foundation = localNamespace getVariable "MSF_Local";

private _screen = _foundation get "Fog_Overlay";
if (isNil "_screen") then {
	_handle = ppEffectCreate ["colorCorrections", 1500];
	_handle ppEffectEnable true;
	_handle ppEffectAdjust [1.0, 1.0, 0.0, [0.9, 0.9, 0.1, 0.1], [0.5, 0.5, 0.5, 0.8], [0.199, 0.587, 0.114, 0.0]];
	_handle ppEffectCommit 0;
	_foundation set ["Fog_Overlay", _handle];
};
