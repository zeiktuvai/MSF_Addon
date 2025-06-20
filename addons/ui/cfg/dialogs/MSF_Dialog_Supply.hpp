class MSF_SupplyDialog
{
    idd = 6217;
    
     class ControlsBackground
    {
        #include "assets\MSFTablet.inc"
    };
    class Controls
    {
        class MenuGroup : RscControlsGroup
        {
            idc = 101;
            
            x = "((getResolution select 2) * 0.5 * pixelW) - 100.2 * (pixelW * pixelGrid * 0.50)";
            y = "((getResolution select 3) * 0.5 * pixelH) - 66.5 * (pixelH * pixelGrid * 0.50)";
            w = "200.2 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
            class Controls
            {
                class Title: RscText
                {
                    idc = 1001;

                    text = "Supply Depot"; //--- ToDo: Localize;
                    x = "0";
                    y = "0";
                };
                class RscButtonMenuCancel: RscButtonMenuSteam
                {
                    idc = 601;

                    onButtonClick = "closeDialog 0;";
                    x = "195 * (pixelW * pixelGrid * 0.50)";                    
                    y = "0";
                    w = "5 * (pixelW * pixelGrid * 0.50)";
                    h = "5 * (pixelH * pixelGrid * 0.50)";
                    text = "";
                    textureNoShortcut = "\a3\3den\data\controlsgroups\tutorial\close_ca.paa";
                    colorBackground[] = {1,1,1,0};
                    colorBackground2[] = {0,0,0,0.4};
	                colorBackgroundActive[] = {1,1,1,0};
	                colorBackgroundDisabled[] = { 1, 1, 1, 0 };
	                colorBackgroundFocused[] = {1,1,1,0};
	                colorShadow[] = { 1, 1, 1, 0 };
                };
            };
        };
        class MainGroup : RscControlsGroup
        {
            idc = 102;
            
            x = "((getResolution select 2) * 0.5 * pixelW) - 100.2 * (pixelW * pixelGrid * 0.50)";
            y = "((getResolution select 3) * 0.5 * pixelH) - 61.4 * (pixelH * pixelGrid * 0.50)";
            w = "200.2 * (pixelW * pixelGrid * 0.50)";
            h = "116.1 * (pixelH * pixelGrid * 0.50)";
            class Controls
            {
                 class menu: ctrlMenuStrip
                {
                    idc = 2201;            
                    x = "0";
                    y = "0";
                    w = "200 * (pixelW * pixelGrid * 0.50)";
                    h = "5 * (pixelH * pixelGrid * 0.50)";
                    class Items
                    {
                        items[] = {"Logi", "Supply"};
                        class Logi
                        {
                            text = "Logistics System";
                        };                      
                        class Supply
                        {
                            items[] = {"Retrieve"};
                            text = "Supplies";
                        };
                        class Retrieve
                        {
                            text = "Retrieve Selected";
                            action = "[player, lnbData [1500, [lnbCurSelRow 1500, 1]]] call MSF_Logi_fnc_GetLogiSelection; closeDialog 0;";
                        };
                        class Default;
                        class Separator;
                    };
                };
                class list_item: RscText
                {
                    idc = 1002;

                    text = "Item";
                    colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    x = "5 * (pixelW * pixelGrid * 0.50)";
                    y = "10 * (pixelH * pixelGrid * 0.50)";
                    w = "100 * (pixelW * pixelGrid * 0.50)";
                    h = "5 * (pixelH * pixelGrid * 0.50)";
                };
                class list_cost: RscText
                {
                    idc = 1003;

                    text = "Cost";                    
                    x = "94 * (pixelW * pixelGrid * 0.50)";
                    y = "10 * (pixelH * pixelGrid * 0.50)";
                    w = "100 * (pixelW * pixelGrid * 0.50)";
                    h = "5 * (pixelH * pixelGrid * 0.50)";
                };
                class detail_bg: RscText
                {
                    idc = 1202;

                    text = "";
                    colorBackground[] = {0,0,0,0.3};
                    x = "5 * (pixelW * pixelGrid * 0.50)";
                    y = "15 * (pixelH * pixelGrid * 0.50)";
                    w = "100 * (pixelW * pixelGrid * 0.50)";
                    h = "95 * (pixelH * pixelGrid * 0.50)";
                };
                class MSF_supply_dialog_list: ctrlListNBox
                {
                    idc = 1500;

                    onLBSelChanged = "params ['_control', '_lbCurSel', '_lbSelection']; [_control, _lbCurSel, _lbSelection] call MSF_UI_fnc_OnSupplySelChanged;";
                    disableOverflow = 1;
                    rowHeight = 0.05;
                    colorSelectBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    x = "5 * (pixelW * pixelGrid * 0.50)";
                    y = "15 * (pixelH * pixelGrid * 0.50)";
                    w = "100 * (pixelW * pixelGrid * 0.50)";
                    h = "95 * (pixelH * pixelGrid * 0.50)";
                };
                class DetailGroup : RscControlsGroup
                {
                    idc = 104;
                    x = "114 * (pixelW * pixelGrid * 0.50)";
                    y = "10 * (pixelH * pixelGrid * 0.50)";
                    w = "77 * (pixelW * pixelGrid * 0.50)";
                    h = "100 * (pixelH * pixelGrid * 0.50)";

                    class Controls
                    {
                        class detailt_bg: RscFrame
                        {
                            idc = 1201;

                            text = "";
                            colorBackground[] = {0,0,0,0.3};
                            x = "0.1 * (pixelW * pixelGrid * 0.50)";
                            y = "0.1 * (pixelH * pixelGrid * 0.50)";
                            w = "75.5 * (pixelW * pixelGrid * 0.50)";
                            h = "90 * (pixelH * pixelGrid * 0.50)";
                        };
                        class detail_title: RscStructuredText
                        {
                            idc = 1005;

                            text = "";
                            colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                            x = "0.1 * (pixelW * pixelGrid * 0.50)";
                            y = "0.1 * (pixelH * pixelGrid * 0.50)";
                            w = "75 * (pixelW * pixelGrid * 0.50)";
                            h = "7 * (pixelH * pixelGrid * 0.50)";
                            class Attributes
                            {
                                size = 1.2;
                            };
                        };
                        class detail_text: RscStructuredText
                        {
                            idc = 1004;

                            text = "";
                            x = "0.1 * (pixelW * pixelGrid * 0.50)";
                            y = "8 * (pixelH * pixelGrid * 0.50)";
                            w = "75 * (pixelW * pixelGrid * 0.50)";
                            h = "82 * (pixelH * pixelGrid * 0.50)";
                            class Attributes
                            {
                                size = 0.8;
                            };
                        };
                        class MSF_supply_dialog_ok: RscShortcutButton
                        {
                            idc = 1600;
                            onButtonClick = "[player, lnbData [1500, [lnbCurSelRow 1500, 1]]] call MSF_Logi_fnc_GetLogiSelection; closeDialog 0;";
                            colorBackgroundFocused[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};

                            borderSize = 2;
                            colorBorder[] = {1,1,1,1};
                            text = "Retrieve Selection"; //--- ToDo: Localize;
                            x = "0.1 * (pixelW * pixelGrid * 0.50)";
                            y = "91 * (pixelH * pixelGrid * 0.50)";
                            w = "75.5 * (pixelW * pixelGrid * 0.50)";
                            h = "9 * (pixelH * pixelGrid * 0.50)";
                            colorText[] = {1,1,1,1};
                            colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                            class Attributes
                            {
                                size = 1.3;
                                align = "center";
                                
                            };
                        };
                    };
                };
            };
        };
        class StatusbarGroup : RscControlsGroup
        {
            idc = 103;
            
            x = "((getResolution select 2) * 0.5 * pixelW) - 61.2 * (pixelW * pixelGrid * 0.50)";
            y = "((getResolution select 3) * 0.5 * pixelH) + 55 * (pixelH * pixelGrid * 0.50)";
            w = "161.2 * (pixelW * pixelGrid * 0.50)";
            h = "8 * (pixelH * pixelGrid * 0.50)";
            class Controls
            {
                class LogiP: RscText
                {
                    idc = 1034;

                    sizeEx = 0.03;
                    colorBackground[] = {0,0,0,0.8};
                    shadow = 2;
                    text = "Logi: 0pts";
                    tooltip = "Available Logistics Poinsts";
                    x = "0";
                    y = "0.5 * (pixelH * pixelGrid * 0.50)";
                    w = "15 * (pixelW * pixelGrid * 0.50)";
                    h = "7 * (pixelH * pixelGrid * 0.50)";
                };
                class MSFVer: RscText
                {
                    idc = 1033;

                    text = "v2.13.0";
                    x = "146 * (pixelW * pixelGrid * 0.50)";
                    y = "3 * (pixelH * pixelGrid * 0.50)";
                    w = "15 * (pixelW * pixelGrid * 0.50)";
                };
            };
        };
    };
};
