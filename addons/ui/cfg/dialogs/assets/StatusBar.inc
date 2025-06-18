class StatusbarGroup : RscControlsGroup
{
    idc = 103;
    
    x = "((getResolution select 2) * 0.5 * pixelW) - 61.2 * (pixelW * pixelGrid * 0.50)";
    y = "((getResolution select 3) * 0.5 * pixelH) + 55 * (pixelH * pixelGrid * 0.50)";
    w = "161.2 * (pixelW * pixelGrid * 0.50)";
    h = "8 * (pixelH * pixelGrid * 0.50)";
    class Controls
    {
        class LogiP: RscText
        {
            idc = 1034;

            sizeEx = 0.03;
            colorBackground[] = {0,0,0,0.8};
            shadow = 2;
            text = "Logi: 0pts";
            x = "0";
            y = "0.5 * (pixelH * pixelGrid * 0.50)";
            w = "15 * (pixelW * pixelGrid * 0.50)";
            h = "7 * (pixelH * pixelGrid * 0.50)";
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