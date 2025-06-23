class StatusbarGroup : RscControlsGroup
{
    idc = 113;
    
    x = "((getResolution select 2) * 0.5 * pixelW) - 61.2 * (pixelW * pixelGrid * 0.50)";
    y = "((getResolution select 3) * 0.5 * pixelH) + 55 * (pixelH * pixelGrid * 0.50)";
    w = "161.2 * (pixelW * pixelGrid * 0.50)";
    h = "8 * (pixelH * pixelGrid * 0.50)";
    class Controls
    {
        class logip_bg: RscText
        {
            idc = 1231;

            text = "";
            colorBackground[] = {0,0,0,0.8};
            x = "0";
            y = "0.5 * (pixelH * pixelGrid * 0.50)";
            w = "15 * (pixelW * pixelGrid * 0.50)";
            h = "7 * (pixelH * pixelGrid * 0.50)";
        };
        class LogiP: RscStructuredText
        {
            idc = 1034;
                                
            text = "Logi points <br/> 0";
            x = "0";
            y = "0.7 * (pixelH * pixelGrid * 0.50)";
            w = "15 * (pixelW * pixelGrid * 0.50)";
            h = "7 * (pixelH * pixelGrid * 0.50)";
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
            x = "16 * (pixelW * pixelGrid * 0.50)";
            y = "0.5 * (pixelH * pixelGrid * 0.50)";
            w = "15 * (pixelW * pixelGrid * 0.50)";
            h = "7 * (pixelH * pixelGrid * 0.50)";
        };
        class IntelL: RscStructuredText
        {
            idc = 1035;
                                
            text = "Intel Level <br/> 1";
            x = "16 * (pixelW * pixelGrid * 0.50)";
            y = "0.7 * (pixelH * pixelGrid * 0.50)";
            w = "15 * (pixelW * pixelGrid * 0.50)";
            h = "7 * (pixelH * pixelGrid * 0.50)";
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
            x = "146 * (pixelW * pixelGrid * 0.50)";
            y = "3 * (pixelH * pixelGrid * 0.50)";
            w = "15 * (pixelW * pixelGrid * 0.50)";
        };
    };
};