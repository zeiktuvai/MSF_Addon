class MSF_LogiSupport
{
	idd = 6219;
	
    class ControlsBackground
    {
        #include "\z\msf\addons\ui\cfg\dialogs\assets\MSFTablet.inc"
    };
    class Controls
    {   
        #include "\z\msf\addons\ui\cfg\dialogs\assets\Header.inc"

        class menu: ctrlMenuStrip
        {
            idc = 2201;            
            x = STR(CENTER_X - 100.2 * GRID_W);
            y = STR(CENTER_Y - 61.4 * GRID_H);
            w = STR(200.1 * GRID_W);
            h = STR(5 * GRID_H);
            class Items
            {
                items[] = {"Map"};                
                class Map
                {
                    text = "Map";
                    items[] = {"Clear"};
                };
                class Clear
                {
                    text = "Clear Request Markers";
                    action = "[] call MSF_UI_fnc_OnClearMarkersClicked";
                };
                class Default;
                class Separator;
            };
        };
        class MainGroup : RscControlsGroup
        {
            idc = 102;
            x = STR(CENTER_X - 100.2 * GRID_W);
            y = STR(CENTER_Y - 56.4 * GRID_H);
            w = STR(55 * GRID_W);
            h = STR(111.1 * GRID_H);        
            class Controls
            {
                class PointsDisp : RscStructuredText
                {
                    idc = 1200;

                    text = "Available Logistics <br/> 0pts";
                    colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    x = STR(1 * GRID_W);
                    y = STR(1 * GRID_H);
                    w = STR(53 * GRID_W);
                    h = STR(12 * GRID_H);
                    shadow = 1;
                    class Attributes
                    {
                        font = "PuristaBold";
                        align = "center";
                        size = 1.1;
                        color = "#FFBF00";
                        shadow = 1;
                    };
                };
                class list_item: RscText
                {
                    idc = 1002;

                    text = "Item";
                    colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    x = STR(1 * GRID_W);
                    y = STR(14 * GRID_H);
                    w = STR(53 * GRID_W);
                    h = STR(5 * GRID_H);
                };
                class list_cost: RscText
                {
                    idc = 1003;

                    text = "Cost";                    
                    x = STR(44 * GRID_W);
                    y = STR(14 * GRID_H);
                    w = STR(10 * GRID_W);
                    h = STR(5 * GRID_H);
                };
                class SupportList: ctrlListNBox
                {
                    idc = 1500;

                    onLBSelChanged = "params ['_control', '_lbCurSel', '_lbSelection']; [_control, _lbCurSel, _lbSelection] call MSF_UI_fnc_OnSupportSelChanged;";
                    disableOverflow = 1;
                    rowHeight = 0.05;
                    tooltipPerColumn = "true";
                    colorSelectBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    x = STR(1 * GRID_W);
                    y = STR(20 * GRID_H);
                    w = STR(53 * GRID_W);
                    h = STR(78 * GRID_H);
                };
                class SubmitButton: RscShortcutButton
                {
                    idc = 1601;
                    onButtonClick = "[lnbData [1500, [lnbCurSelRow 1500, 1]], player] call MSF_Logi_fnc_SubmitLogiRequest; closeDialog 0;";
                    colorBackgroundFocused[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    text = "    Submit Request";
                    x = STR(1 * GRID_W);
                    y = STR(101 * GRID_H);
                    w = STR(53 * GRID_W);
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
        class Map : RscMapControl
        {
            idc = 3001;

            x = STR(CENTER_X - 44.8 * GRID_W);
            y = STR(CENTER_Y - 56.4 * GRID_H);
            w = STR(144.8 * GRID_W);
            h = STR(111.1 * GRID_H);         
        };
        class InfoDisp : RscStructuredText
        {
            idc = 1201;

            text = "Select the location to deploy your logistics request.";
            colorBackground[] = {0,0,0,0.7};
            x = STR(CENTER_X - 33 * GRID_W);
            y = STR(CENTER_Y - 55.4 * GRID_H);
            w = STR(120 * GRID_W);
            h = STR(5 * GRID_H);  
            shadow = 0;
            class Attributes
            {
                font = "PuristaBold";
                align = "center";
                size = 0.8;
                color = "#8b0000";
                shadow = 0;
            };
        };
        #include "\z\msf\addons\ui\cfg\dialogs\assets\StatusBar.inc"
    };
};
