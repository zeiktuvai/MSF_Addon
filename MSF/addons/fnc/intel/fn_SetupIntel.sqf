private ["_logic","_units","_show"];

_logic = _this param [0,objnull,[objnull]];
_units = _this param [1,[],[[]]];
_activated = _this param [2,true,[true]];

hint format ["activated: %1  units: %2", _activated, _units];

true