class MSF_Hud_LogiControls
{
    idd = 6218;
    fadein = 0;
    fadeout = 0;
    duration = 1e+011;
    onLoad = "";
    onUnLoad = "";
    class Controls
    {
        class IGUIBack_2200: IGUIBack
        {
            idc = 2200;
            x = "0.457791 * safezoneW + safezoneX";
            y = "0.775 * safezoneH + safezoneY";
            w = "0.0844186 * safezoneW";
            h = "0.022 * safezoneH";
        };
        class RscPicture_1200: RscPicture
        {
            idc = 1200;
            text = "#(argb,8,8,3)color(0.412,0.412,0.412,0.8)";
            x = "0.457791 * safezoneW + safezoneX";
            y = "0.797 * safezoneH + safezoneY";
            w = "0.0844186 * safezoneW";
            h = "0.044 * safezoneH";
        };
        class RscFrame_1800: RscFrame
        {
            idc = 1800;
            x = "0.457791 * safezoneW + safezoneX";
            y = "0.775 * safezoneH + safezoneY";
            w = "0.0844186 * safezoneW";
            h = "0.066 * safezoneH";
        };
        class RscText_1000: RscText
        {
            idc = 1000;
            text = "Space: Place Drop marker";
            x = "0.457791 * safezoneW + safezoneX";
            y = "0.808 * safezoneH + safezoneY";
            w = "0.072907 * safezoneW";
            h = "0.022 * safezoneH";
        };
        class RscText_1001: RscText
        {
            idc = 1001;
            text = "Logistics UI Controls";
            x = "0.469302 * safezoneW + safezoneX";
            y = "0.775 * safezoneH + safezoneY";
            w = "0.0613954 * safezoneW";
            h = "0.022 * safezoneH";
        };
    };
};
