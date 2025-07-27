# Changelog

## [2.14.3]

- Updated Logistics support menu, location selection is a separate dialog now.
- Added Fuel and Vehicle Ammo air-drop options.

## [2.14.2]

- Fixed discovered intel items listed in map missing description text.
- Fixed a bug with the Road Checkpoint module when NOT placed directly on a road.
- Fixed a bug causing spawned infantry to not be added to zeus when enabled.

## [2.14.1]

- Moved Escape Area module from OFE to main MSF addon (For designating an area that will trigger end scenario if any players leave that area).
- Added code to randomize damage/fuel/ammo for any vehicles spawned by the Dead Unit module.
- Moved logi points notification to chat message.
- Re-organized some background code.

## [2.14.0]

- Added Logistics Support Channel Menu to allow airdrops and other Logi support to be called in.
- Added Logistics terminal item that fits in the GPS slot and allows access to the Logistics system.
- Added Logistics menu to terminal item accessible through ACE Self Interaction.
- Allowed Engineer class to access most Logi screens remotely.
- Updated Supply Depot to new model.
- Upgraded Supply Depot interface to YodelOS.
- Added service worker to add logistics points on an interval as configured in Add-on Options.
- Removed infinite items, all items now have a base cost and a configurable multiplier (Add-on Options).
- Vehicle Air-Drops removed from Supply Depot.
- Removed the Supply Truck module (It may still exist in your mission, but will no longer do anything).

## [2.13.5]

- Added code to ensure shared vehicle loadouts are removed when a player leaves the session and when a loadout is unshared by a player.
- Fixed a bug causing vehicle loadouts not to be shared at all.
- Fixed a bug where in some instances when a player updates their shared loadout it did not update the loadout for other players.

## [2.13.4]

- Added code and UI elements to enable Vehicle Loadout sharing.

## [2.13.3]

- Updated Supply Depot interface to Yodel OS.
- Updated Load-out dialog to display create load-out input within the Yodel OS window instead of an external display.
- Fixed issue with saving containers (backpacks, vests, etc) in vehicle load-outs causing them not to display or be captured properly. The load-out storage format needed to be changed to accommodate this fix, however existing entries will be converted automatically.

## [2.13.2]

- Fixed "Create Loadout" input dialog allowing empty strings as a name

## [2.13.1]

- Added "Vehicle Loadout Terminal"
- Updated "Supply Depot" to "Supply Crate"
- Some UI Fixes

## [2.13.0]

- Added Vehicle Loadouts to the logistics system
- Updated persist module code
- Updated some UI componenets

## [2.12.5]

- Updated MSF Handler to a service worker model for greater efficiency and scalability
- Reorganized functions

## [2.12.4]

- Fixed a bug in the Logistics system causing items not to be retrieved even if there are enough points.
- Fixed a bug in the Logistics system causing some items not to be displayed or retrieved properly.
- Updated Logistics UI to not display items if there are not enough points.
- Re-organized Logistics config data to be more efficient.

## [2.12.3]

- Fixed a bug in the spawn checkpoint module causing road checkpoints to only be activated by BLUFOR
- Fixed a bug in the fortify module causing an excess of empty groups to be created causing group counts to max out. (Especially in cup maps).

## [2.12.2]

- Added Logistics interface to Supply truck para drop.  Uses ACE Rearm points when players get crates/backpacks from the supply truck.
- Added supply truck module to turn a placed ACE Rearm compatible vehicle into a supply truck with Logi Interface.
- Added addon option to set crate/backpack cost for supply trucks
- Added addon option to set vehicle drop height.
- Updated GM and End mission module to include the logged in admin by default.
- Reorganized some addon options

## [2.12.1]

- Added standard backpack to supply depot
- Added intel laptop with custom screen animation
- Updated Rarm interaction to:
  - Add UAV Battery to inventory if player is drone operator and has less than 2 batteries in in- Added Logistics Support Channel Menu to allow airdrops and other logi support to be called in.
- Added Logistics terminal item that fits in the GPS slot and allows access to the Logistics system.
- Added Logistics menu to terminal item accessible through ACE Self Interaction.
- Allowed Engineer class to access most logi screens remotely.
- Updated Supply Depot to new model.
- Upgraded Supply Depot interface to YodelOS.
- Added service worker to add logistics points on an interval as configured in Addon Options.
- Removed infinite items, all items now have a base cost and a configuratble multiplier (Addon Options).
- Vehicle Air-Drops removed from Supply Depot.
- Removed the Supply Truck module.ventory
  - Add Hand Grenade if player has less than 3 in inventory
- Updated air drop code to use event handler.
- Updated Supply Depot UI
- Fixed bug in Logi code causing it to be called for every player and messing up logi points
- Fixed bug causing "Convert to Supply Depot" interaction to stay available after execution
- Fixed player rearm and inventory generation modules to persist when a vehicle is respawned

## [2.12.0]

- Added Logistics system.
  - Added Supply Depot vehicle
  - Added "Convert to Supply Depot" option to vanilla repair depots.
  - Added New logistics UI component
  - Added spawning supply crates
  - Added spawning supply backpacks
  - Added Logistics points system and module
  - Added para-dropping of ambulance/ammo supply truck
  - Added UI system for placing para-drop marker
- Fixed bug with MSF Handler causing infinite fuel, a planes and logi requests not to be handled.

## [2.11.0]

- MOVED: GM Options, End Mission, Progress Bar Iteraction, Dialog Helper, Infinite Fuel and Damage reduction to modules.
- Added delete unit module for cinematic effects to delete any synced unit that enters it.
- Added the Dynamic Weapons System to allow players to choose from a curated list of Primaries or keep the default unit weapon.
- Added input checking to SetIntel function
- Updated a lot of back end code to optimize resource spawning.
- Updated Antistasi plane handler.

## [2.10.0]

- **Moved Inventory Generation from attribute to module.**
- Added Drone spawn system (Drone Inventory Module, UAV Spawn and UGV Spawn).
- Added ability to create ellipse/rectangle map marker for an intel item.
- Updated fortify module to remove external code.
- Updated fortify module to refine building spawn process.
- Updated fortify module to allow for hiding/showing of synced units.

## [2.9.7]

- Added option to enable/disable intel features of the intel item module.
- Added ability to have custom diary entry in the intel item module.
- Added option to disable intel auto discovery (for missions where the intel provider and item are close together).
- Updated building destroy module to destroy all buildings in area if chance set to %100.
- Updated intel interaction to handle concurrent activation in multiplayer.

## [2.9.6]

- Added function to get weapons data for upcoming system.
- Updated intel system to not show "Check for Intel" interaction if no more intel exists in the mission.
- Removed remaining external class dependencies and switched to using vanilla assets.

## [2.9.5]

- Fixed bug in better show/hide module and other spawn modules that would cause vehicles to become disabled and hidden when outside of the area they were found in.
- Added small amount of weapon attachments (optics, grips, muzzle, etc.) to armory logistics locations.
- Added Checkpoint and Fortify modules as intel providers for the intel system.

## [2.9.4]

- Updated intel descriptions for different Supply Module spawn types.
- Fixed initial object hide for MSF Show/Hide to also hide selected layer.

## [2.9.3]

- Added show/hide module
- Fixed text error in Dead/Empty unit module

## [2.9.2]

- Added code to allow supply module spawned victim units to be intel providers.
- Fixed bug causing non-existing item to try to be deleted when manually discovered.

## [2.9.1]

- Added code to make intel item become discovered if players discover the location randomly.

## [2.9.0]

- Added the intel system that allows you to define intel providers and consumers to automatically set up varying intel items in a mission. (See wiki for more info).
- small update to antistasi plane code.

## [2.8.0]

- Added Road Checkpoint generation module.
- Added more compositions to the supply module (including armory and food).
- Updated Dead/Empty unit module to use a trigger created via code instead of a linked trigger to optimize spawn efficiency.
- Reorganized and optimized a bunch of code.

## [2.7.2]

- Fixed bug in module config

## [2.7.1]

- Updated Dead Unit module to spawn empty vehicles/armor/trucks

## [2.7.0]

- Added option to disable enemy plane spawns in antistasi.
- Added module to spawn dead units within a module area.
- Reorganized and streamlined some code.

## [2.6.0]

- Added logistics spawn module, to spawn different compositions to help players along their journey.

## [2.5.2]

- Fixed module activation bug causing it to get stuck on an incorrect activation method.
- Added trigger classes back in to prevent crashes.

## [2.5.1]

- Removed reference to removed function.

## [2.5.0]

- Converted all "MSF Triggers" Into modules. WARNING: If you have any MSF Triggers in your missions they will no longer work and will need to be updated. (Sorry, there was just no good way to provide backwards compatibility).
- Some fixes to patrol route generation.

## [2.4.0]

`NOTE: Adding code to initPlayerLocal.sqf in your mission folder is no longer necessary. The method has been left in for compatibility, but it does nothing; please remove it when possible.`

- Moved functions from MSF_fnc_Init into MissionInit so they are executed automatically upon player join.
- Moved functions out of Units Addon and into MSF main.
- Updated JIPSpawnNearPlayer to work correctly.
- Updated MSF_fnc_Init to do nothing.
- Updated TFY internal items.
- Removed dependency of adding `[] call MSF_fnc_Init` into `initPlayerLocal.sqf`

## [2.3.4]

- Internal TFY updates

## [2.3.3]

- Updated magazine config into three "sets", can be enabled or disabled in the mission config.
- Updated spawn triggers so that they now can spawn independent and blufor forces.

## [2.3.2]

- Various bug fixes.
- Fixed spawn on player.

## [2.3.1]

- Fixed bug in Join on Player causing it not to work.

## [2.3.0]

- Moved winter units into a separate mod to remove the default dependency on NATO Winter Units
- Removed ALL custom units into a separate mod.

## [2.2.1]

- Added interval mission setting to set the interval at which the infinite fuel handler refills all enabled vehicles.
- Added height limit check box and activation size to triggers and removed the mission wide check box.

## [2.2.0]

- Added "Destroy Buildings" module to destroy buildings and add building fires in the module area.

## [2.1.4]

- Updated spawn triggers (Fortify, Patrol, Supply, Wave) to have a configurable height limit.
- moved properties menu in favor of mission config file.

## [2.1.3]

- Added the ability to have a local config file to dictate unit/inventory spawn instead of eden text boxes.
- Added code to use defaults if local config entries are missing instead of returning an empty array.
- Updated units to not have Thermal NVGS.
- Updated night units to actually have silencers on weapons that can have them.
- Updated patrol triggers to get unit spawn classes from config.
- Fixed bug in progress bar action code causing it not to appear in multiplayer.

## [2.1.2]

- Fixed but in SpawnUnitsInSafePosition that caused units to spawn in weird places.

## [2.1.1]

- Fixed a bug in GetUnitClasses that returns an incorrect variable format causing wave spawns not to work.

## [2.1.0]

- Added Vehicle customization persitence.
- Added area infantry patrol to fortify trigger.
- Added spawning air units to fortify trigger.
- Added new trigger to spawn supplies within the trigger area.
- Added new trigger to spawn far enemies that assault the trigger area in waves.
- Updated Triggers to use global zeus variable.
- Fixed bug with SF Diver explosive spec not being able to defuse explosives.
- Fixed bug in damage reduction that incorrectly applied toughness value.
- Fixed bug that caused the interaction progress bar to stay repeatable.
- Fixed bug in Fortify Building Defense causing the wrong trigger to be passed.

## [2.0.1]

- Updated multiplayer config option to remove respawn inventory (which was causing loadout issues).
- Added properties to most placeable objects to create an ACE interaction menu item on an object with a progress timer that executes code on completion.
- Added a mission property and code to apply any vehicle customizations (in the garage) applied to any vehicle linked to a vehicle respawn so that they persist on respawn.

## [2.0.0]

- added all previous loadouts as units under NATO (MSF)
  - Replace all respawnInventory loadouts with new MSF units
  - Added TFAR option to replace unit radios with TFAR radios.
  **Make sure to remove MSF_Config.hpp line from your description ext**
- changed number of base items that spawn in inventory gen
- fixed bug that causes inv gen system to panic in new scenario
- optimized patrol and fortify code to reduce stuttering when playing locally, but spawn as quickly as possible when on a dedicated server.

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

## [1.5.0]

- Completely reworked how damage reduction works in game to combat multiplayer troubles.
- Updated structure of mod to allow automatic build and deployment with HEMTT

## [1.4.0]

- Updated vehicle damage reduction function to take into account locality.
- Updated dialog helper function to work properly in multiplayer.

## [v1.3.0]

- Added Conversation dialog helper.
- Fine tuned some vehicle toughness parameters.

## [1.2.0]

- Added infinite fuel attribute and handler
- Updated inventory generation system to not overwrite inventory of vehicle if loading is enable and vehicle is enabled for persistence

## [1.1.0]

- Fixed errors and testing code remnants from inventory generation system.

## [1.0.0] - Initial Release

- Brought over all functionality from the MSF scripts into the mod.
- Implemented Persistence using object and mission attributes.
- Implemented MSF functions using object and mission attributes.
- Turned the inventory helper script into an inventory generation system built into the mod.
