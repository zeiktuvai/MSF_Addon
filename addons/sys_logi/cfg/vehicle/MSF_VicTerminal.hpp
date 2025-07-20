class RuggedTerminal_01_communications_F;

class MSF_VehicleTerminal : RuggedTerminal_01_communications_F
{
    displayName = "Vehicle Loadout Terminal";
    author = "Zeik_Tuvai";
    editorCategory = "MSF";
    editorSubcategory = "MSF_Logistics";
    hiddenSelectionsTextures[] = {"z\msf\addons\data\ui\Yodel_OS.paa","#(argb,8,8,3)color(1,0.5,0.25,0.99,CA)","a3\props_f_decade\objectives\data\linkterminal_box_01_co.paa","a3\props_f_decade\objectives\data\linkterminal_box_02_co.paa","a3\props_f_decade\objectives\data\linkterminal_01_ntb_ant_co.paa","a3\props_f_decade\objectives\data\linknode_01_main_f_acessories_co.paa"};
    class AnimationSources {};
    class Attributes {};
    class UserActions {
        class RetrieveSupplies {
            displayName = "Vehicle Loadouts";
            displayNameDefault = "<img image='a3\soft_f_epc\truck_03\data\ui\truck_03_ammo_ca.paa'/>";
            priority = 6;
            radius = 10;
            position = "camera";
            showWindow = 1;
            hideOnUse = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "alive this";
            statement = "[] call MSF_UI_fnc_DisplayVicLoadouts;";
        };
    };
    class EventHandlers
    {
        class SupplyInit
        {
            init = "[_this select 0,['Terminal_source','Terminal_source_sound'],1*100,true] call bis_fnc_LinkTerminal_Animations";
        };
    };
};
