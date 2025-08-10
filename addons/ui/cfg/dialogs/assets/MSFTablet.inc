class Tablet : RscPicture
{
    idc = 901;

    text = "z\msf\addons\ui\data\ui\MSFtablet.paa";
    x = STR(CENTER_X - 112.8 * GRID_W);
    y = STR(CENTER_Y - 112 * GRID_H);
    w = STR(225.5 * GRID_W);
    h = STR(225 * GRID_H);
};
class BGGroup : RscControlsGroup
{
    idc =110;
    
    x = STR(CENTER_X - 100.2 * GRID_W);
    y = STR(CENTER_Y - 66.5 * GRID_H);
    w = STR(200.2 * GRID_W);
    h = STR(121.1 * GRID_H);
    class Controls
    {
        class msf_diag_bg: RscText
        {
            idc = 12222;

            text = "";
            colorBackground[] = {0.3,0.3,0.3,0.95};
            x = "0";
            y = "0";
            w = STR(200.2 * GRID_W);
            h = STR(121.1 * GRID_H);
        };
        class IGUIBack_2200: IGUIBack
        {
            idc = 22222;

            x = "0";
            y = "0";
            w = STR(200.2 * GRID_W);
            h = STR(5.1 * GRID_H);
        }; 
    };
};
