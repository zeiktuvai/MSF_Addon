params [["_suit", false, [false]], ["_mask", false, [false]], ["_gas", false, [false]]];

private _pts = [];

if (!_mask) then {_pts append ["Head"]};
if (!_suit) then {_pts append ["Body", "LeftArm", "RightArm", "LeftLeg", "RightLeg"]};
if (_gas && !_mask) then {_pts append ["Body"]};

_pts arrayIntersect _pts;
