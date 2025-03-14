class UAVDialog
{
    idd = 6216;
    class ControlsBackground
    {
        class RscFrame_1800: RscFrame
        {
            idc = 1800;

            x = "0.423256 * safezoneW + safezoneX";
            y = "0.313 * safezoneH + safezoneY";
            w = "0.145814 * safezoneW";
            h = "0.231 * safezoneH";
            colorText[] = {0,0,0,1};
            colorBackground[] = {0.412,0.412,0.412,1};
            colorActive[] = {0.412,0.412,0.412,1};
        };
        class msf_uav_diag_bg: RscPicture
        {
            idc = 1200;

            text = "#(argb,8,8,3)color(0.412,0.412,0.412,0.8)";
            x = "0.423256 * safezoneW + safezoneX";
            y = "0.335 * safezoneH + safezoneY";
            w = "0.145814 * safezoneW";
            h = "0.209 * safezoneH";
        };
    };
    class Controls
    {
        class IGUIBack_2200: IGUIBack
        {
            idc = 2200;

            x = "0.423256 * safezoneW + safezoneX";
            y = "0.313 * safezoneH + safezoneY";
            w = "0.145814 * safezoneW";
            h = "0.022 * safezoneH";
        };
        class MSF_uav_dialog_ok: RscButtonMenu
        {
            idc = 1600;
            action = "private _sel = lbCurSel 1500; [player, [lbData [1500, _sel], lbText [1500, _sel]], side player] call MSF_fnc_SpawnUAV; closeDialog 0;";
            colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
            colorBackground2[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
            colorBackgroundFocused[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
            text = "Deploy"; //--- ToDo: Localize;
            x = "0.503837 * safezoneW + safezoneX";
            y = "0.511 * safezoneH + safezoneY";
            w = "0.0460465 * safezoneW";
            h = "0.022 * safezoneH";
        };
        class RscButtonMenuCancel_2700: RscButtonMenuCancel
        {
            action = "closeDialog 0";

            x = "0.442442 * safezoneW + safezoneX";
            y = "0.511 * safezoneH + safezoneY";
            w = "0.0460465 * safezoneW";
            h = "0.022 * safezoneH";
        };
        class MSF_uav_dialog_list: RscListBox
        {
            idc = 1500;

            x = "0.434767 * safezoneW + safezoneX";
            y = "0.357 * safezoneH + safezoneY";
            w = "0.122791 * safezoneW";
            h = "0.132 * safezoneH";
        };
        class RscText_1001: RscText
        {
            idc = 1001;

            text = "Deploy UAV"; //--- ToDo: Localize;
            x = "0.423256 * safezoneW + safezoneX";
            y = "0.313 * safezoneH + safezoneY";
            w = "0.0345349 * safezoneW";
            h = "0.022 * safezoneH";
        };
    };
};
