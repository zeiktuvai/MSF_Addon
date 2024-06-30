# Changelog

## [1.6.0]
- Added Area fortification system on a trigger.
    - Spawns infantry in buildings, vehicles, armor and turrets in a trigger area.
    - Makes use of code from ZEN functions and ESS system.
- Updated Winder loadouts to come in line with NATO/Night loadouts.
- Fixed bug in inventory generation system failing to get defined list of items to spawn.

## [1.5.2]
- Added random patrol generator based on trigger area.
- Updated NATO and Night loadouts to have less equipment.

## [1.5.1]
- Updated damage handler script to finally actually work properly on ALL clients.

## [1.5]
- Completely reworked how damage reduction works in game to combat multiplayer troubles.
- Updated structure of mod to allow automatic build and deployment with HEMTT

## [1.4]
- Updated vehicle damage reduction function to take into account locality.
- Updated dialog helper function to work properly in multiplayer.

## [1.2]
- Added infinite fuel attribute and handler
- Updated inventory generation system to not overwrite inventory of vehicle if loading is enable and vehicle is enabled for persistence

## [1.1] - Fixes
- Fixed errors and testing code remnants from inventory generation system.

## [1.0] - Initial Release
- Brought over all functionality from the MSF scripts into the mod.
- Implemented Persistence using object and mission attributes.
- Implemented MSF functions using object and mission attributes.
- Turned the inventory helper script into an inventory generation system built into the mod.