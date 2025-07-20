params [["_position", [0,0,0], [[]]]];

private _rd = roadAt _position;
private _rd2 = (roadsConnectedTo _rd) select 0;
[_rd, _rd2] call BIS_fnc_DirTo;
