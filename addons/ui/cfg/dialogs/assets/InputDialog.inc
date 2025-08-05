class InputGroup : RscControlsGroup
{
    idc = 112;
    
    x = STR(CENTER_X - 100.2 * GRID_W);
    y = STR(CENTER_Y - 61.4 * GRID_H);
    w = STR(200.2 * GRID_W);
    h = STR(116.1 * GRID_H);
    
    class Controls
    {
        class input_bg: RscText
        {
            idc = 12000;

            text = "";
            colorBackground[] = {0,0,0,0.5};
            x = "0";
            y = "0";
            w = STR(200.2 * GRID_W);
            h = STR(116.1 * GRID_H);
        };
        class InputDialogGroup : RscControlsGroup
        {
            idc = 113;
            x = STR(50.1 * GRID_W);
            y = STR(43 * GRID_H);
            w = STR(100 * GRID_W);
            h = STR(25 * GRID_H);

            class Controls
            {
                class inputDialog_bg: RscText
                {
                    idc = 12001;

                    text = "";
                    colorBackground[] = {0.3,0.3,0.3,0.95};
                    x = "0";
                    y = "0";
                    w = STR(100 * GRID_W);
                    h = STR(25 * GRID_H);
                };
                class IGUIBack_2200: IGUIBack
                {
                    idc = 22001;

                    x = "0";
                    y = "0";
                    w = STR(100 * GRID_W);
                    h = STR(5 * GRID_H);
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
                    x = STR(4 * GRID_W);
                    y = STR(8 * GRID_H);
                    w = STR(93 * GRID_W);
                    h = STR(8 * GRID_H);
                };
                class Ok: RscButtonMenu
                {
                    idc = 16001;
                    
                    colorBackgroundFocused[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    text = "Ok";
                    x = STR(73 * GRID_W);
                    y = STR(17 * GRID_H);
                    w = STR(24 * GRID_W);
                    h = STR(6 * GRID_H);
                    colorText[] = {1,1,1,1};
                    colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                };
                class Cancel: RscButtonMenu
                {
                    idc = 16002;

                    text = "Cancel";                    
                    x = STR(46 * GRID_W);
                    y = STR(17 * GRID_H);
                    w = STR(24 * GRID_W);
                    h = STR(6 * GRID_H);
                    colorText[] = {1,1,1,1};
                    colorBackground[] = {0,0,0,0.8};
                };
            };
        };
    };
};
