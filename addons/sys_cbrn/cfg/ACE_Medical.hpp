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
