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
	idd = 6222;
	
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
            
            x = STR(CENTER_X - 97 * GRID_W);
            y = STR(CENTER_Y - 57 * GRID_H);
            w = STR(150 * GRID_W);
            h = STR(108 * GRID_H);
            class Controls
            {
                class disp_title_bg : RscText
                {
                    idc = 1203;

                    text = "";
                    colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    x = 0;
                    y = 0;
                    w = STR(60 * GRID_W);
                    h = STR(5 * GRID_H);
                };
                class disp_title : RscStructuredText
                {
                    idc = 1001;

                    text = "Equipment Status";
                    colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    x = 0;
                    y = 0;
                    w = STR(60 * GRID_W);
                    h = STR(5 * GRID_H);
                    class Attributes
                    {
                        align = "center";
                    };
                };
                class disp_bg : RscText
                {
                    idc = 1202;

                    text = "";
                    colorBackground[] = {0,0,0,0.3};
                    x = 0;
                    y = STR(5 * GRID_H);
                    w = STR(60 * GRID_W);
                    h = STR(102 * GRID_H);
                };
                class Body_disp : RscPictureKeepAspect
                {
                    idc = 1301;

                    text = "CBRN_Suit.paa";                    
                    colorText[] = {1,1,1,1};
                    x = STR(5 * GRID_W);
                    y = STR(6 * GRID_H);
                    w = STR(50 * GRID_W);
                    h = STR(100 * GRID_H);
                };
                class Mask_disp : RscPictureKeepAspect
                {
                    idc = 1302;

                    text = "CBRN_Mask.paa";                    
                    colorText[] = {1,1,1,1};
                    x = STR(5 * GRID_W);
                    y = STR(6 * GRID_H);
                    w = STR(50 * GRID_W);
                    h = STR(100 * GRID_H);
                };

                class DetailGroup : RscControlsGroup
                {
                    idc = 103;
                    
                    x = (64 * GRID_W);
                    y = 0;
                    w = STR(60 * GRID_W);
                    h = STR(108 * GRID_H);
                    class Controls
                    {
                        class det_title_bg : RscText
                        {
                            idc = 1204;

                            text = "";
                            colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                            x = 0;
                            y = 0;
                            w = STR(60 * GRID_W);
                            h = STR(5 * GRID_H);
                        };
                        class det_title : RscStructuredText
                        {
                            idc = 1002;

                            text = "Details";
                            colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                            x = 0;
                            y = 0;
                            w = STR(60 * GRID_W);
                            h = STR(5 * GRID_H);
                            class Attributes
                            {
                                align = "center";
                            };
                        };
                        // class det_bg : RscText
                        // {
                        //     idc = 1202;

                        //     text = "";
                        //     colorBackground[] = {0,0,0,0.3};
                        //     x = 0;
                        //     y = STR(5 * GRID_H);
                        //     w = STR(60 * GRID_W);
                        //     h = STR(102 * GRID_H);
                        // };
                        class det_suit : RscText
                        {
                            idc = 1205;

                            text = "Suit Durability:";

                            x = 0;
                            y = STR(6 * GRID_H);
                            w = STR(30 * GRID_W);
                            h = STR(5 * GRID_H);
                        };
                    };
                };
            };
        };        
    };
};
