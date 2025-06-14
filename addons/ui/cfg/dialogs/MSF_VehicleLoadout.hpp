class MSF_VicLoadout
{
	idd = 6218;
	class ControlsBackground {
        class RscFrame_1800: RscFrame
        {
            idc = 1800;

            x = "((getResolution select 2) * 0.5 * pixelW) - 100 * (pixelW * pixelGrid * 0.50)";
            y = "((getResolution select 3) * 0.5 * pixelH) - 50 * (pixelH * pixelGrid * 0.50)";
            w = "200 * (pixelW * pixelGrid * 0.50)";
            h = "100 * (pixelH * pixelGrid * 0.50)";
            colorText[] = {0,0,0,1};
            colorBackground[] = {0.412,0.412,0.412,1};
            colorActive[] = {0.412,0.412,0.412,1};
        };
        class msf_supply_diag_bg: RscText
        {
            idc = 1200;

            text = "";
            colorBackground[] = {0.3,0.3,0.3,0.95};
            x = "((getResolution select 2) * 0.5 * pixelW) - 100 * (pixelW * pixelGrid * 0.50)";
            y = "((getResolution select 3) * 0.5 * pixelH) - 50 * (pixelH * pixelGrid * 0.50)";
            w = "200 * (pixelW * pixelGrid * 0.50)";
            h = "100 * (pixelH * pixelGrid * 0.50)";
        };
        class IGUIBack_2200: IGUIBack
        {
            idc = 2200;

            x = "((getResolution select 2) * 0.5 * pixelW) - 100 * (pixelW * pixelGrid * 0.50)";
            y = "((getResolution select 3) * 0.5 * pixelH) - 50 * (pixelH * pixelGrid * 0.50)";
            w = "200 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        }; 
    };
    class Controls
    {
        class Title: RscText
        {
            idc = 1001;

            text = "Vehicle Loadouts"; //--- ToDo: Localize;
            x = "((getResolution select 2) * 0.5 * pixelW) - 100 * (pixelW * pixelGrid * 0.50)";
            y = "((getResolution select 3) * 0.5 * pixelH) - 50 * (pixelH * pixelGrid * 0.50)";
        };
        class LoadoutGroup : RscControlsGroup
        {
            idc = 113;
            
            x = "((getResolution select 2) * 0.5 * pixelW) - 95 * (pixelW * pixelGrid * 0.50)";
            y = "((getResolution select 3) * 0.5 * pixelH) - 41.5 * (pixelH * pixelGrid * 0.50)";
            w = "(55 * (pixelW * pixelGrid * 0.50))";
            h = "(87 * (pixelH * pixelGrid * 0.50))";
            class Controls
            {
                class loadout_bg: RscText
                {
                    idc = 1201;

                    text = "";
                    colorBackground[] = {0,0,0,0.3};
                    x = "0";
                    y = "0";
                    w = "(55 * (pixelW * pixelGrid * 0.50))";
                    h = "(87 * (pixelH * pixelGrid * 0.50))";
                };
                class loadout_list: RscTree
                {
                    idc = 1500;
                    
                    colorLines[] = {1,1,1,1};
                    colorSelectBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    x = "0";
                    y = "0";
                    w = "(54.5 * (pixelW * pixelGrid * 0.50))";
                    h = "(87 * (pixelH * pixelGrid * 0.50))";
                };
            };
        };
        class ButtonGroup : RscControlsGroup
        {
            idc = 112;
            
            x = "((getResolution select 2) * 0.5 * pixelW) - 35 * (pixelW * pixelGrid * 0.50)";
            y = "((getResolution select 3) * 0.5 * pixelH) - 41.5 * (pixelH * pixelGrid * 0.50)";
            w = "24 * (pixelW * pixelGrid * 0.50)";
            h = "87 * (pixelH * pixelGrid * 0.50)";
            class Controls
            {
                class Create: RscButtonMenu
                {
                    idc = 1601;
                    
                    //action = "private _sel = lbCurSel 1500; [player, lbData [1500, _sel]] call MSF_Logi_fnc_GetLogiSelection; closeDialog 0;";
                    colorBackgroundFocused[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    text = "Create"; //--- ToDo: Localize;
                    x = "0";
                    y = "0";
                    w = "24 * (pixelW * pixelGrid * 0.50)";
                    h = "6 * (pixelH * pixelGrid * 0.50)";
                    colorText[] = {1,1,1,1};
                    colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                };
                class Apply: RscButtonMenu
                {
                    idc = 1602;
                    
                    //action = "private _sel = lbCurSel 1500; [player, lbData [1500, _sel]] call MSF_Logi_fnc_GetLogiSelection; closeDialog 0;";
                    colorBackgroundFocused[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    text = "Apply"; //--- ToDo: Localize;
                    x = "0"; 
                    y = "8 * (pixelH * pixelGrid * 0.50)";
                    w = "24 * (pixelW * pixelGrid * 0.50)";
                    h = "6 * (pixelH * pixelGrid * 0.50)";
                    colorText[] = {1,1,1,1};
                    colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                };
                class Delete: RscButtonMenu
                {
                    idc = 1603;
                    
                    //action = "private _sel = lbCurSel 1500; [player, lbData [1500, _sel]] call MSF_Logi_fnc_GetLogiSelection; closeDialog 0;";
                    colorBackgroundFocused[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    text = "Delete"; //--- ToDo: Localize;
                    x = "0";
                    y = "16 * (pixelH * pixelGrid * 0.50)";
                    w = "24 * (pixelW * pixelGrid * 0.50)";
                    h = "6 * (pixelH * pixelGrid * 0.50)";
                    colorText[] = {1,1,1,1};
                    colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                };
                class RscButtonMenuCancel: RscButtonMenuCancel
                {
                    action = "closeDialog 0;";
                    x = "0";
                    y = "81 * (pixelH * pixelGrid * 0.50)";
                    w = "24 * (pixelW * pixelGrid * 0.50)";
                    h = "6 * (pixelH * pixelGrid * 0.50)";
                    colorText[] = {1,1,1,1};
                    colorBackground[] = {0,0,0,0.8};
                };
            };
        };
        class DetailGroup : RscControlsGroup
        {
            idc = 111;
            x = "((getResolution select 2) * 0.5 * pixelW) - 5 * (pixelW * pixelGrid * 0.50)";
            y = "((getResolution select 3) * 0.5 * pixelH) - 41.5 * (pixelH * pixelGrid * 0.50)";
            w = "(100 * (pixelW * pixelGrid * 0.50))";
            h = "(87 * (pixelH * pixelGrid * 0.50))";
            class Controls
            {
                class detail_bg: RscText
                {
                    idc = 1202;

                    text = "";
                    colorBackground[] = {0,0,0,0.3};
                    x = "0";
                    y = "5 * (pixelH * pixelGrid * 0.50)";
                    w = "(100 * (pixelW * pixelGrid * 0.50))";
                    h = "(82 * (pixelH * pixelGrid * 0.50))";
                };
                class detail_text: RscText
                {
                    idc = 1002;

                    text = "Contents";
                    colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    x = "0";
                    y = "0";
                    w = "(100 * (pixelW * pixelGrid * 0.50))";
                    h = "5 * (pixelH * pixelGrid * 0.50)";
                };
                class loadout_details: ctrlListNBox
                {
                    idc = 1501;           
                    
                    disableOverflow = 1;
                    rowHeight = 0.05;
                    colorSelectBackground[] = {0,0,0,0};
                    colorSelectBackground2[] = {0,0,0,0};
                    x = "0";
                    y = "5 * (pixelH * pixelGrid * 0.50)";
                    w = "(100 * (pixelW * pixelGrid * 0.50))";
                    h = "(82 * (pixelH * pixelGrid * 0.50))";
                };
            };
        };
    };
};