class UniformItem;    

class Uniform_Base : ItemCore
{
    class ItemInfo;
};

class ARC_Uniform : Uniform_Base
{
    scope = 2;
    displayName = "ARC Uniform";
    picture = "z\msf\addons\units\data\ui\icon_ARC_Uniform.paa";
    model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; 
    class ItemInfo : UniformItem { 
        uniformClass = "MSF_O_ARC_Rifleman"; 
        containerClass = "Supply50"; 
        mass = 50; 
    }; 
};   
