# Mission Support Foundation for Arma 3

The MSF project is a collection of scripts and resources to make building story driven unique experiences far easier in Arma 3. Instead of copying and pasting a bunch of scripts into the mission folder and using execVM to run them, I took on the task of incorporating all of them into a addon that can be installed through the workshop.

Doing so allowed missions to easily be updated with new content, scripts and bug fixes without having to download, extract, re-publish all your missions.

This project started life as a set of scripts to automate applying custom loadouts to missions automatically, but as the scope expanded and I started adding things outside of loadouts it seemed prudent to re-rganize the project. And as my knowledge of Arma grew, it made things much easier to put this into a mod and add custom attributes to objects to make configureation a breeze.

This mod makes use of ACE 3 (and by extionsion CBA), which is needed for a lot of the custom interactions to work properly.

See the [Wiki](https://github.com/zeiktuvai/MSF_Addon/wiki) for more information and how to get started.

## Table of Contents  

[Persistence Module](Persistence.md)
[Loadout Management](#loadout-management)  
[Multiplayer Options](#multiplayer-options)  
[Mission Flow Options](#mission-flow-options)  
[Mission Building Tools](#mission-building-tools)  
[Player Preferences](#player-preferences)  


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
  
# Mission Flow Options

**ACE End Mission Menu Option**  
Upon activation of a trigger, an ace self interaction option will be added to allow players to end the mission when they choose.  Any unit with the `Game Master` or `Commander/Leader` box checked will get this option.

For this to work, a trigger for the mission end parameters should be configured and given a variable name.  Instead of syncing it to a scenario module, enter the name of the trigger into the `Attributes > Mission Support Foundation > MSF Settings > End Trigger Name` box so that the system knows what trigger to go by.

**GM Actions Menu Option**  
Adds special actions to the GM unit to add QOL features to gameplay. Avaliable GM Actions:  
- Reveal all enemies on map only to GM.  
- Spawn an ACE Arsenal crate that can be interacted with to remove it when done.  

# Mission Building Tools  

**Inventory Generation System**  
This system can be used to generate random inventory for a container. It works by using a weighted system of categories (Weapon Mags, Medical, Grenades, etc.) that can be set per container object (Vehicle, Supply Box, etc.).  When enabled on the object it works in one of two ways:  
- It can use an exact number to generate items, using the weighted categories.
- It can fill the container to %80 of it's max capacity using the weighted categories.  

When weighting a category, they higher the number it is the higher the chance of it being picked.  To disable a category, move the slider all the way to the left to 0.1.

**Vehicle Toughness**  
This adds a HandleDamage event handler to each vehicle that has toughness (I guess a more accurate term would be damage reduction) set higher than 0 that takes incoming damage and reduces it by the percentage set on the object (up to 95%).

Internally testing this using a Rooikat and a CSAT AT Missile specialist; at 0% (normal game damage) 1 Titan AT missile hit destroys the Rooikat.  At 95%, 3 Titan AT missile hits bring the vehicle damage to about 98% (and a few times blowing it up) making it completely unusable.

This was added mainly because it seems so hard to kill enemy tanks while they (AI controlled OPFOR) can obliterate us in one hit usually, so this makes the playing field a bit fairer.  

**Infinite Fuel**  
This spawns a handler that checks all enabled vehicles (even respawned ones) if their fuel is less than 100% and sets it back to full every 300 seconds.  I added this because I am working on a operation where vehicle tech had progressed faster than in our world and everything was "infinitely powered".  

**Conversation Dialog Helper**  
This tool sets up a unit (usually an NPC) to start a conversation defined in CfgSentences ([see Conversations Biki](https://community.bistudio.com/wiki/Conversations)).

When enabled, it takes the provided class path (i.e. MyAwesomeMission >> Briefing) and sets up an ACE interaction menu option to start the conversation.

You can also provide a Task ID to complete when the conversation starts, and code to run when the conversation starts.

**Random Patrol Generator**
This tool can generate a patrol with a number of waypoints across a defined area.  To configure, place a `Trigger MSF Patrol` down and size it to the area you want to be patrolled (Really small areas of less than 100m and areas larger than 3000m may yeild unexpected results).

In the attributes of that trigger, scroll to the bottom and you have a few options. They are:
- Add created patrols to Zeus.
- Set the patrol behavior.
- Set the patrol combat mode.
- Set the patrol speed.
- Spawn two groups instead of one.
- Number of waypoints (4-10).
- Side of spawned patrol.
- Enable Infantry Patrols.
- List of groups to pick from for spawn (Array: ["Group","Group"] Open config viewer, go to `+CfgGroups' and navigate to the group you want to spawn, only paste the name of the group.  Not the whole path).
- Despawn patrol when players leave area.
- Enable Vehicle patrol mode. (Trigger will only do Infantry or Vehicle, not both).
- List of Vehicle classes to pick from (Array: ["Car1","Car2"]).

When enabled with a proper group, the patrol will spawn when a player enters the trigger area.  If you make the trigger repeatable and set it to despawn on leave, you can have the patrol despawn and respawn when players re-enter the area.

# Player Preferences

These options are typically user configurable and do not need any configuration from the mission maker unless you want to force players into a specific setting.

**Disable ACE Medical Unconciousness**  
This setting allows the Unconciousness system from ACE Medical to be enabled or disabled.  This works by running code when disabled that instantly kills the player when they fall unconcious instead of allowing them to wait to be revived or bleed out.

