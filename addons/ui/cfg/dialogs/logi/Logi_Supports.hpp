class MSFdevdialog
{
	idd = 6221;
	
    class ControlsBackground
    {
        #include "\z\msf\addons\ui\cfg\dialogs\assets\MSFTablet.inc"
    };
    class Controls
    {   
        #include "\z\msf\addons\ui\cfg\dialogs\assets\Header.inc"
        class menu : RscText // ctrlMenuStrip
        {
            idc = 2201;
            
            x = STR(CENTER_X - 100.2 * GRID_W);
            y = STR(CENTER_Y - 61.4 * GRID_H);
            w = STR(200.1 * GRID_W);
            h = STR(5 * GRID_H);
            
            text = "";
            colorBackground[] = {0,0,0,1};        
            // class Items
            // {
            //     items[] = {"Logi"};
            //     class Logi
            //     {
            //         text = "Logistics System";
            //     };                
            //     class Default;
            //     class Separator;
            // };
        };
        class MainGroup : RscControlsGroup
        {
            idc = 102;
            
            x = STR(CENTER_X - 97.2 * GRID_W);
            y = STR(CENTER_Y - 53.4 * GRID_H);
            w = STR(194.2 * GRID_W);
            h = STR(107.1 * GRID_H);
            class Controls
            {
                
                class list_item: RscText
                {
                    idc = 1002;

                    text = "Item";
                    colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    x = 0;
                    y = 0;
                    w = STR(100 * GRID_W);
                    h = STR(5 * GRID_H);
                };
                class list_cost: RscText
                {
                    idc = 1003;

                    text = "Cost";                    
                    x = STR(88 * GRID_W);
                    y = 0;
                    w = STR(10 * GRID_W);
                    h = STR(5 * GRID_H);
                };
                class detail_bg: RscText
                {
                    idc = 1202;

                    text = "";
                    colorBackground[] = {0,0,0,0.3};
                    x = 0
                    y = STR(5 * GRID_H);
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
                    x = 0;
                    y = STR(6 * GRID_H);
                    w = STR(99.8 * GRID_W);
                    h = STR(92 * GRID_H);
                };
                class PointsDisp : RscStructuredText
                {
                    idc = 1203;

                    text = "Remaining Logistics: 0pts";
                    colorBackground[] = {1,0.75,0,0.3};                            
                    x = STR(105 * GRID_W);
                    y = 0;
                    w = STR(89 * GRID_W);
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
                    x = STR(105 * GRID_W);
                    y = STR(7 * GRID_H);
                    w = STR(89* GRID_W);
                    h = STR(93 * GRID_H);

                    class Controls
                    {
                        class detail_title: RscStructuredText
                        {
                            idc = 1005;

                            text = "";
                            colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                            x = STR(0.1 * GRID_W);
                            y = STR(0.1 * GRID_H);
                            w = STR(88.8 * GRID_W);
                            h = STR(7 * GRID_H);
                            class Attributes
                            {
                                size = 1.2;
                                align = "center";
                            };
                        };
                        class detail_text: RscStructuredText
                        {
                            idc = 1004;

                            text = "";
                            x = STR(0.1 * GRID_W);
                            y = STR(8 * GRID_H);
                            w = STR(88.8 * GRID_W);
                            h = STR(59 * GRID_H);
                            colorBackground[] = {0,0,0,0.3};
                            class Attributes
                            {
                                size = 0.8;
                            };
                        };
                        class DetailGroup : RscControlsGroup
                        {
                            idc = 105;
                            x = STR(0.1 * GRID_W);
                            y = STR(68 * GRID_H);
                            w = STR(88.8 * GRID_W);
                            h = STR(14 * GRID_H);

                            class Controls
                            {
                                class stat_bgs: RscText
                                {
                                    idc = 1204;

                                    text = "";
                                    colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                                    x = 0;
                                    y = 0;
                                    w = STR(88.8 * GRID_W);
                                    h = STR(14 * GRID_H);
                                };
                                class stat_para: RscCheckBox
                                {
                                    idc = 1800;
                                    x = STR(1 * GRID_W);
                                    y = STR(1 * GRID_H);
                                    w = STR(5 * GRID_W);
                                    h = STR(5 * GRID_H);
                                };
                                class para_text: RscText
                                {
                                    idc = 1006;

                                    text = "Paradrop";                    
                                    x = STR(6 * GRID_W);
                                    y = STR(1 * GRID_H);
                                    w = STR(20 * GRID_W);
                                    h = STR(5 * GRID_H);
                                };
                            };
                        };
                        class SubmitButton: RscShortcutButton
                        {
                            idc = 1600;
                            //onButtonClick = "[lnbData [1500, [lnbCurSelRow 1500, 1]], player] call MSF_Logi_fnc_SubmitLogiRequest; closeDialog 0;";
                            colorBackgroundFocused[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                            text = "    Submit Request";
                            x = STR(0.1 * GRID_W);
                            y = STR(84 * GRID_H);
                            w = STR(75.5 * GRID_W);
                            h = STR(9 * GRID_H);
                            colorText[] = {1,1,1,1};
                            colorBackground[] = {1,0.74,0,1};
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

        #include "\z\msf\addons\ui\cfg\dialogs\assets\StatusBar.inc"
    };
};
