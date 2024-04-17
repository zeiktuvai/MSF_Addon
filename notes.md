h1 isKindOf "Air";
h1 isKindOf "LandVehicle";


// Persist TODO
// Enable deletion of previous missions var to save space/reset progress for future play throughs.
// Saving any vehicles in a named trigger area???

// load data flow:
// get vic list with check box enabled
// match type and call code to set up vic
// if no type, don't restore data
// -what happens if no vic type? 
// -or if two of one type saved but only one in mission?

// maybe just match by type, and if there is not enough data/vics it just skipps them.

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