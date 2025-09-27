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
    //     #include "\z\msf\addons\ui\cfg\dialogs\assets\MSFTablet.inc"
        class bg: RscText
        {
            idc = 1006;
            
            text = "";
            x = STR(CENTER_X - 200 * GRID_W);
            y = STR(CENTER_Y - 100 * GRID_H);
            w = STR(400 * GRID_W);
            h = STR(200 * GRID_H);
            colorBackground[] = {0,1,0,1};
        };
    };
    // class Controls
    // {   
    //     #include "\z\msf\addons\ui\cfg\dialogs\assets\Header.inc"
    //     class cost: RscText
    //     {
    //         idc = 1006;
            
    //         text = "Cost: ";
    //         x = STR(CENTER_X - 100.2 * GRID_W);
    //         y = STR(CENTER_Y - 69 * GRID_H);
    //         w = STR(30 * GRID_W);
    //         h = STR(10 * GRID_H);
    //     };
    //     class MainGroup : RscControlsGroup
    //     {
    //         idc = 102;
            
    //         x = STR(CENTER_X - 97.2 * GRID_W);
    //         y = STR(CENTER_Y - 57.4 * GRID_H);
    //         w = STR(194.2 * GRID_W);
    //         h = STR(115.1 * GRID_H);
    //         class Controls
    //         {
    //         };
    //     };
        

    //     #include "\z\msf\addons\ui\cfg\dialogs\assets\StatusBar.inc"
    // };
    
};
