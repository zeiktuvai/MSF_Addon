class MSF_VicLoadout
{
	idd = 6218;
	class ControlsBackground {
        #include "assets\MSFTablet.inc"
    };
    class Controls
    {
        #include "\z\msf\addons\ui\cfg\dialogs\assets\Header.inc"
        
        class MainGroup : RscControlsGroup
        {
            idc = 102;
            
            x = "((getResolution select 2) * 0.5 * pixelW) - 100.2 * (pixelW * pixelGrid * 0.50)";
            y = "((getResolution select 3) * 0.5 * pixelH) - 61.4 * (pixelH * pixelGrid * 0.50)";
            w = "200.2 * (pixelW * pixelGrid * 0.50)";
            h = "116.1 * (pixelH * pixelGrid * 0.50)";
            class Controls
            {
                class MenuGroup : RscControlsGroup
                {
                    idc = 100;
                                        
                    x = "0";
                    y = "0";
                    w = "200 * (pixelW * pixelGrid * 0.50)";
                    h = "5 * (pixelH * pixelGrid * 0.50)";
                    class Controls
                    {
                        class menu_bg : RscText
                        {
                            idc = -1;
                            x = "0";
                            y = "0";
                            w = "200 * (pixelW * pixelGrid * 0.50)";
                            h = "5 * (pixelH * pixelGrid * 0.50)";
                            colorBackground[] = {0,0,0,1};
                        };
                        class BttnNew : RscShortcutButton
                        {
                            idc = 1600;
                            
                            text = "New";
                            x = "1 * (pixelW * pixelGrid * 0.50)";
                            y = "0";
                            w = "15 * (pixelW * pixelGrid * 0.50)";
                            h = "5 * (pixelH * pixelGrid * 0.50)";
                            onButtonClick = "[] call MSF_UI_fnc_OnVehicleLoadoutCreate;";
                            textureNoShortcut = "a3\3den\data\displays\display3den\toolbar\new_ca.paa";
                            #include "\z\msf\addons\ui\cfg\dialogs\assets\MenuButtonAttr.inc"
                        };
                        class BttnApply : RscShortcutButton
                        {
                            idc = 1601;
                            
                            text = "Apply";
                            x = "17 * (pixelW * pixelGrid * 0.50)";
                            y = "0";
                            w = "15 * (pixelW * pixelGrid * 0.50)";
                            h = "5 * (pixelH * pixelGrid * 0.50)";
                            onButtonClick = "[tvText [1500, tvCurSel 1500], tvCurSel 1500] call MSF_UI_fnc_OnVehicleLoadoutApply; closeDialog 0;";
                            textureNoShortcut = "a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_continue_ca.paa";
                            #include "\z\msf\addons\ui\cfg\dialogs\assets\MenuButtonAttr.inc"
                        };
                        class BttnUpdate : RscShortcutButton
                        {
                            idc = 1602;
                            
                            text = "Update";
                            x = "34 * (pixelW * pixelGrid * 0.50)";
                            y = "0";
                            w = "17 * (pixelW * pixelGrid * 0.50)";
                            h = "5 * (pixelH * pixelGrid * 0.50)";
                            onButtonClick = "[tvText [1500, tvCurSel 1500], tvCurSel 1500 select 0] call MSF_UI_fnc_OnVehicleLoadoutUpdate; closeDialog 0;";
                            textureNoShortcut = "a3\3den\data\displays\display3den\panelright\customcomposition_edit_ca.paa";                            
                            #include "\z\msf\addons\ui\cfg\dialogs\assets\MenuButtonAttr.inc"
                        };
                        class BttnDelete : RscShortcutButton
                        {
                            idc = 1603;
                            
                            text = "Delete";
                            x = "53 * (pixelW * pixelGrid * 0.50)";
                            y = "0";
                            w = "17 * (pixelW * pixelGrid * 0.50)";
                            h = "5 * (pixelH * pixelGrid * 0.50)";
                            onButtonClick = "[tvText [1500, tvCurSel 1500], tvCurSel 1500 select 0] call MSF_UI_fnc_OnVehicleLoadoutDelete;";
                            textureNoShortcut = "a3\3den\data\displays\display3den\panelleft\entitylist_delete_ca.paa";
                            #include "\z\msf\addons\ui\cfg\dialogs\assets\MenuButtonAttr.inc"
                        };
                        class BttnShare : RscShortcutButton
                        {
                            idc = 1604;
                            
                            text = "Share";
                            x = "72 * (pixelW * pixelGrid * 0.50)";
                            y = "0";
                            w = "17 * (pixelW * pixelGrid * 0.50)";
                            h = "5 * (pixelH * pixelGrid * 0.50)";
                            onButtonClick = "[tvText [1500, tvCurSel 1500], tvCurSel 1500 select 0] call MSF_UI_fnc_OnVehicleLoadoutShare;";
                            textureNoShortcut = "a3\3den\data\cfg3den\group\iconcustomcomposition_ca.paa";
                            #include "\z\msf\addons\ui\cfg\dialogs\assets\MenuButtonAttr.inc"
                        };
                    };
                };
                class LoadoutGroup : RscControlsGroup
                {
                    idc = 103;
                    
                    x = "0";
                    y = "5 * (pixelH * pixelGrid * 0.50)";
                    w = "60 * (pixelW * pixelGrid * 0.50)";
                    h = "110.1 * (pixelH * pixelGrid * 0.50)";
                    class Controls
                    {
                        class loadout_bg: RscFrame
                        {
                            idc = 1201;

                            text = "Loadouts";
                            colorBackground[] = {0,0,0,0.3};
                            x = "5 * (pixelW * pixelGrid * 0.50)";
                            y = "5 * (pixelH * pixelGrid * 0.50)";
                            w = "55 * (pixelW * pixelGrid * 0.50)";
                            h = "100 * (pixelH * pixelGrid * 0.50)";
                        };
                        class loadout_list: RscTree
                        {
                            idc = 1500;
                            
                            onTreeSelChanged = "params ['_control', '_selectionPath']; [_control, _selectionPath] call MSF_UI_fnc_OnVehicleLoadoutTreeSelChanged;";
                            colorLines[] = {1,1,1,1};
                            colorSelectBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                            x = "4 * (pixelW * pixelGrid * 0.50)";
                            y = "6 * (pixelH * pixelGrid * 0.50)";
                            w = "54 * (pixelW * pixelGrid * 0.50)";
                            h = "99 * (pixelH * pixelGrid * 0.50)";
                        };
                    };
                };
                class TreeButtonGroup : RscControlsGroup
                {
                    idc = 104;
                    x = "60.1 * (pixelW * pixelGrid * 0.50)";
                    y = "11 * (pixelH * pixelGrid * 0.50)";
                    w = "5 * (pixelW * pixelGrid * 0.50)";
                    h = "20 * (pixelH * pixelGrid * 0.50)";

                    class Controls
                    {
                        class ExpandAll: RscButtonMenuSteam
                        {
                            idc = 1610;

                            onButtonClick = "tvExpandAll 1500;";
                            x = "0";
                            y = "0";
                            w = "5 * (pixelW * pixelGrid * 0.50)";
                            h = "5 * (pixelH * pixelGrid * 0.50)";
                            text = "";
                            textureNoShortcut = "a3\3den\data\displays\display3den\tree_expand_ca.paa";
                            colorBackground[] = {1,1,1,0};
                            colorBackground2[] = {0,0,0,0.4};
                            colorBackgroundActive[] = {1,1,1,0};
                            colorBackgroundDisabled[] = { 1, 1, 1, 0 };
                            colorBackgroundFocused[] = {1,1,1,0};
                            colorShadow[] = { 1, 1, 1, 0 };
                        };
                        class CollapseAll: RscButtonMenuSteam
                        {
                            idc = 1611;

                            onButtonClick = "tvCollapseAll 1500;";
                            x = "0";
                            y = "5 * (pixelH * pixelGrid * 0.50)";
                            w = "5 * (pixelW * pixelGrid * 0.50)";
                            h = "5 * (pixelH * pixelGrid * 0.50)";
                            text = "";
                            textureNoShortcut = "a3\3den\data\displays\display3den\tree_collapse_ca.paa";
                            colorBackground[] = {1,1,1,0};
                            colorBackground2[] = {0,0,0,0.4};
                            colorBackgroundActive[] = {1,1,1,0};
                            colorBackgroundDisabled[] = { 1, 1, 1, 0 };
                            colorBackgroundFocused[] = {1,1,1,0};
                            colorShadow[] = { 1, 1, 1, 0 };
                        };
                    };
                };
                class DetailGroup : RscControlsGroup
                {
                    idc = 105;
                    x = "66 * (pixelW * pixelGrid * 0.50)";
                    y = "11 * (pixelH * pixelGrid * 0.50)";
                    w = "129 * (pixelW * pixelGrid * 0.50)";
                    h = "100 * (pixelH * pixelGrid * 0.50)";
                    class Controls
                    {
                        class detail_bg: RscText
                        {
                            idc = 1202;

                            text = "";
                            colorBackground[] = {0,0,0,0.3};
                            x = "0";
                            y = "5 * (pixelH * pixelGrid * 0.50)";
                            w = "129 * (pixelW * pixelGrid * 0.50)";
                            h = "94 * (pixelH * pixelGrid * 0.50)";
                        };
                        class detail_text: RscText
                        {
                            idc = 1002;

                            text = "Contents";
                            colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                            x = "0";
                            y = "0";
                            w = "129 * (pixelW * pixelGrid * 0.50)";
                            h = "5 * (pixelH * pixelGrid * 0.50)";
                        };
                        class loadout_details: ctrlListNBox
                        {
                            idc = 1501;           
                            
                            disableOverflow = 1;
                            rowHeight = 0.05;
                            colorSelectBackground[] = {0,0,0,0};
                            colorSelectBackground2[] = {0,0,0,0};
                            x = "0";
                            y = "5 * (pixelH * pixelGrid * 0.50)";
                            w = "128.5 * (pixelW * pixelGrid * 0.50)";
                            h = "93.5 * (pixelH * pixelGrid * 0.50)";
                        };
                    };
                };
            };
        };
        #include "assets/InputDialog.inc"
        #include "assets/StatusBar.inc"
    };
};
