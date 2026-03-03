class ACE_Medical_Injuries {
    class damageTypes {
        class radiation {
            thresholds[] = {{0, 1}};
            selectionSpecific = 0;
            noBlood = 1;
            class RadiationBurn {
                weighting[] = {{0, 1}};
            };
        };
    };
    class wounds {
        class RadiationBurn {
            bleeding = 0;
            pain = 0.2;
            minDamage = 0;
        };
    };
};
class ace_medical_treatment {
    class Medication {
        class PotassiumIodide {
            painReduce = 0.1;
            hrIncreaseLow[] = {0, 0};
            hrIncreaseNormal[] = {0, 0};
            hrIncreaseHigh[] = {0, 0};
            timeInSystem = 420;
            timeTillMaxEffect = 10;
            maxDose = 4;
            dose = 1;
            incompatibleMedication[] = {};
        };
    };
};
class ace_medical_treatment_actions {
    class PotassiumIodide {
        displayName = "Administer Potassium Iodide";
        displayNameProgress = "Administering Potassium Iodide...";
        icon = "\z\ace\addons\medical_gui\ui\bandage.paa";
        category = "medication";

        consumeItem = 1;
        items[] = {"ACE_fieldDressing"};

        medicRequired = 0;
        allowSelfTreatment = 1;
        allowedSelections[] = {"Head"};
        condition = "player getVariable [""MSF_Radiation"", 0] > 0;";
        treatmentLocations = "ace_medical_treatment_locationMorphine";

        treatmentTime = 4;

        callbackStart = "";
        callbackProgress = "";
        callbackSuccess = "hint ""Applied""";
        callbackFailure = "";

        animationMedic = "AinvPknlMstpSlayW[wpn]Dnon_medicOther";
        animationMedicProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
        animationMedicSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
        animationMedicSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";

        litter[] = {};
    };
};

class CfgMagazines {
    class CA_Magazine;
    class MSF_PotassiumIodide : CA_Magazine {
        scope = 2;
        author = "Zeik_Tuvai";
        displayName = "Potassium Iodide";
        model = "\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
        picture = "\z\ace\addons\medical_treatment\ui\painkillers_ca.paa";
        descriptionShort = "Medication for reducing the effects of radiation exposure.";
        descriptionUse = "Medication for reducing the effects of radiation exposure.";
        ACE_isMedicalItem = 1;
        ACE_asItem = 1;
        count = 10;
        mass = 1;
    };
};
class CfgWeapons {
    class ItemCore;
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class MSF_PotassiumIodide_Item : ACE_ItemCore {
        displayName = "Potassium Iodide";
        author = "Zeik_Tuvai";
        scope = 2;
        scopeArsenal = 0;
        descriptionShort = "Medication for reducing the effects of radiation exposure.";
        picture = "\z\ace\addons\medical_treatment\ui\painkillers_ca.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
};
