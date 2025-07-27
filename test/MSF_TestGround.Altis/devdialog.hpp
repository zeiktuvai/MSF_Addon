import RscObject;
import RscText;
import RscFrame;
import RscLine;
import RscProgress;
import RscPicture;
import RscPictureKeepAspect;
import RscVideo;
import RscHTML;
import RscButton;
import RscShortcutButton;
import RscEdit;
import RscCombo;
import RscListBox;
import RscListNBox;
import RscXListBox;
import RscTree;
import RscSlider;
import RscXSliderH;
import RscActiveText;
import RscActivePicture;
import RscActivePictureKeepAspect;
import RscStructuredText;
import RscToolbox;
import RscControlsGroup;
import RscControlsGroupNoScrollbars;
import RscControlsGroupNoHScrollbars;
import RscControlsGroupNoVScrollbars;
import RscButtonTextOnly;
import RscButtonMenu;
import RscButtonMenuOK;
import RscButtonMenuCancel;
import RscButtonMenuSteam;
import RscMapControl;
import RscMapControlEmpty;
import RscCheckBox;
import IGUIBack;
import ctrlListNBox;
import ctrlMenuStrip;

#define GRID_H (pixelH * pixelGrid * 0.50)
#define GRID_W (pixelW * pixelGrid * 0.50)
#define CENTER_X ((getResolution select 2) * 0.5 * pixelW)
#define CENTER_Y ((getResolution select 3) * 0.5 * pixelH)
#define STR(VAR) #VAR

class MSFdevdialog
{
	idd = 6218;
	
    class ControlsBackground
    {
        #include "\z\msf\addons\ui\cfg\dialogs\assets\MSFTablet.inc"
    };
    class Controls
    {   
        #include "\z\msf\addons\ui\cfg\dialogs\assets\Header.inc"

 class MainGroup : RscControlsGroup
        {
            idc = 102;
            
            x = STR(CENTER_X - 97.2 * GRID_W);
            y = STR(CENTER_Y - 53.4 * GRID_H);
            w = STR(194.2 * GRID_W);
            h = STR(107.1 * GRID_H);
            class Controls
            {
                
                class list_item: RscText
                {
                    idc = 1002;

                    text = "Item";
                    colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    x = 0;
                    y = 0;
                    w = STR(100 * GRID_W);
                    h = STR(5 * GRID_H);
                };
                class list_cost: RscText
                {
                    idc = 1003;

                    text = "Cost";                    
                    x = STR(88 * GRID_W);
                    y = 0;
                    w = STR(10 * GRID_W);
                    h = STR(5 * GRID_H);
                };
                class detail_bg: RscText
                {
                    idc = 1202;

                    text = "";
                    colorBackground[] = {0,0,0,0.3};
                    x = 0;
                    y = STR(5 * GRID_H);
                    w = STR(100 * GRID_W);
                    h = STR(95 * GRID_H);
                };
                class MSF_supply_dialog_list: ctrlListNBox
                {
                    idc = 1500;

                    onLBSelChanged = "params ['_control', '_lbCurSel', '_lbSelection']; [_control, _lbCurSel, _lbSelection] call MSF_UI_fnc_OnSupportSelChanged;";
                    disableOverflow = 1;
                    rowHeight = 0.05;
                    colorSelectBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    x = 0;
                    y = STR(6 * GRID_H);
                    w = STR(99.8 * GRID_W);
                    h = STR(92 * GRID_H);
                };
                class PointsDisp : RscStructuredText
                {
                    idc = 1203;

                    text = "Remaining Logistics:<br/> 0pts";
                    colorBackground[] = {1,0.75,0,0.3};                            
                    x = STR(105.2 * GRID_W);
                    y = STR(0.1 * GRID_H);
                    w = STR(88.7 * GRID_W);
                    h = STR(10.5 * GRID_H);
                    shadow = 0;
                    class Attributes
                    {
                        font = "PuristaBold";
                        align = "center";
                        size = 0.9;
                        shadow = 1;
                    };
                };
                class PointsFrame : RscFrame
                {
                    idc = -1;
                    colorText[] = {0,0,0,1};                            
                    x = STR(105 * GRID_W);
                    y = 0;
                    w = STR(89.1 * GRID_W);
                    h = STR(10.8 * GRID_H);
                };
                class DetailGroup : RscControlsGroup
                {
                    idc = 104;
                    x = STR(105 * GRID_W);
                    y = STR(10.7 * GRID_H);
                    w = STR(89* GRID_W);
                    h = STR(94.4 * GRID_H);

                    class Controls
                    {
                        class detail_title: RscStructuredText
                        {
                            idc = 1005;

                            text = "";
                            colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                            x = STR(0.1 * GRID_W);
                            y = STR(0.1 * GRID_H);
                            w = STR(88.7 * GRID_W);
                            h = STR(7 * GRID_H);
                            class Attributes
                            {
                                size = 1.2;
                                align = "center";
                            };
                        };
                        class detail_text_bg: RscText
                        {
                            idc = 1205;

                            text = "";
                            colorBackground[] = {0,0,0,0.3};
                            x = STR(0.1 * GRID_W);
                            y = STR(7 * GRID_H);
                            w = STR(88.7 * GRID_W);
                            h = STR(58 * GRID_H);
                        };
                        class detail_text: RscStructuredText
                        {
                            idc = 1004;

                            text = "";
                            x = STR(0.1 * GRID_W);
                            y = STR(8 * GRID_H);
                            w = STR(88.8 * GRID_W);
                            h = STR(57 * GRID_H);                            
                            class Attributes
                            {
                                size = 0.8;
                            };
                        };
                        class StatGroup : RscControlsGroup
                        {
                            idc = 105;
                            x = STR(0.1 * GRID_W);
                            y = STR(65 * GRID_H);
                            w = STR(88.8 * GRID_W);
                            h = STR(14 * GRID_H);

                            class Controls
                            {
                                class stat_bgs: RscText
                                {
                                    idc = 1204;

                                    text = "";
                                    colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                                    x = 0;
                                    y = 0;
                                    w = STR(88.8 * GRID_W);
                                    h = STR(14 * GRID_H);
                                };
                                class stat_para: RscCheckBox
                                {
                                    idc = 1800;
                                    x = STR(1 * GRID_W);
                                    y = STR(1 * GRID_H);
                                    w = STR(5 * GRID_W);
                                    h = STR(5 * GRID_H);
                                };
                                class para_text: RscText
                                {
                                    idc = 1006;

                                    text = "Paradrop";                    
                                    x = STR(6 * GRID_W);
                                    y = STR(1 * GRID_H);
                                    w = STR(20 * GRID_W);
                                    h = STR(5 * GRID_H);
                                };
                            };
                        };
                        class SubmitButton: RscShortcutButton
                        {
                            idc = 1600;
                            onButtonClick = "closeDialog 0; [lnbData [1500, [lnbCurSelRow 1500, 0]]] call MSF_UI_fnc_DisplayLogiMap;";
                            colorBackgroundFocused[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                            text = "Select Drop Zone";
                            x = STR(0.1 * GRID_W);
                            y = STR(80.5 * GRID_H);
                            w = STR(88.6 * GRID_W);
                            h = STR(9 * GRID_H);
                            colorText[] = {1,1,1,1};
                            colorBackground[] = {1,0.74,0,1};
                            class Attributes
                            {
                                size = 1.3;
                                align = "center";                        
                            };
                        };
                    };
                };
            };
        };


        #include "\z\msf\addons\ui\cfg\dialogs\assets\StatusBar.inc"
    };
};
