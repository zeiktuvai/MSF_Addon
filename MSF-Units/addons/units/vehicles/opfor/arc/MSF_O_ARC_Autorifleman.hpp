class MSF_O_ARC_Autorifleman : MSF_O_ARC_Soldier_Base
{
    author = "Zeik_Tuvai";         
    displayName = "Autorifleman"; 
    scope = 2;
    scopeCurator = 2;
    role = "MSFAssault";
    icon = "iconManMG";
	editorPreview = "z\msf\addons\units\data\ui\MSF_O_ARC_Soldier_LMG.jpg";
	weapons[] = {
        "MSF_ARC_SPAR_MG", "Binocular", "Throw", "Put"
    };
	magazines[] = {
		"acex_intelitems_notepad", "ACE_painkillers", "SmokeShellRed", "SmokeShellRed", "SmokeShell", "HandGrenade", "150Rnd_556x45_Drum_Green_Mag_Tracer_F",
        "150Rnd_556x45_Drum_Green_Mag_Tracer_F", "150Rnd_556x45_Drum_Green_Mag_Tracer_F", "HandGrenade", "150Rnd_556x45_Drum_Green_Mag_Tracer_F",
        "150Rnd_556x45_Drum_Green_Mag_Tracer_F"
	};
	linkedItems[] = {
		"ARC_Vest_Lite", "ARC_Helmet", "G_Combat", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"
	};
	respawnWeapons[] = {
		"MSF_ARC_SPAR_MG", "Binocular", "Throw", "Put"
	};
	respawnMagazines[] = {
		"acex_intelitems_notepad", "ACE_painkillers", "SmokeShellRed", "SmokeShellRed", "SmokeShell", "HandGrenade", "150Rnd_556x45_Drum_Green_Mag_Tracer_F",
        "150Rnd_556x45_Drum_Green_Mag_Tracer_F", "150Rnd_556x45_Drum_Green_Mag_Tracer_F", "HandGrenade", "150Rnd_556x45_Drum_Green_Mag_Tracer_F",
        "150Rnd_556x45_Drum_Green_Mag_Tracer_F"
	};
	respawnLinkedItems[] = {
		"ARC_Vest_Lite", "ARC_Helmet", "G_Combat", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"
	};
};