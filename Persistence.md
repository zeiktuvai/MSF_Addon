# MSF Persistence Module

This module is designed to help mission makers persist data across missions.  It makes use of the `missionProfileNamespace` to store the data in a variable.  This does require some specific configuration as listed below.

This module was built to persist vehicle data from one mission to the next, I did not want to persist player data so that is not implemented in this mod. The following can be saved per vehicle: Inventory, Damage, Location, Ammunition, Fuel, Custom Appearance, and remaining fuel/ammunition for ACE Logistics if the vehicle supports it.

Each option can be enabled or disabled in the settings and Save or Load can be disabled completely as well.

(Yes, I know there are mods out there that already do this.  However those were too involved and did more than what I wanted to accomplish.  I intentionally only wanted vehicles to be affected by this and the units to be handled by the loadout system).

# Configuration

To use the persistence module complete the following steps.  

**description.ext**

Inside your description.ext you need to set the `missionGroup` parameter.  By default the missionProfileNamespace uses the name of the mission as the file name to store data.  However, as you make more missions the names change which results in multiple files with stored data and no way to retrieve it.

Set the parameter as such `missionGroup = "MyAmazingMission";`, changing myamazingmission to a appropriate name for you mission series.  Make sure each subsequent mission has that mission group parameter set.

**MSF Settings - Persistence**

General Persistence settings are in the attributes menu (attributes > Mission Support Foundation > MSF Settings) under the persistence section.

![MSF Persistence Settings](https://raw.githubusercontent.com/zeiktuvai/TFY_Arma3/Dev/img/msf_persist.png)

Specific settings for each supported vehicle type is in the attributes for that vehicle

![MSF Persistence Attributes](https://raw.githubusercontent.com/zeiktuvai/TFY_Arma3/Dev/img/msf_persist_attr.png)

# Module Notes

Data storage is binarized by Arma when stored in the profile, and while it is relatively small (17kb for two vehicles of information) the profile could potentially get pretty large depending on the number of missions in the series.  

The data is only stored on the server (Local computer if single player or hosting local; or dedicated server profile.)  If the servers profile is missconfigured it may cause the module not to work.

As I continue to make use of it, I will be working on ways to maximize space utilization and prevent it from growing too large.