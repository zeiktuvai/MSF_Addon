class HeaderGroup : RscControlsGroup
{
    idc = 111;
    
    x = STR(CENTER_X - 100.2 * GRID_W);
    y = STR(CENTER_Y - 66.5 * GRID_H);
    w = STR(200.2 * GRID_W);
    h = STR(5 * GRID_H);
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
            x = STR(195 * GRID_W);                    
            y = "0";
            w = STR(5 * GRID_W);
            h = STR(5 * GRID_H);
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