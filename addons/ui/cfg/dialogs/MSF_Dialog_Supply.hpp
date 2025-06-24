class MSF_SupplyDialog
{
    idd = 6217;
    
     class ControlsBackground
    {
        #include "assets\MSFTablet.inc"
    };
    class Controls
    {
        #include "assets\Header.inc"
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
                            action = "[player, lnbData [1500, [lnbCurSelRow 1500, 1]]] call MSF_Logi_fnc_RetrieveSupplies; closeDialog 0;";
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
                class PointsDisp : RscStructuredText
                {

                    idc = 1203;

                    text = "Remaining Supply: 0pts";
                    colorBackground[] = {1,0.75,0,0.3};                            
                    x = "114 * (pixelW * pixelGrid * 0.50)";
                    y = "10 * (pixelH * pixelGrid * 0.50)";
                    w = "75.6 * (pixelW * pixelGrid * 0.50)";
                    h = "5 * (pixelH * pixelGrid * 0.50)";
                    shadow = 0;
                    class Attributes
                    {
                        font = "PuristaBold";
                        align = "center";
                        size = 0.9;
                        shadow = 1;
                    };
                };
                class DetailGroup : RscControlsGroup
                {
                    idc = 104;
                    x = "114 * (pixelW * pixelGrid * 0.50)";
                    y = "18 * (pixelH * pixelGrid * 0.50)";
                    w = "77 * (pixelW * pixelGrid * 0.50)";
                    h = "93 * (pixelH * pixelGrid * 0.50)";

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
                            h = "80 * (pixelH * pixelGrid * 0.50)";
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
                            h = "73 * (pixelH * pixelGrid * 0.50)";
                            class Attributes
                            {
                                size = 0.8;
                            };
                        };
                        class MSF_supply_dialog_ok: RscShortcutButton
                        {
                            idc = 1600;
                            onButtonClick = "[lnbData [1500, [lnbCurSelRow 1500, 1]]] call MSF_Logi_fnc_RetrieveSupplies; closeDialog 0;";
                            colorBackgroundFocused[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};

                            borderSize = 2;
                            colorBorder[] = {1,1,1,1};
                            text = "            Retrieve Selection"; //--- ToDo: Localize;
                            x = "0.1 * (pixelW * pixelGrid * 0.50)";
                            y = "83 * (pixelH * pixelGrid * 0.50)";
                            w = "75.5 * (pixelW * pixelGrid * 0.50)";
                            h = "9 * (pixelH * pixelGrid * 0.50)";
                            colorText[] = {1,1,1,1};
                            colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                            class Attributes
                            {
                                size = 1.3;
                                align = "left";                                
                            };
                        };
                    };
                };
            };
        };
        #include "assets/StatusBar.inc"
    };
};
