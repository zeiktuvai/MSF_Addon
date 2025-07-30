class MSF_Logi_Markers
{
	idd = 6222;
	
    class ControlsBackground
    {
        #include "\z\msf\addons\ui\cfg\dialogs\assets\MSFTablet.inc"
        class Map : RscMapControl
        {
            idc = 3001;

            x = STR(CENTER_X - 100 * GRID_W);
            y = STR(CENTER_Y - 61.2 * GRID_H);
            w = STR(199.9 * GRID_W);
            h = STR(116.1 * GRID_H);       
        };
    };
    class Controls
    {   
        #include "\z\msf\addons\ui\cfg\dialogs\assets\Header.inc"

        class MainGroup : RscControlsGroup
        {
            idc = 102;
            x = STR(CENTER_X - 97 * GRID_W);
            y = STR(CENTER_Y - 57 * GRID_H);
            w = STR(60 * GRID_W);
            h = STR(108 * GRID_H);
            
            class Controls
            {
                class Frame : RscFrame
                {
                    idc = -1;
                    colorText[] = {0,0,0,1};                            
                    x = 0;
                    y = 0;
                    w = STR(60 * GRID_W);
                    h = STR(108 * GRID_H);
                };
                class bg : RscText
                {
                    idc = 1451;
                    text = "";
                    colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",0.9};
                    x = STR(0.1 * GRID_W);
                    y = STR(0.1 * GRID_H);
                    w = STR(59.8 * GRID_W);
                    h = STR(107.8 * GRID_H);    
                };
                class Name : RscStructuredText
                {
                    idc = 1200;

                    text = "Logi Markers";
                    x = STR(1 * GRID_W);
                    y = STR(0.1 * GRID_H);
                    w = STR(58 * GRID_W);
                    h = STR(8 * GRID_H);
                    shadow = 1;
                    class Attributes
                    {
                        font = "PuristaBold";
                        align = "center";
                        size = 1;                        
                        shadow = 1;
                    };
                };
                class List_BG : RscText
                {
                    idc = -1;
                    text = "";
                    colorBackground[] = {0,0,0,0.6};
                    x = STR(0.1 * GRID_W);
                    y = STR(8 * GRID_H);
                    w = STR(59.8 * GRID_W);
                    h = STR(90 * GRID_H);
                };
                class Marker_list : ctrlListNBox
                {
                    idc = 1500;

                    style = 0x20;
                    onLBSelChanged = "params ['_control', '_lbCurSel', '_lbSelection']; [_lbCurSel] call MSF_UI_fnc_OnLogiMarkerCurSelChanged; [] call MSF_UI_fnc_OnLogiMarkerSelChanged;";
                    disableOverflow = 1;
                    rowHeight = 0.02;
                    colorSelectBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    x = STR(0.1 * GRID_W);
                    y = STR(9 * GRID_H);
                    w = STR(59.8 * GRID_W);
                    h = STR(89 * GRID_H);
                };
                class ButtonGroup : RscControlsGroup
                {
                    idc = 103;
                    x = STR(2.5 * GRID_W);
                    y = STR(100 * GRID_H);
                    w = STR(55 * GRID_W);
                    h = STR(8 * GRID_H);
                    
                    class Controls
                    {
                        class Del_BG : RscStructuredText
                        {
                            idc = -1;
                            text = "DELETE: ";
                            colorBackground[] = {0,0,0,0.6};
                            x = 0;
                            y = 0;
                            w = STR(19 * GRID_W);
                            h = STR(6 * GRID_H);
                            class Attributes
                            {
                                font = "PuristaLight";
                            };
                        };
                        class Delete_All : RscButtonMenu
                        {
                            idc = 1600;
                            
                            text = "All";
                            x = STR(20.5 * GRID_W);
                            y = 0;
                            w = STR(10 * GRID_W);
                            h = STR(6 * GRID_H);
                        };
                        class Delete_Sel : RscButtonMenu
                        {
                            idc = 1600;
                            
                            text = "Selected";
                            x = STR(32 * GRID_W);
                            y = 0;
                            w = STR(23 * GRID_W);
                            h = STR(6 * GRID_H);
                        };
                    };
                };
            };
        };


        #include "\z\msf\addons\ui\cfg\dialogs\assets\StatusBar.inc"
    };
};
