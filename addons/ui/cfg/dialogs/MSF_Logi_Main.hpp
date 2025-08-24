class MSF_LogiMain
{
	idd = 6220;
	
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
                items[] = {};                
                class Default;
                class Separator;
            };
        };
        class MainGroup : RscControlsGroup
        {
            idc = 102;
            
            x = STR(CENTER_X - 100.2 * GRID_W);
            y = STR(CENTER_Y - 56.4 * GRID_H);
            w = STR(200.2 * GRID_W);
            h = STR(111.1 * GRID_H);

            class Controls
            {
                class InfoGroup : RscControlsGroup
                {
                    idc = 103;
                    x = STR(2 * GRID_W);
                    y = STR(10 * GRID_H);
                    w = STR(75 * GRID_W);
                    h = STR(101 * GRID_H);
                    
                    class Controls
                    {
                        class logipoints_bg: RscText
                        {
                            idc = 1222;

                            text = "";
                            colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                            x = "0";
                            y = "0";
                            w = STR(70 * GRID_W);
                            h = STR(12 * GRID_H);
                        };
                        class LogiPoints : RscStructuredText
                        {
                            idc = 1202;

                            text = "Available Logistics 0pts";                            
                            x = "0";
                            y = STR(3 * GRID_H);
                            w = STR(70 * GRID_W);
                            h = STR(7 * GRID_H);
                            shadow = 1;
                            class Attributes
                            {
                                font = "PuristaMedium";
                                align = "center";
                                size = 1.1;
                                color = "#FFBF00";
                                shadow = 1;
                            };
                        };
                        class supplychain_bg: RscText
                        {
                            idc = 1223;

                            text = "";
                            colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                            x = "0";
                            y = STR(14 * GRID_H);
                            w = STR(70 * GRID_W);
                            h = STR(12 * GRID_H);
                        };
                        class SupplyChain : RscStructuredText
                        {
                            idc = 1203;

                            text = "Supply Chain <t font='PuristaBold'>Not Enabled</t>";                            
                            x = "0";
                            y = STR(17 * GRID_H);
                            w = STR(70 * GRID_W);
                            h = STR(7 * GRID_H);
                            shadow = 1;
                            class Attributes
                            {
                                font = "PuristaMedium";
                                align = "center";
                                size = 1.1;
                                color = "#FFBF00";
                                shadow = 1;
                            };
                        };

                    };
                };
                class Tablet : RscPicture
                {
                    idc = 901;

                    text = "z\msf\addons\ui\data\ui\yodelos.paa";
                    x = STR(115 * GRID_W);
                    y = STR(6 * GRID_H);
                    w = STR(75 * GRID_W);
                    h = STR(20 * GRID_H);
                };
                class NameDisp : RscStructuredText
                {
                    idc = 1200;

                    text = "Welcome, Player!";                    
                    x = STR(120 * GRID_W);
                    y = STR(25 * GRID_H);
                    w = STR(80 * GRID_W);
                    h = STR(8 * GRID_H);
                    shadow = 0;
                    class Attributes
                    {                        
                        align = "left";
                        size = 1.5;                        
                        shadow = 0;
                    };
                };
            };
        };
        #include "\z\msf\addons\ui\cfg\dialogs\assets\StatusBar.inc"
    };
};
