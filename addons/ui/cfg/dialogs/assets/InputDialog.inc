class InputGroup : RscControlsGroup
{
    idc = 112;
    
    x = "((getResolution select 2) * 0.5 * pixelW) - 100.2 * (pixelW * pixelGrid * 0.50)";
    y = "((getResolution select 3) * 0.5 * pixelH) - 61.4 * (pixelH * pixelGrid * 0.50)";
    w = "200.2 * (pixelW * pixelGrid * 0.50)";
    h = "116.1 * (pixelH * pixelGrid * 0.50)";
    
    class Controls
    {
        class input_bg: RscText
        {
            idc = 12000;

            text = "";
            colorBackground[] = {0,0,0,0.5};
            x = "0";
            y = "0";
            w = "200.2 * (pixelW * pixelGrid * 0.50)";
            h = "116.1 * (pixelH * pixelGrid * 0.50)";
        };
        class InputDialogGroup : RscControlsGroup
        {
            idc = 113;
            x = "50.1 * (pixelW * pixelGrid * 0.50)";
            y = "43 * (pixelH * pixelGrid * 0.50)";
            w = "100 * (pixelW * pixelGrid * 0.50)";
            h = "25 * (pixelH * pixelGrid * 0.50)";

            class Controls
            {
                class inputDialog_bg: RscText
                {
                    idc = 12001;

                    text = "";
                    colorBackground[] = {0.3,0.3,0.3,0.95};
                    x = "0";
                    y = "0";
                    w = "100 * (pixelW * pixelGrid * 0.50)";
                    h = "25 * (pixelH * pixelGrid * 0.50)";
                };
                class IGUIBack_2200: IGUIBack
                {
                    idc = 22001;

                    x = "0";
                    y = "0";
                    w = "100 * (pixelW * pixelGrid * 0.50)";
                    h = "5 * (pixelH * pixelGrid * 0.50)";
                };
                class Title: RscText
                {
                    idc = 10011;

                    text = "Input Dialog";
                    x = "0";
                    y = "0";
                };
                class InputBox: RscEdit
                {
                    idc = 12011;

                    onEditChanged = "params ['_control', '_newText']; [_control, _newText] call MSF_UI_fnc_OnInputEditChanged;";
                    x = "4 * (pixelW * pixelGrid * 0.50)";
                    y = "8 * (pixelH * pixelGrid * 0.50)";
                    w = "93 * (pixelW * pixelGrid * 0.50)";
                    h = "8 * (pixelH * pixelGrid * 0.50)";
                };
                class Ok: RscButtonMenu
                {
                    idc = 16001;
                    
                    colorBackgroundFocused[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    text = "Ok";
                    x = "73 * (pixelW * pixelGrid * 0.50)";
                    y = "17 * (pixelH * pixelGrid * 0.50)";
                    w = "24 * (pixelW * pixelGrid * 0.50)";
                    h = "6 * (pixelH * pixelGrid * 0.50)";
                    colorText[] = {1,1,1,1};
                    colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                };
                class Cancel: RscButtonMenu
                {
                    idc = 16002;

                    text = "Cancel";                    
                    x = "46 * (pixelW * pixelGrid * 0.50)";
                    y = "17 * (pixelH * pixelGrid * 0.50)";
                    w = "24 * (pixelW * pixelGrid * 0.50)";
                    h = "6 * (pixelH * pixelGrid * 0.50)";
                    colorText[] = {1,1,1,1};
                    colorBackground[] = {0,0,0,0.8};
                };
            };
        };
    };
};