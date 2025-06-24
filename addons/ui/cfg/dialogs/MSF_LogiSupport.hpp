#define GRID_H (pixelH * pixelGrid * 0.50)
#define GRID_W (pixelW * pixelGrid * 0.50)
#define STR(VAR) #VAR

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
            x = "((getResolution select 2) * 0.5 * pixelW) - 100.2 * (pixelW * pixelGrid * 0.50)";
            y = "((getResolution select 3) * 0.5 * pixelH) - 61.4 * (pixelH * pixelGrid * 0.50)";
            w = STR(200.1 * GRID_W);
            h = STR(5 * GRID_H);
            class Items
            {
                items[] = {"Logi", "Map"};
                class Logi
                {
                    text = "Logistics System";
                };
                class Map
                {
                    text = "Map";
                    items[] = {"Clear"};
                };
                class Clear
                {
                    text = "Clear Request Markers";
                    action = "[player] call MSF_Logi_fnc_OnClearMarkersClicked";
                };
                class Default;
                class Separator;
            };
        };
        class MainGroup : RscControlsGroup
        {
            idc = 102;
            x = "((getResolution select 2) * 0.5 * pixelW) - 100.2 * (pixelW * pixelGrid * 0.50)";
            y = "((getResolution select 3) * 0.5 * pixelH) - 56.4 * (pixelH * pixelGrid * 0.50)";
            w = "55 * (pixelW * pixelGrid * 0.50)";
            h = "111.1 * (pixelH * pixelGrid * 0.50)";        
            class Controls
            {
                class PointsDisp : RscStructuredText
                {
                    idc = 1200;

                    text = "Available Logistics <br/> 0pts";
                    colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    x = "1 * (pixelW * pixelGrid * 0.50)";
                    y = "1 * (pixelH * pixelGrid * 0.50)";
                    w = "53 * (pixelW * pixelGrid * 0.50)";
                    h = "12 * (pixelH * pixelGrid * 0.50)";
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
                    x = "1 * (pixelW * pixelGrid * 0.50)";
                    y = "14 * (pixelH * pixelGrid * 0.50)";
                    w = "53 * (pixelW * pixelGrid * 0.50)";
                    h = "5 * (pixelH * pixelGrid * 0.50)";
                };
                class list_cost: RscText
                {
                    idc = 1003;

                    text = "Cost";                    
                    x = "44 * (pixelW * pixelGrid * 0.50)";
                    y = "14 * (pixelH * pixelGrid * 0.50)";
                    w = "10 * (pixelW * pixelGrid * 0.50)";
                    h = "5 * (pixelH * pixelGrid * 0.50)";
                };
                class SupportList: ctrlListNBox
                {
                    idc = 1500;

                    onLBSelChanged = "params ['_control', '_lbCurSel', '_lbSelection']; [_control, _lbCurSel, _lbSelection] call MSF_UI_fnc_OnSupportSelChanged;";
                    disableOverflow = 1;
                    rowHeight = 0.05;
                    tooltipPerColumn = "true";
                    colorSelectBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    x = "1 * (pixelW * pixelGrid * 0.50)";
                    y = "20 * (pixelH * pixelGrid * 0.50)";
                    w = "53 * (pixelW * pixelGrid * 0.50)";
                    h = "78 * (pixelH * pixelGrid * 0.50)";
                };
                class SubmitButton: RscShortcutButton
                {
                    idc = 1601;
                    onButtonClick = "[lnbData [1500, [lnbCurSelRow 1500, 1]], player] call MSF_Logi_fnc_SubmitLogiRequest; closeDialog 0;";
                    colorBackgroundFocused[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    text = "    Submit Request";
                    x = "1 * (pixelW * pixelGrid * 0.50)";
                    y = "101 * (pixelH * pixelGrid * 0.50)";
                    w = "53 * (pixelW * pixelGrid * 0.50)";
                    h = "9 * (pixelH * pixelGrid * 0.50)";
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

            x = "((getResolution select 2) * 0.5 * pixelW) - 44.8 * (pixelW * pixelGrid * 0.50)";
            y = "((getResolution select 3) * 0.5 * pixelH) - 56.4 * (pixelH * pixelGrid * 0.50)";
            w = "144.8 * (pixelW * pixelGrid * 0.50)";
            h = "111.1 * (pixelH * pixelGrid * 0.50)";         
        };
        class InfoDisp : RscStructuredText
        {
            idc = 1201;

            text = "Select the location to deploy your logistics request.";
            colorBackground[] = {0,0,0,0.7};
            x = "((getResolution select 2) * 0.5 * pixelW) - 33 * (pixelW * pixelGrid * 0.50)";
            y = "((getResolution select 3) * 0.5 * pixelH) - 55.4 * (pixelH * pixelGrid * 0.50)";
            w = "120 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";  
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
