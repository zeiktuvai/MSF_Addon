class MSF_OFE_Statemachine {
    list = "allGroups select {!isPlayer leader _x}";
    skipNull = 1;

    class Initial {
        onState = "";
        onStateEntered = "";
        onStateLeaving = "";

        class MoveToStage1 {
            targetState = "Stage1";
            condition = "missionNamespace getVariable ['EnemyStr', 4] == 3 && missionNamespace getVariable ['Notoriety', 0] == 1";
            onTransition = "hint 'transitioning'";
        };
    };

    class Stage1 {
        onState = "";
        onStateEntered = "systemChat 'stage 1'";
        onStateleaving = "";
    };
};