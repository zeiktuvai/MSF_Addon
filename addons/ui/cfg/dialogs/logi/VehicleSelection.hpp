class MSF_Logi_Vics
{
	idd = 6223;
	
    class ControlsBackground
    {
        #include "\z\msf\addons\ui\cfg\dialogs\assets\MSFTablet.inc"

    };
    class Controls
    {   
        #include "\z\msf\addons\ui\cfg\dialogs\assets\Header.inc"
        class cost: RscText
        {
            idc = 1006;
            
            text = "Cost: ";
            x = STR(CENTER_X - 100.2 * GRID_W);
            y = STR(CENTER_Y - 69 * GRID_H);
            w = STR(40 * GRID_W);
            h = STR(10 * GRID_H);
        };
        class MainGroup : RscControlsGroup
        {
            idc = 102;
            
            x = STR(CENTER_X - 97.2 * GRID_W);
            y = STR(CENTER_Y - 57.4 * GRID_H);
            w = STR(194.2 * GRID_W);
            h = STR(115.1 * GRID_H);
            class Controls
            {
                
                class list_item: RscText
                {
                    idc = 1002;

                    text = "Item Selection";
                    colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    x = 0;
                    y = 0;
                    w = STR(100 * GRID_W);
                    h = STR(5 * GRID_H);
                };
                class detail_bg: RscText
                {
                    idc = 1202;

                    text = "";
                    colorBackground[] = {0,0,0,0.3};
                    x = 0;
                    y = STR(5 * GRID_H);
                    w = STR(100 * GRID_W);
                    h = STR(103 * GRID_H);
                };
                class MSF_supply_dialog_list: ctrlListNBox
                {
                    idc = 1500;

                    onLBSelChanged = "params ['_control', '_lbCurSel', '_lbSelection']; [lnbData [1500, [_lbCurSel, 0]], lnbData [1500, [_lbCurSel, 1]]] call MSF_UI_fnc_OnVechicleSelChanged;";
                    disableOverflow = 1;
                    rowHeight = 0.05;
                    colorSelectBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    x = 0;
                    y = STR(6 * GRID_H);
                    w = STR(99.8 * GRID_W);
                    h = STR(100 * GRID_H);
                };
                class DetailGroup : RscControlsGroup
                {
                    idc = 104;
                    x = STR(105 * GRID_W);
                    y = 0;
                    w = STR(89* GRID_W);
                    h = STR(108.4 * GRID_H);

                    class Controls
                    {
                        class detail_title: RscStructuredText
                        {
                            idc = 1005;

                            text = "";
                            colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                            x = STR(0.1 * GRID_W);
                            y = STR(0.1 * GRID_H);
                            w = STR(88.7 * GRID_W);
                            h = STR(7 * GRID_H);
                            class Attributes
                            {
                                size = 1.2;
                                align = "center";
                            };
                        };
                        class detail_text_bg: RscStructuredText
                        {
                            idc = 1205;

                            text = "";
                            colorBackground[] = {0,0,0,0.3};
                            x = STR(0.1 * GRID_W);
                            y = STR(64 * GRID_H);
                            w = STR(88.7 * GRID_W);
                            h = STR(34 * GRID_H);
                            class Attributes
                            {
                                size = 0.65;
                            };
                        };
                        class detail_img: RscPicture
                        {
                            idc = 1004;

                            text = "";
                            x = STR(0.1 * GRID_W);
                            y = STR(7 * GRID_H);
                            w = STR(88.8 * GRID_W);
                            h = STR(57 * GRID_H);
                        };
                        class SubmitButton: RscShortcutButton
                        {
                            idc = 1600;
                            onButtonClick = "[lnbCurSelRow 1500] call MSF_UI_fnc_OnVehicleSelect;";
                            colorBackgroundFocused[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                            text = "Select Drop Zone";
                            x = STR(0.1 * GRID_W);
                            y = STR(99.3 * GRID_H);
                            w = STR(88.6 * GRID_W);
                            h = STR(9 * GRID_H);
                            colorText[] = {1,1,1,1};
                            colorBackground[] = {1,0.74,0,1};
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
        

        #include "\z\msf\addons\ui\cfg\dialogs\assets\StatusBar.inc"
    };
};
