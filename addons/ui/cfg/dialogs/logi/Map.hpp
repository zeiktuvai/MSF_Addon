class MSF_LogiMap
{
	idd = 6219;
	
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

        class InfoDisp : RscStructuredText
        {
            idc = 1201;

            text = "Select the location to deploy your logistics request.";
            colorBackground[] = {0,0,0,0.7};
            x = STR(CENTER_X - 60 * GRID_W);
            y = STR(CENTER_Y - 59.4 * GRID_H);
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
        class MainGroup : RscControlsGroup
        {
            idc = 102;
            x = STR(CENTER_X - 98.2 * GRID_W);
            y = STR(CENTER_Y + 41 * GRID_H);
            w = STR(197 * GRID_W);
            h = STR(15 * GRID_H);
            
            class Controls
            {
                class Frame : RscFrame
                {
                    idc = -1;
                    colorText[] = {0,0,0,1};                            
                    x = 0;
                    y = 0;
                    w = STR(196.1 * GRID_W);
                    h = STR(12.2 * GRID_H);
                };
                class bg : RscText
                {
                    idc = 1451;
                    text = "";
                    //colorBackground[] = {0,0,0,0.8};
                    colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",0.9};
                    x = STR(0.1 * GRID_W);
                    y = STR(0.1 * GRID_H);
                    w = STR(195.8 * GRID_W);
                    h = STR(12 * GRID_H);    
                };
                class Icon : RscPicture
                {
                    idc = 1901;

                    text = "";
                    x = STR(3 * GRID_W);
                    y = STR(1 * GRID_H);
                    w = STR(20 * GRID_W);
                    h = STR(10 * GRID_H);
                };
                class Name : RscStructuredText
                {
                    idc = 1200;

                    text = "";
                    x = STR(27 * GRID_W);
                    y = STR(2.5 * GRID_H);
                    w = STR(50 * GRID_W);
                    h = STR(10 * GRID_H);
                    shadow = 1;
                    class Attributes
                    {
                        font = "PuristaBold";
                        align = "left";
                        size = 1.3;                        
                        shadow = 1;
                    };
                };
                class Cost : RscStructuredText
                {
                    idc = 1202;

                    text = "";
                    x = STR(115 * GRID_W);
                    y = STR(3 * GRID_H);
                    w = STR(20 * GRID_W);
                    h = STR(10 * GRID_H);
                    shadow = 1;
                    class Attributes
                    {
                        font = "PuristaBold";
                        align = "left";
                        size = 1;                        
                        shadow = 1;
                    };
                };
                class type : RscText
                {
                    idc = 1203;

                    text = "";
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                };
                class SubmitButton: RscShortcutButton
                {
                    idc = 1601;
                    onButtonClick = "[ctrlText 1203, player] call MSF_Logi_fnc_SubmitLogiRequest; closeDialog 0;";
                    colorBackgroundFocused[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    text = "    Submit Request";
                    x = STR(140 * GRID_W);
                    y = STR(1.5 * GRID_H);
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
       
        #include "\z\msf\addons\ui\cfg\dialogs\assets\StatusBar.inc"
    };
};

