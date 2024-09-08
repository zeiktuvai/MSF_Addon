class MSF_O_ARC_Grenadier : MSF_O_ARC_Soldier_Base
{
    author = "Zeik_Tuvai";         
    displayName = "Grenadier"; 
    scope = 2;
    scopeCurator = 2;
    role = "MSFAssault";
	editorPreview = "z\msf\addons\units\data\ui\MSF_O_ARC_Soldier_GL.jpg";
	weapons[] = {
        "MSF_ARC_SPAR_GL", "Binocular", "Throw", "Put"
    };
	magazines[] = {
	    "acex_intelitems_notepad", "ACE_painkillers", "SmokeShellGreen", "SmokeShellRed", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag_Tracer_Green",
        "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green",
        "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", "UGL_FlareGreen_F", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "UGL_FlareRed_F",
        "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "30Rnd_556x45_Stanag_Tracer_Green",
        "1Rnd_HE_Grenade_shell"
	};
	linkedItems[] = {
		"ARC_Vest", "ARC_Helmet", "rhs_googles_orange", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"
	};
	respawnWeapons[] = {
		"MSF_ARC_SPAR_GL", "Binocular", "Throw", "Put"
	};
	respawnMagazines[] = {
	    "acex_intelitems_notepad", "ACE_painkillers", "SmokeShellGreen", "SmokeShellRed", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag_Tracer_Green",
        "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green",
        "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", "UGL_FlareGreen_F", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "UGL_FlareRed_F",
        "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "30Rnd_556x45_Stanag_Tracer_Green",
        "1Rnd_HE_Grenade_shell"
	};
	respawnLinkedItems[] = {
		"ARC_Vest", "ARC_Helmet", "rhs_googles_orange", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"
	};    
};