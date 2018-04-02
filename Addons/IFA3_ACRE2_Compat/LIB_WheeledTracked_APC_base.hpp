class LIB_WheeledTracked_APC_base : Tank_F {
    acre_hasInfantryPhone = 0;
    acre_infantryPhoneDisableRinging = 1;
    acre_infantryPhonePosition[] = {0, 0, 0};
    acre_infantryPhoneControlActions[] = {};
    acre_infantryPhoneintercom[] = {};

    class AcreIntercoms {
        /*
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "ICom";
            allowedPositions[] = {};
            disabledPositions[] = {};
            limitedPositions[] = {};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
        */
    };

    class AcreRacks {
        /*
        class Rack_1 {
            displayName = "Vehicle Radio";
            shortName = "Rack";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
        */
    };
};

class LIB_SdKfz251_base : LIB_WheeledTracked_APC_base {
    class AcreRacks {
        class Rack_1 {
            displayName = "Vehicle Radio";
            shortName = "Rack";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver", {"cargo", 4}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class LIB_SdKfz251_FFV_base : LIB_SdKfz251_base {
    class AcreRacks {
        class Rack_1 {
            displayName = "Vehicle Radio";
            shortName = "Rack";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver", {"cargo", 3}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class LIB_SdKfz_7_base : LIB_WheeledTracked_APC_base {
    class AcreRacks {
        /*
        class Rack_1 {
            displayName = "Vehicle Radio";
            shortName = "Rack";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
        */
    };
};

class LIB_Halftrack_base : LIB_WheeledTracked_APC_base {
    class AcreRacks {
        class Rack_1 {
            displayName = "Vehicle Radio";
            shortName = "Rack";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};
