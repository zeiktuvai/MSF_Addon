class MSF_OFE_EnemyStatemachine {
    list = "allGroups select {!isPlayer leader _x}";
    skipNull = 1;

    class Initial {
        onState = "";
        onStateEntered = "";
        onStateLeaving = "";

        class MoveToStage1 {
            targetState = "Stage1";
            condition = "missionNamespace getVariable ['MSF_OFE_EnemyStr', 4] == 3";//  && missionNamespace getVariable ['MSF_OFE_Notoriety', 0] == 1";
            onTransition = "";
        };
    };

    class Stage1 {
        onState = "";
        onStateEntered = "[['OFE', 'EnemyStrength'], 15, '', 20, '', true, true, false, true] call BIS_fnc_advHint;";
        onStateleaving = "";

        class MoveToStage2 {
            targetState = "Stage2";
            condition = "missionNamespace getVariable ['MSF_OFE_EnemyStr', 4] == 2"; // && missionNamespace getVariable ['MSF_OFE_Notoriety', 0] == 1";
            onTransition = "";
        };
    };

    class Stage2 {
        onState = "";
        onStateEntered = "[['OFE', 'EnemyStrength'], 15, '', 20, '', true, true, false, true] call BIS_fnc_advHint;";
        onStateleaving = "";

        class MoveToStage3 {
            targetState = "Stage3";
            condition = "missionNamespace getVariable ['MSF_OFE_EnemyStr', 4] == 1"; // && missionNamespace getVariable ['MSF_OFE_Notoriety', 0] == 1";
            onTransition = "";
        };
    };

    class Stage3 {
        onState = "";
        onStateEntered = "[['OFE', 'EnemyStrength'], 15, '', 20, '', true, true, false, true] call BIS_fnc_advHint;";
        onStateleaving = "";

        class MoveToFinalStage {
            targetState = "Final";
            condition = "missionNamespace getVariable ['MSF_OFE_EnemyStr', 4] == 0"; // && missionNamespace getVariable ['MSF_OFE_Notoriety', 0] == 1";
            onTransition = "";
        };
    };

    class Final
    {
        onState = "";
        onStateEntered = "hint 'Final stage'";
        onStateleaving = "";
    };
};