h1 isKindOf "Air";
h1 isKindOf "LandVehicle";


// Persist TODO
// Enable deletion of previous missions var to save space/reset progress for future play throughs.
// Saving any vehicles in a named trigger area???
// Ace interaction to manually save data as well.
// Maybe in mission display if data is saved?
// Update persist save trigger name to use MSF_Mission_EndTrig

// loadout
// Set uniform in mission attr
// Allow units to override
// Implement loadouts
// Test if loadouts can be in the mod or have to be in mission description -- not looking good

// TASKS:
// Move Loadout/Respawn Scripts into mod

// research a event handler to make more tank hits kill us and less tank hits kill them
// just make our vehicles more tough

private _vehicleList = vehicles select { _x getVariable "MSF_Persist_isEnable" == true; }; 

private _data = missionProfileNamespace getVariable ["MSF_Persist_1", []]; 

```sqf
if (count _data != 0 && count _vehicleList != 0) then 
{ 
 { 
  (_x select 0) params ["_vicName", "_vicType", "_dmg", "_inv", "_look", "_ammo", "_fuel", "_isAlive", "_loc", "_aceRefuel", "_aceRearm"]; 
  private ["_vic"]; 
 
  _vic = _vehicleList select { typeOf _x == _vicType && _x getVariable ["PersistenceSet", false] == false } select 0; 
 
  if (!isNil "_vic") then { 
    [_vic, _vicType, _inv, _dmg, _look, _ammo, _fuel, _isAlive, _loc, _aceRefuel, _aceRearm] call MSF_fnc_Persist_SetVehicleData;
   systemChat str _vic;
   _vic setVariable ["PersistenceSet", true]; 
  }; 
 } forEach _data; 
};
```

private _trig = missionNamespace getVariable "trig_end_mission";

triggerActivated _trig;