# MSF_Addon
This is a new repo for moving some MSF functions into an Arma addon mod


# Mission Support Foundation for Arma 3

This project started life as a set of scripts to automate applying custom loadouts to missions automatically (Formerly called the DLS), but as the scope expanded and I started adding things outside of loadouts it seemed prudent to re-rganize the project.  

The MSF is a collection of tools wrapped into a script framework that makes building story driven missions much easier.  It includes all the custom loadout features of the DLS, but now includes other features related to mission creation and flow.  

This framework makes use of ACE 3 (and by extionsion CBA), which is needed for a lot of the custom interactions to work properly.  

## Table of Contents  

[Getting Started](#getting-started)  
[Updating](#updating)  
[Loadout Management](#loadout-management)  
[Respawn Features](#respawn-options)  
[ACE 3 Interaction Features](#ace-interaction-features)  
[ACE Extensions](#ace-extensions)  
**[Persistence Module](Persistence.md) NEW!**

[Change Log](/Docs/Changelog.md)  
[How to update which loadouts are assigned](/Docs/Updating%20Assigned%20Loadouts.md)  

# Getting Started

1. Clone this repo into your mission folder using `git clone https://github.com/zeiktuvai/MSF_Arma_3.git` 

2. Copy the files from `Setup Example Files` to your root mission folder.  If those files exist, copy the contents of each into the corresponding file.

After this is complete, you can configure all MSF settings by going to `Settings > Addon Options > MSF Settings`

![MSF_Settings](https://raw.githubusercontent.com/zeiktuvai/TFY_Arma3/c3cd00d0fafba1322924c1d89cc020ef7831e2b5/img/MSF_Settings.png)

# Updating

To update to the latest version, all you need to do is navigate to the `MSF_Arma_3` folder in your mission folder using your console of choice (Konsole, shell, cmd prompt, etc.) and running the `git pull` command.  This will pull any changes made to the MSF down to your mission (including loadouts and new features), then you just need to publish the mission again to take advantage of the chagnes.

NOTE: Please be sure to check the change log to see if any changes need to be made to your settings file.

# Loadout Management

The MSF makes use of custom loadouts defined by TFY members in `CfgRespawnInventory` format.  These loadouts can be automatically applied to certain NATO units, and can easily be updated.  

It achieves this by recognizing what NATO units have been placed and automatically inferring the loadout based on the unit type.  This **ONLY WORKS WITH STANDARD NATO UNITS**.  
(Now supports NATO Winter Faction https://steamcommunity.com/sharedfiles/filedetails/?id=2315104187)

You can also override the default loadout, or have it work with unsupported unit types by manually entering the configuration.

Automatic loadouts can be disabled in the Addon Options menu.

Place your playable units on the map using the standard **NATO - MEN** (standard; not pacific) units and the system will automatically apply the loadout if a player is in that slot. (See below for a list of supported units). 

**Night Uniforms**  
This includes night uniform versions that adds NVGS (TPNVG Mod) and appropriate weapon attachments like silencers and PEQs.  

This can be enabled in MSF Settings under Addon Options.

**Supported NATO Units**
- Ammo Bearer
- Autorifleman
- Combat Life Saver
- Crewman
- Engineer
- Grenadier
- All three Gunners
- Heavy Gunner
- Marksman
- Both Missile Specialists
- Rifleman/(AT)/(LightAT)/(Light)
- Sharpshooter
- Squad Leader
- Team Leader
- All UAV/UGV  

**Overriding Automatic Selection**  

You can ignore the auto chosen loadout or if using units that are not supported, you can use this to apply loadouts to them.  In the units init add the following code:

```sqf
    playerConfig = createHashMapFromArray[["initialLoadout","STARTING LOADOUT"],["respawnLoadouts",["RESPAWN","LOADOUTS"]]];
    this setVariable ["override", [playerConfig]];                
```
You can use the below list to set the initial loadout and any respawn loadouts you want to add.  

Remember if you put `["respawnLoadouts",["all"]]` in the respawn loadouts array it will give that unit all loadouts.

**Loadout List**

- TFY_Commander
- TFY_Autorifleman
- TFY_Marksman
- TFY_Teamleader
- TFY_Rifleman
- TFY_ATRifleman
- TFY_AARifleman
- TFY_UAVOperator
- TFY_VehicleCrewman
- TFY_Medic
- TFY_Diver_Expl
- TFY_Diver
- TFY_Grenadier
- TFY_MineSpec  

# Respawn Options

**Respawn on Player**  
This sets each player on the given side to be a respawn point for players to respawn on. 

NOTE: This only affects the players playing on one side.  For example, if you choose BLUFOR then only those players will be able to respawn on each other.

**Respawn Delay**  
Overrides the default respawn timer of 15 seconds, configurable from 1 second to 5 minutes.
    
# ACE Interaction Features

**ACE End Mission Menu Option**  
Upon activation of a trigger, an ace self interaction option will be added to allow players to end the mission when they choose.  This requires
that you have player units with the variable name `SL` (Squad Leadre/Commander) and/or `GM` (Game Master).  

Also, your end mission trigger should be named `trig_end_mission`.  

**ACE GM Actions Menu Option**  
Adds special actions to the GM unit to add QOL features to gameplay. Avaliable GM Actions:  
- Reveal all enemies on map only to GM.  
- Spawn an ACE Arsenal crate that can be interacted with to remove it when done.  

# ACE Options

These options are typically user configurable and do not need any configuration from the mission maker unless you want to force players into a
specific setting.

**Disable ACE Medical Unconciousness**  
This setting allows the Unconciousness system from ACE Medical to be enabled or disabled.  This works by running code when disabled that instantly
kills the player when they fall unconcious instead of allowing them to wait to be revived or bleed out.

