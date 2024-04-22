# Mission Support Foundation for Arma 3 - EDEN Module Edition

The MSF module is a collection of tools wrapped into a convenient framework that makes building story driven missions much easier.  It includes many commonly used features that might be a simple script or two but having to copy them from mission to mission gets annoying, especially if they need to be updated across mission sets.

This project started life as a set of scripts to automate applying custom loadouts to missions automatically, but as the scope expanded and I started adding things outside of loadouts it seemed prudent to re-rganize the project.  And as my knowledge of Arma grew, it made things much easier to put this into a mod and add custom attributes to objects to make configureation a breeze.

This mod makes use of ACE 3 (and by extionsion CBA), which is needed for a lot of the custom interactions to work properly.  

# Feature Set
- Loadout management system (Respawn loadouts and initial spawn loadout) with multiple classes and uniform types.
- Persistence module for persisting vehicle data between missions.
- Inventory generation system for vehicles and containers.
- Multiplayer options:
    - Make every player a respawn point.
    - Make players that join in progress spawn near other players instead of at the start.
    - Enable an option to add an End Mission ACE Menu item when a trigger is activated so players can choose when to end the mission.
    - Enable a player unit as a GM with special menu options.
- Player Preferences:
    - Add a Addon Preference item to disable ACE Medical unconciousness for players.

## Table of Contents  

[Getting Started](#getting-started)  
[Persistence Module](Persistence.md)
[Updating](#updating)  
[Loadout Management](#loadout-management)  
[Multiplayer Options](#multiplayer-options)  
[ACE 3 Interaction Features](#ace-interaction-features)  
[Player Preferences](#player-preferences)  

[Change Log](Changelog.md)  

# Getting Started

1. After installing the mod, Add this line `#include "\msf\MissionConfig.hpp"` to your misisons `description.ext` and then add this line `[player] call MSF_fnc_Init;` to your InitPlayerLocal.sqf in the mission folder. (If you do not have them currently you can copy the example ones on GitHub or create them yourself.)

2. It is highly recommended to configure Multiplayer options for the loadout system and respawns work correctly.  A conveinient menu option has been added to do that for you, just navigate to `Attributes > Mission Support Foundation` and select `Configure Multiplayer`.

After this is complete, you can configure general settings in `Attributes > Mission Support Foundation > MSF Settings`.  Additional options can be configured in supported objects attributes dialog.

![MSF_Settings](https://raw.githubusercontent.com/zeiktuvai/TFY_Arma3/Dev/img/MSF_Settings.png)

# Updating

Unlike the previous iteration, everything is stored in the mod so when new functions or loadouts are released they are immediately available to the mission upon update.  (You will of course have to update each mission that uses it if there are new uniform styles or object options, but changes to existing features will apply automatically).

# Loadout Management

The MSF makes use of custom loadouts defined by TFY members in `CfgRespawnInventory` format.  These loadouts can be automatically applied to certain NATO units, and can easily be updated.  This can be enabled or disabled in the MSF Settings attributes menu.

It achieves this by recognizing what NATO units have been placed and automatically inferring the loadout based on the unit type.  This supports standard nato units (Not pacific) and [NATO Winter Faction units.](https://steamcommunity.com/sharedfiles/filedetails/?id=2315104187)

Place your playable units on the map using the standard **NATO - MEN** (standard; not pacific) units and the system will automatically apply the loadout if a player is in that slot. (See below for a list of supported units). 

Player units have loadout options as well and can override several mission set parameters.  The following are available:
    - Override mission uniforms: Allows overriding mission wide uniform config with the one selected in unit attributes.
    - Apply all respawn loadouts: Gives this unit ALL respawn loadouts instead of the one(s) auto selected for that unit type.
    (Manual selection of initial and respawn loadouts coming soon).

See [Supported Units](/docs/SupportedUnits.md) for a list of units.

# Multiplayer Options

**Respawn on Player**  
This sets each player on the given side to be a respawn point for players to respawn on.  

**Join near Players**
This makes any player that joins after the mission starts to spawn near other players of the same side instead of at the start point for that unit.
  
# ACE Interaction Features

**ACE End Mission Menu Option**  
Upon activation of a trigger, an ace self interaction option will be added to allow players to end the mission when they choose.  Any unit with the `Game Master` or `Commander/Leader` box checked will get this option.

For this to work, a trigger for the mission end parameters should be configured and given a variable name.  Instead of syncing it to a scenario module, enter the name of the trigger into the `Attributes > Mission Support Foundation > MSF Settings > End Trigger Name` box so that the system knows what trigger to go by.

**GM Actions Menu Option**  
Adds special actions to the GM unit to add QOL features to gameplay. Avaliable GM Actions:  
- Reveal all enemies on map only to GM.  
- Spawn an ACE Arsenal crate that can be interacted with to remove it when done.  

# Player Preferences

These options are typically user configurable and do not need any configuration from the mission maker unless you want to force players into a specific setting.

**Disable ACE Medical Unconciousness**  
This setting allows the Unconciousness system from ACE Medical to be enabled or disabled.  This works by running code when disabled that instantly kills the player when they fall unconcious instead of allowing them to wait to be revived or bleed out.

