class MSF_O_ARC_Marksman : MSF_O_ARC_Soldier_Base
{
    author = "Zeik_Tuvai";         
    displayName = "Marksman"; 
    scope = 2;
    scopeCurator = 2;
    role = "MSFRecon";
	editorPreview = "z\msf\addons\units\data\ui\MSF_O_ARC_Soldier_Marksman.jpg";
	weapons[] = {
        "MSF_ARC_DMR", "Binocular", "Throw", "Put"
    };
	magazines[] = {
        "acex_intelitems_notepad", "ACE_painkillers", "SmokeShellGreen", "SmokeShellRed", "HandGrenade", "HandGrenade", "ACE_20Rnd_762x51_Mag_Tracer",
        "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_M993_AP_Mag",
        "ACE_20Rnd_762x51_M993_AP_Mag", "20Rnd_762x51_Mag"
	};
	linkedItems[] = {
		"ARC_Vest_Lite", "ARC_Helmet", "G_Combat", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"
	};
	respawnWeapons[] = {
		"MSF_ARC_DMR", "Binocular", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "ACE_painkillers", "SmokeShellGreen", "SmokeShellRed", "HandGrenade", "HandGrenade", "ACE_20Rnd_762x51_Mag_Tracer",
        "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_M993_AP_Mag",
        "ACE_20Rnd_762x51_M993_AP_Mag", "20Rnd_762x51_Mag"
	};
	respawnLinkedItems[] = {
		"ARC_Vest_Lite", "ARC_Helmet", "G_Combat", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"
	};
};
