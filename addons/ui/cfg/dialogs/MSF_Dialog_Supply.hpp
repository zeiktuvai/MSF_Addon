class SupplyDialog
{
    idd = 6217;
    class ControlsBackground
    {
        class RscFrame_1800: RscFrame
        {
            idc = 1800;

            x = "0.392558 * safezoneW + safezoneX";
            y = "0.313 * safezoneH + safezoneY";
            w = "0.207209 * safezoneW";
            h = "0.231 * safezoneH";
            colorText[] = {0,0,0,1};
            colorBackground[] = {0.412,0.412,0.412,1};
            colorActive[] = {0.412,0.412,0.412,1};
        };
        class msf_supply_diag_bg: RscPicture
        {
            idc = 1200;

            text = "#(argb,8,8,3)color(0.412,0.412,0.412,0.8)";
            x = "0.392558 * safezoneW + safezoneX";
            y = "0.335 * safezoneH + safezoneY";
            w = "0.207209 * safezoneW";
            h = "0.209 * safezoneH";
        };
        class IGUIBack_2200: IGUIBack
        {
            idc = 2200;

            x = "0.392558 * safezoneW + safezoneX";
            y = "0.313 * safezoneH + safezoneY";
            w = "0.207209 * safezoneW";
            h = "0.022 * safezoneH";
        };
    };
    class Controls
    {
        class MSF_supply_dialog_ok: RscButtonMenu
        {
            idc = 1600;
            action = "private _sel = lbCurSel 1500; [player, lbData [1500, _sel]] call MSF_Logi_fnc_GetLogiSelection; closeDialog 0;";            
            //colorBackground2[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
            colorBackgroundFocused[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};

            text = "Retrieve"; //--- ToDo: Localize;
            x = "0.546046 * safezoneW + safezoneX";
            y = "0.511 * safezoneH + safezoneY";
            w = "0.0460465 * safezoneW";
            h = "0.022 * safezoneH";
            colorText[] = {1,1,1,1};
            colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
        };
        class RscButtonMenuCancel_2700: RscButtonMenuCancel
        {
            action = "closeDialog 0";

            x = "0.492326 * safezoneW + safezoneX";
            y = "0.511 * safezoneH + safezoneY";
            w = "0.0460465 * safezoneW";
            h = "0.022 * safezoneH";
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class MSF_supply_dialog_list: RscListBox
        {
            idc = 1500;

            x = "0.40407 * safezoneW + safezoneX";
            y = "0.357 * safezoneH + safezoneY";
            w = "0.184186 * safezoneW";
            h = "0.132 * safezoneH";
        };
        class RscText_1001: RscText
        {
            idc = 1001;

            text = "Logistics Depot"; //--- ToDo: Localize;
            x = "0.392558 * safezoneW + safezoneX";
            y = "0.313 * safezoneH + safezoneY";
            w = "0.141977 * safezoneW";
            h = "0.022 * safezoneH";
        };        
    };
};
