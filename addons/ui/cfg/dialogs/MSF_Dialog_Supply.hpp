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
            
            x = STR(CENTER_X - 100.2 * GRID_W);
            y = STR(CENTER_Y - 61.4 * GRID_H);
            w = STR(200.2 * GRID_W);
            h = STR(116.1 * GRID_H);
            class Controls
            {
                class menu: ctrlMenuStrip
                {
                    idc = 2201;            
                    x = "0";
                    y = "0";
                    w = STR(200 * GRID_W);
                    h = STR(5 * GRID_H);
                    class Items
                    {
                        class Default;
                        class Separator;
                    };
                };
                class list_item: RscText
                {
                    idc = 1002;

                    text = "Item";
                    colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    x = STR(5 * GRID_W);
                    y = STR(10 * GRID_H);
                    w = STR(100 * GRID_W);
                    h = STR(5 * GRID_H);
                };
                class list_cost: RscText
                {
                    idc = 1003;

                    text = "Cost";                    
                    x = STR(94 * GRID_W);
                    y = STR(10 * GRID_H);
                    w = STR(100 * GRID_W);
                    h = STR(5 * GRID_H);
                };
                class detail_bg: RscText
                {
                    idc = 1202;

                    text = "";
                    colorBackground[] = {0,0,0,0.3};
                    x = STR(5 * GRID_W);
                    y = STR(15 * GRID_H);
                    w = STR(100 * GRID_W);
                    h = STR(95 * GRID_H);
                };
                class MSF_supply_dialog_list: ctrlListNBox
                {
                    idc = 1500;

                    onLBSelChanged = "params ['_control', '_lbCurSel', '_lbSelection']; [_control, _lbCurSel, _lbSelection] call MSF_UI_fnc_OnSupplySelChanged;";
                    disableOverflow = 1;
                    rowHeight = 0.05;
                    colorSelectBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    x = STR(5 * GRID_W);
                    y = STR(15 * GRID_H);
                    w = STR(100 * GRID_W);
                    h = STR(95 * GRID_H);
                };
                class PointsDisp : RscStructuredText
                {

                    idc = 1203;

                    text = "Remaining Supply: 0pts";
                    colorBackground[] = {1,0.75,0,0.3};                            
                    x = STR(114 * GRID_W);
                    y = STR(10 * GRID_H);
                    w = STR(75.6 * GRID_W);
                    h = STR(5 * GRID_H);
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
                    x = STR(114 * GRID_W);
                    y = STR(18 * GRID_H);
                    w = STR(77 * GRID_W);
                    h = STR(93 * GRID_H);

                    class Controls
                    {
                        class detailt_bg: RscFrame
                        {
                            idc = 1201;

                            text = "";
                            colorBackground[] = {0,0,0,0.3};
                            x = STR(0.1 * GRID_W);
                            y = STR(0.1 * GRID_H);
                            w = STR(75.5 * GRID_W);
                            h = STR(80 * GRID_H);
                        };
                        class detail_title: RscStructuredText
                        {
                            idc = 1005;

                            text = "";
                            colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                            x = STR(0.1 * GRID_W);
                            y = STR(0.1 * GRID_H);
                            w = STR(75 * GRID_W);
                            h = STR(7 * GRID_H);
                            class Attributes
                            {
                                size = 1.2;
                            };
                        };
                        class detail_text: RscStructuredText
                        {
                            idc = 1004;

                            text = "";
                            x = STR(0.1 * GRID_W);
                            y = STR(8 * GRID_H);
                            w = STR(75 * GRID_W);
                            h = STR(73 * GRID_H);
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
                            x = STR(0.1 * GRID_W);
                            y = STR(83 * GRID_H);
                            w = STR(75.5 * GRID_W);
                            h = STR(9 * GRID_H);
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
