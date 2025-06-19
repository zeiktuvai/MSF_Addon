params ["_control", "_newText"];

if (count _newText > 0) then { ctrlEnable [16001, true]; } else { ctrlEnable [16001, false]; };