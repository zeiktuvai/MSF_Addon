class ARC_Helmet : H_HelmetB
{
    displayName = "ARC Helmet";
    picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\arc\MSF_O_ARC_Helmet.paa"};
    class ItemInfo: ItemInfo
    {
        mass = 20;
        allowedSlots[] = {901,605};
        uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        modelSides[] = {3,1};
        hiddenSelections[] = {"Camo"};
        armor = "3*0.4";
        passThrough = 0.65;
    };
};
class ARC_Helmet_Lite : H_HelmetB
{
    displayName = "ARC Helmet Lite";
    picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_light_ca.paa";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\arc\MSF_O_ARC_Helmet.paa"};
    class ItemInfo: ItemInfo
    {
        mass = 15;
        allowedSlots[] = {901,605};
        uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
        modelSides[] = {3,1};
        hiddenSelections[] = {"Camo"};
        armor = "3*0.3";
        passThrough = 0.75;
    };
};