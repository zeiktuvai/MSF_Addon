class HeaderGroup : RscControlsGroup
{
    idc = 111;
    
    x = "((getResolution select 2) * 0.5 * pixelW) - 100.2 * (pixelW * pixelGrid * 0.50)";
    y = "((getResolution select 3) * 0.5 * pixelH) - 66.5 * (pixelH * pixelGrid * 0.50)";
    w = "200.2 * (pixelW * pixelGrid * 0.50)";
    h = "5 * (pixelH * pixelGrid * 0.50)";
    class Controls
    {
        class Title: RscText
        {
            idc = 1001;

            text = "Supply Depot"; //--- ToDo: Localize;
            x = "0";
            y = "0";
        };
        class RscButtonMenuCancel: RscButtonMenuSteam
        {
            idc = 601;

            onButtonClick = "closeDialog 0;";
            x = "195 * (pixelW * pixelGrid * 0.50)";                    
            y = "0";
            w = "5 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
            text = "";
            textureNoShortcut = "\a3\3den\data\controlsgroups\tutorial\close_ca.paa";
            colorBackground[] = {1,1,1,0};
            colorBackground2[] = {0,0,0,0.4};
            colorBackgroundActive[] = {1,1,1,0};
            colorBackgroundDisabled[] = { 1, 1, 1, 0 };
            colorBackgroundFocused[] = {1,1,1,0};
            colorShadow[] = { 1, 1, 1, 0 };
        };
    };
};