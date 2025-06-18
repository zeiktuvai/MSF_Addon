class MSFInputDialog
{
	idd = 6219;
	class ControlsBackground {
       class RscFrame_1800: RscFrame
        {
            idc = 18001;

            x = "((getResolution select 2) * 0.5 * pixelW) - 50 * (pixelW * pixelGrid * 0.50)";
            y = "((getResolution select 3) * 0.5 * pixelH) - 15 * (pixelH * pixelGrid * 0.50)";
            w = "100 * (pixelW * pixelGrid * 0.50)";
            h = "25 * (pixelH * pixelGrid * 0.50)";
            colorText[] = {0,0,0,1};
            colorBackground[] = {0.412,0.412,0.412,1};
            colorActive[] = {0.412,0.412,0.412,1};
        };
        class msf_supply_diag_bg: RscText
        {
            idc = 12001;

            text = "";
            colorBackground[] = {0.3,0.3,0.3,0.95};
            x = "((getResolution select 2) * 0.5 * pixelW) - 50 * (pixelW * pixelGrid * 0.50)";
            y = "((getResolution select 3) * 0.5 * pixelH) - 15 * (pixelH * pixelGrid * 0.50)";
            w = "100 * (pixelW * pixelGrid * 0.50)";
            h = "25 * (pixelH * pixelGrid * 0.50)";
        };
        class IGUIBack_2200: IGUIBack
        {
            idc = 22001;

            x = "((getResolution select 2) * 0.5 * pixelW) - 50 * (pixelW * pixelGrid * 0.50)";
            y = "((getResolution select 3) * 0.5 * pixelH) - 15 * (pixelH * pixelGrid * 0.50)";
            w = "100 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        }; 
    };
    class Controls
    {
        class Title: RscText
        {
            idc = 10011;

            text = "Input Dialog"; //TODO: Localize
            x = "((getResolution select 2) * 0.5 * pixelW) - 50 * (pixelW * pixelGrid * 0.50)";
            y = "((getResolution select 3) * 0.5 * pixelH) - 15 * (pixelH * pixelGrid * 0.50)";
        };
        class InputBox: RscEdit
        {
            idc = 12011;

            x = "((getResolution select 2) * 0.5 * pixelW) - 45 * (pixelW * pixelGrid * 0.50)";
            y = "((getResolution select 3) * 0.5 * pixelH) - 7 * (pixelH * pixelGrid * 0.50)";
            w = "90 * (pixelW * pixelGrid * 0.50)";
            h = "8 * (pixelH * pixelGrid * 0.50)";
        };
        class Ok: RscButtonMenu
        {
            idc = 16001;
            
            action = "[(findDisplay 6219 displayCtrl 10011) getVariable 'Caller', ctrlText 12011] call MSF_UI_fnc_OnINputOkClicked; closeDialog 0;";
            colorBackgroundFocused[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
            text = "Ok"; //TODO: Localize;
            x = "((getResolution select 2) * 0.5 * pixelW) + 21 * (pixelW * pixelGrid * 0.50)";
            y = "((getResolution select 3) * 0.5 * pixelH) + 3 * (pixelH * pixelGrid * 0.50)";
            w = "24 * (pixelW * pixelGrid * 0.50)";
            h = "6 * (pixelH * pixelGrid * 0.50)";
            colorText[] = {1,1,1,1};
            colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
        };
        class RscButtonMenuCancel: RscButtonMenuCancel
        {
            action = "closeDialog 0;";
            x = "((getResolution select 2) * 0.5 * pixelW) - 5 * (pixelW * pixelGrid * 0.50)";
            y = "((getResolution select 3) * 0.5 * pixelH) + 3 * (pixelH * pixelGrid * 0.50)";
            w = "24 * (pixelW * pixelGrid * 0.50)";
            h = "6 * (pixelH * pixelGrid * 0.50)";
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
    };
};