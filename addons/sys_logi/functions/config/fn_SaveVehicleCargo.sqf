


//Example
params [["_name", "", [""]], ["_loadout", [], [[]]], ["_replaceExisting", false, [false]]];

if (_name == "" || {_loadout isEqualTo []}) exitWith { false };

private _loadouts = profileNamespace getVariable ["ace_arsenal_saved_loadouts", []];
private _loadoutIndex = _loadouts findIf {(_x#0) == _name};


if (!_replaceExisting && {_loadoutIndex != -1}) exitWith { false };

if (_loadoutIndex == -1) then {
    _loadouts pushBack [_name, _loadout];
} else {
    _loadouts set [_loadoutIndex, [_name, _loadout]];
};

profileNamespace setVariable ["ace_arsenal_saved_loadouts", _loadouts];
true
