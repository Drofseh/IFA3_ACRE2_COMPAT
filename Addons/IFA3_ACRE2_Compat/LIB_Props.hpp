class Strategic;
class NonStrategic;

class LIB_Static_Zis6_Radar : Strategic {
    acre_hasInfantryPhone = 0;
    acre_infantryPhoneDisableRinging = 1;
    acre_infantryPhonePosition[] = {0, 0, 0};
    acre_infantryPhoneControlActions[] = {};
    acre_infantryPhoneintercom[] = {};

    class AcreIntercoms {};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"external"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };

    class ACE_Actions {
        class ACE_MainActions {
            condition = "true";
            displayName = "Interactions";
            distance = 4;
            position = "[0,2.723,1.367]";
            selection = "";
            statement = "comment 'This statement does nothing.';";
        };
    };
};

class LIB_Static_OpelBlitz_Radio : LIB_Static_Zis6_Radar {

    class ACE_Actions {
        class ACE_MainActions {
            condition = "true";
            displayName = "Interactions";
            distance = 4;
            position = "[-0.85,0.221,1.3]";
            selection = "";
            statement = "comment 'This statement does nothing.';";
        };
    };
};

/*
class LIB_RadioObject_base : NonStrategic {
    acre_hasInfantryPhone = 0;
    acre_infantryPhoneDisableRinging = 1;
    acre_infantryPhonePosition[] = {0, 0, 0};
    acre_infantryPhoneControlActions[] = {};
    acre_infantryPhoneintercom[] = {};

    class AcreIntercoms {};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"external"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };

    class ACE_Actions {
        class ACE_MainActions {
            condition = "true";
            displayName = "Interactions";
            distance = 1;
            position = "call ace_interaction_fnc_getVehiclePos";
            selection = "";
        };
    };

    class EventHandlers {
        init = "_this spawn {sleep 1; _this select 0 call acre_api_fnc_initVehicleRacks;};";
        init = "_this spawn {systemChat str _this;};";
    };

};
*/
