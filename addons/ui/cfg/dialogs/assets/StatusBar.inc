class StatusbarGroup : RscControlsGroup
{
    idc = 113;
    
    x = STR(CENTER_X - 61.2 * GRID_W);
    y = STR(CENTER_Y + 55 * GRID_H);
    w = STR(161.2 * GRID_W);
    h = STR(8 * GRID_H);
    class Controls
    {
        class logip_bg: RscText
        {
            idc = 1231;

            text = "";
            colorBackground[] = {0,0,0,0.8};
            x = "0";
            y = STR(0.5 * GRID_H);
            w = STR(15 * GRID_W);
            h = STR(7 * GRID_H);
        };
        class LogiP: RscStructuredText
        {
            idc = 1034;
                                
            text = "Logi points <br/> 0";
            x = "0";
            y = STR(0.7 * GRID_H);
            w = STR(15 * GRID_W);
            h = STR(7 * GRID_H);
            class Attributes
            {
                align = "center";
                size = 0.6;
            };
        };
        class intel_bg: RscText
        {
            idc = 1232;

            text = "";
            colorBackground[] = {0,0,0,0.8};
            x = STR(16 * GRID_W);
            y = STR(0.5 * GRID_H);
            w = STR(15 * GRID_W);
            h = STR(7 * GRID_H);
        };
        class IntelL: RscStructuredText
        {
            idc = 1035;
                                
            text = "Intel Level <br/> 1";
            x = STR(16 * GRID_W);
            y = STR(0.7 * GRID_H);
            w = STR(15 * GRID_W);
            h = STR(7 * GRID_H);
            class Attributes
            {
                align = "center";
                size = 0.6;
            };
        };
        class MSFVer: RscText
        {
            idc = 1033;

            text = "v2.13.0";
            x = STR(146 * GRID_W);
            y = STR(3 * GRID_H);
            w = STR(15 * GRID_W);
        };
    };
};