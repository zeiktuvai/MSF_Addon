class ARC_Vest : Vest_Camo_Base 
{ 
    scope = 2; 
    displayName = "ARC Carrier"; 
    //picture = "-"; 
    model = "A3\Characters_F\BLUFOR\equip_b_Vest01"; 
    hiddenSelections[] = {"Camo"}; 
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\arc\MSF_O_ARC_Vest.paa"}; 
    class ItemInfo: VestItem 
    { 
        uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest01.p3d"; 
        containerClass = "Supply120"; 
        mass = 80; 
        armor = "5"; 
        passThrough = 0.3; 
        hiddenSelections[] = {"camo"}; 
    }; 
};
class ARC_Vest_Lite : Vest_Camo_Base 
{ 
    scope = 2; 
    displayName = "ARC Carrier Lite"; 
    //picture = "-"; 
    model = "A3\Characters_F\BLUFOR\equip_b_Vest02"; 
    hiddenSelections[] = {"Camo"}; 
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\arc\MSF_O_ARC_Vest.paa"}; 
    class ItemInfo: VestItem 
    { 
        uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest02.p3d"; 
        containerClass = "Supply120"; 
        mass = 80; 
        armor = "5"; 
        passThrough = 0.3; 
        hiddenSelections[] = {"camo"}; 
    }; 
};