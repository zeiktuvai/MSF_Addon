class Tablet : RscPicture
{
    idc = 901;

    text = "z\msf\addons\ui\data\ui\MSFtablet.paa";
    x = "((getResolution select 2) * 0.5 * pixelW) - 112.8 * (pixelW * pixelGrid * 0.50)";
    y = "((getResolution select 3) * 0.5 * pixelH) - 112 * (pixelH * pixelGrid * 0.50)";
    w = "225.5 * (pixelW * pixelGrid * 0.50)";
    h = "225 * (pixelH * pixelGrid * 0.50)";
};
class BGGroup : RscControlsGroup
{
    idc =100;
    
    x = "((getResolution select 2) * 0.5 * pixelW) - 100.2 * (pixelW * pixelGrid * 0.50)";
    y = "((getResolution select 3) * 0.5 * pixelH) - 66.5 * (pixelH * pixelGrid * 0.50)";
    w = "200.2 * (pixelW * pixelGrid * 0.50)";
    h = "121.1 * (pixelH * pixelGrid * 0.50)";
    class Controls
    {
        class msf_diag_bg: RscText
        {
            idc = 1200;

            text = "";
            colorBackground[] = {0.3,0.3,0.3,0.95};
            x = "0";
            y = "0";
            w = "200.2 * (pixelW * pixelGrid * 0.50)";
            h = "121.1 * (pixelH * pixelGrid * 0.50)";
        };
        class IGUIBack_2200: IGUIBack
        {
            idc = 2200;

            x = "0";
            y = "0";
            w = "200.2 * (pixelW * pixelGrid * 0.50)";
            h = "5.1 * (pixelH * pixelGrid * 0.50)";
        }; 
    };
};