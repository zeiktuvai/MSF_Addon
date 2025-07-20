params [["_weights", [1,1,1,1,1,1], [[]]]];
_weights params ["_mag", "_launch", "_grenade", "_attach", "_med", "_food"];

["Mags", "Launcher", "Grenades", "Attachments", "Medical", "Food"]selectRandomWeighted[_mag, _launch, _grenade, _attach, _med, _food];
