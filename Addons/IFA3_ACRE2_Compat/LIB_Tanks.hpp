class Tank_F;

class LIB_Tank_base : Tank_F {
    // Adds an infantry phone, a full crew intercom, and a radio configurable by the entire crew
    // This isn't historically accurate, but will ensure that new vehicles get comms even if they don't have a vehicle specific config
    acre_hasInfantryPhone = 1;
    acre_infantryPhoneDisableRinging = 0;
    acre_infantryPhonePosition[] = {0, 0, 0};
    acre_infantryPhoneControlActions[] = {"all"};
    acre_infantryPhoneIntercom[] = {"all"};

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "IntCm";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"commander"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class LIB_PzKpfwIV_H_base : LIB_Tank_base {
    // Panzer IV inherits a full crew intercom and an infantry phone
    // Infantry phone positions is customized
    // Radio Rx and Tx are available to all crew over the intercom, but only the hull Machine Gunner can open the radio GUI to change frequency
    // This is the common setup for most German tanks as well as the tanks of many other nations
    acre_hasInfantryPhone = 1;
    acre_infantryPhoneDisableRinging = 0;
    acre_infantryPhonePosition[] = {-0.45, -2.8, -1.1};
    acre_infantryPhoneCustomRinging[] = {"IFA3_ACRE2_Compat\Sound\InFoneGer.wss",7,1,1,40};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class LIB_PzKpfwV_base : LIB_Tank_base {
    // Config as the Panzer IV, except infantry phone position
    acre_infantryPhonePosition[] = {-1.0, -3.6, -0.9};
    acre_infantryPhoneCustomRinging[] = {"IFA3_ACRE2_Compat\Sound\InFoneGer.wss",7,1,1,40};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class LIB_PzKpfwVI_B_base : LIB_Tank_base {
    // Config as the Panzer IV, except infantry phone position
    acre_infantryPhonePosition[] = {1.025, -3.9, -0.8};
    acre_infantryPhoneCustomRinging[] = {"IFA3_ACRE2_Compat\Sound\InFoneGer.wss",7,1,1,40};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class LIB_PzKpfwVI_E_base : LIB_Tank_base {
    // Config as the Panzer IV, except infantry phone position
    acre_infantryPhonePosition[] = {0, -3.75, -1.1};
    acre_infantryPhoneCustomRinging[] = {"IFA3_ACRE2_Compat\Sound\InFoneGer.wss",7,1,1,40};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class LIB_StuG_III_G_base : LIB_Tank_base {
    // Config as the Panzer IV, except infantry phone position, and the Loader position has radio GUI access since there is no hull Machine Gunner
    acre_infantryPhonePosition[] = {0, -2.8, -0.4};
    acre_infantryPhoneCustomRinging[] = {"IFA3_ACRE2_Compat\Sound\InFoneGer.wss",7,1,1,40};

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "IntCm";
            allowedPositions[] = {"crew", {"turret", {0,1}}};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"commander"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {0,1}}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class LIB_FlakPanzerIV_Wirbelwind : LIB_PzKpfwIV_H_base {
    // Wirbelwind has Panzer IV infantry phone and crew intercom but no radio
    class AcreRacks {
        /*
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {};
        };
        */
    };
};

class LIB_SdKfz124_base : LIB_Tank_base {
    // The Wespe has a crew intercom for communication between the commander and the driver
    // The radio GUI can only be opened by the commander and gunner
    acre_hasInfantryPhone = 0;
    acre_infantryPhoneDisableRinging = 1;
    acre_infantryPhonePosition[] = {0, 0, 0};
    acre_infantryPhoneControlActions[] = {};
    acre_infantryPhoneIntercom[] = {};

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "IntCm";
            allowedPositions[] = {"driver", "commander"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"commander"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"gunner", "commander"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class LIB_M4A3_75_base : LIB_Tank_base {
    // M4 Sherman inherits a full crew intercom and an infantry phone
    // Radio Rx and Tx are available to all crew over the intercom, but only the Commander can open the radio GUI to change frequency
    // Infantry phone positions is customized, but currently commented out and {0, 0, 0} is used as default
    // The vehicle centre, and consequently the ACE interaction point that acre_infantryPhonePosition is based off, of is messed up, when that gets fixed in IFA3 this should get updated
    // acre_infantryPhonePosition[] = {0, -2.52, 0}; // Model centre is at ground level, set Z axis and apply once model centre fixed.
    acre_infantryPhoneCustomRinging[] = {"IFA3_ACRE2_Compat\Sound\InFoneUS.wss",6,1,1,40};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class LIB_M4A3_75;

class LIB_M4A4_FIREFLY : LIB_M4A3_75 {
    // Config as the M4 Sherman, except infantry phone position and custom ring
    acre_infantryPhonePosition[] = {0, -3, -0.4};
    acre_infantryPhoneCustomRinging[] = {"IFA3_ACRE2_Compat\Sound\InFoneUK.wss",4,1,1,40};
};

class LIB_M4A3_76 : LIB_M4A3_75 {
    // Config as the M4 Sherman, except infantry phone position
    acre_infantryPhonePosition[] = {0.2, -3.1, 0};
};

class LIB_M4A3_76_HVSS : LIB_M4A3_76 {
    // Config as the M4 Sherman, except infantry phone position
    acre_infantryPhonePosition[] = {0.2, -3.1, 0};
};

class LIB_M3A3_Stuart : LIB_M4A3_75 {
    // Config as the M4 Sherman, except infantry phone position
    // acre_infantryPhonePosition[] = {0.2, -1.95, 0}; // Model centre is at ground level, set Z axis and apply once model centre fixed.
};

class LIB_M5A1_Stuart : LIB_M3A3_Stuart {
    // Config as the M4 Sherman, except infantry phone position
    // acre_infantryPhonePosition[] = {-0.2, -1.95, 0}; // Model centre is at ground level, set Z axis and apply once model centre fixed.
};

class LIB_JS2_43_base : LIB_Tank_base {
    acre_infantryPhonePosition[] = {0, -3.9, -0.8};
    acre_infantryPhoneCustomRinging[] = {"IFA3_ACRE2_Compat\Sound\InFoneRus.wss",5,1,1,40};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class LIB_SU85_base : LIB_Tank_base {
    acre_infantryPhonePosition[] = {0, -3.2, -0.8};
    acre_infantryPhoneCustomRinging[] = {"IFA3_ACRE2_Compat\Sound\InFoneRus.wss",5,1,1,40};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {0,1}}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class LIB_T34_76_base : LIB_Tank_base {
    acre_infantryPhonePosition[] = {0, -2.4, -0.8};
    acre_infantryPhoneCustomRinging[] = {"IFA3_ACRE2_Compat\Sound\InFoneRus.wss",5,1,1,40};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class LIB_T34_85_base : LIB_Tank_base {
    acre_infantryPhonePosition[] = {0, -3.2, -0.8};
    acre_infantryPhoneCustomRinging[] = {"IFA3_ACRE2_Compat\Sound\InFoneRus.wss",5,1,1,40};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};
