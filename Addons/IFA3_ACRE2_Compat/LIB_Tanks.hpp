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
            disabledPositions[] = {{"turnedout", "all"}};
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
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class LIB_PzKpfwIV_H;

class LIB_PzBefWgIV : LIB_PzKpfwIV_H {
    displayName = "PzBefWg IV";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Anton";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Bruno";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
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
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class LIB_PzKpfwV;

class LIB_PzBefWgV : LIB_PzKpfwV {
    displayName = "PzBefWg V Panther";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Anton";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Bruno";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class LIB_PzKpfwVI_B;

class LIB_PzBefWgVI_E : LIB_PzKpfwVI_B {
    displayName = "PzBefWg VI Tiger";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Anton";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Bruno";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
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
            disabledPositions[] = {{"turnedout", "all"}};
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
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class LIB_PzKpfwVI_E;

class LIB_PzBefWgVI_B : LIB_PzKpfwVI_E {
    displayName = "PzBefWg VI Ausf. B Kingtiger";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Anton";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Bruno";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
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
            disabledPositions[] = {{"turnedout", "all"}};
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
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class LIB_M4A3_75 : LIB_M4A3_75_base {
    class Turrets;
};

class LIB_M4A3_75_Com : LIB_M4A3_75 {
    displayName = "M4A3 Sherman (Command)";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Able";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Baker";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class LIB_M4A3_75_Tubes;

class LIB_M4A3_75_Tubes_Com : LIB_M4A3_75_Tubes {
    displayName = "M4A3 Sherman (Command w/wading gear)";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Able";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Baker";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class LIB_M4A2_SOV;

class LIB_M4A2_SOV_Com : LIB_M4A2_SOV {
    displayName = "M4A2 Sherman (Command)";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Able";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Baker";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class LIB_Crusader_Base : LIB_Tank_base {
    class Turrets;
};

class LIB_Crusader_Mk3 : LIB_Crusader_Base {
    acre_infantryPhonePosition[] = {0.43,-2.015,-1.069};
    acre_infantryPhoneCustomRinging[] = {"IFA3_ACRE2_Compat\Sound\InFoneUK.wss",4,1,1,40};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };

    class Turrets : Turrets {
        class MainTurret;
    };
};

class LIB_Crusader_Command : LIB_Crusader_Mk3 {
    displayName = "Crusader (OP/Command)";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Baker";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };

    class Turrets : Turrets {
        class MainTurret : MainTurret {
            magazines[] = {"LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa"};
            weapons[] = {"LIB_Besa_coax"};
        };
    };
};

class LIB_Crusader_Mk1AA : LIB_Crusader_Base {
    acre_infantryPhonePosition[] = {0.43,-2.295,-1.169};
    acre_infantryPhoneCustomRinging[] = {"IFA3_ACRE2_Compat\Sound\InFoneUK.wss",4,1,1,40};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class LIB_Cromwell_Base : LIB_Tank_base {
    acre_infantryPhonePosition[] = {-0.033,-2.808,-1.479};
    acre_infantryPhoneCustomRinging[] = {"IFA3_ACRE2_Compat\Sound\InFoneUK.wss",4,1,1,40};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {0,1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };

    class Turrets;
};

class LIB_Cromwell_Mk4 : LIB_Cromwell_Base {
    class Turrets : Turrets {
        class MainTurret;
		class kurs_MG_turret;
    };
};

class LIB_Cromwell_Command : LIB_Cromwell_Mk4 {
    displayName = "Cromwell (Command)";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {0,1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Baker";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };

    class Turrets : Turrets {
        class MainTurret : MainTurret {
            magazines[] = {"LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa"};
            weapons[] = {"LIB_Besa_coax"};
        };
		class kurs_MG_turret: kurs_MG_turret {};
    };
};

class LIB_UniversalCarrier_base : LIB_Tank_base {
    acre_hasInfantryPhone = 0;
    acre_infantryPhoneDisableRinging = 1;
    class AcreIntercoms {};
    class AcreRacks {};
};

class LIB_M4A4_FIREFLY : LIB_M4A3_75 {
    // Config as the M4 Sherman, except infantry phone position and custom ring
    acre_infantryPhonePosition[] = {0, -3, -0.4};
    acre_infantryPhoneCustomRinging[] = {"IFA3_ACRE2_Compat\Sound\InFoneUS.wss",6,1,1,40};
};

class LIB_M4A4_FIREFLY_Com : LIB_M4A4_FIREFLY {
    displayName = "M4A4 Sherman Firefly (Command)";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Able";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Baker";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class LIB_M4A3_76 : LIB_M4A3_75 {
    // Config as the M4 Sherman, except infantry phone position
    acre_infantryPhonePosition[] = {0.2, -3.1, 0};
};

class LIB_M4A3_76_Com : LIB_M4A3_76 {
    displayName = "M4A3(76) Sherman (Command)";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Able";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Baker";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class LIB_M4A3_76_HVSS : LIB_M4A3_76 {
    // Config as the M4 Sherman, except infantry phone position
    acre_infantryPhonePosition[] = {0.2, -3.1, 0};
};

class LIB_M4A3_76_HVSS_Com : LIB_M4A3_76_HVSS {
    displayName = "M4A3E8(76) HVSS Sherman (Command)";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Able";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Baker";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class LIB_M3A3_Stuart : LIB_M4A3_75 {
    // Config as the M4 Sherman, except infantry phone position
    acre_infantryPhonePosition[] = {-0.238,-1.928,-1.068};

    class Turrets : Turrets {
        class MainTurret;
		class kurs_MG_turret;
    };
};

class LIB_M3A3_Stuart_Com : LIB_M3A3_Stuart {
    displayName = "M3A3 Stuart (Command)";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Able";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Baker";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };

    class Turrets : Turrets {
        class MainTurret : MainTurret {
            magazines[] = {"LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4"};
            weapons[] = {"LIB_M1919A4_coax"};
        };
		class kurs_MG_turret: kurs_MG_turret {};
    };
};

class LIB_M5A1_Stuart : LIB_M3A3_Stuart {
    // Config as the M4 Sherman, except infantry phone position
    acre_infantryPhonePosition[] = {-0.25,-1.94,-1.07};

    class Turrets : Turrets {
        class MainTurret;
		class kurs_MG_turret;
    };
};

class LIB_M5A1_Stuart_Com : LIB_M5A1_Stuart {
    displayName = "M5A1 Stuart (Command)";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Able";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Baker";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };

    class Turrets : Turrets {
        class MainTurret : MainTurret {
            magazines[] = {"LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4"};
            weapons[] = {"LIB_M1919A4_coax"};
        };
		class kurs_MG_turret: kurs_MG_turret {};
    };
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
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class LIB_JS2_43;

class LIB_JS2_43_Com : LIB_JS2_43 {
    displayName = "JS-122 '43 (Command)";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Anna";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Borís";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
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
            disabledPositions[] = {{"turnedout", "all"}};
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
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class LIB_T34_76;

class LIB_T34_76_Com : LIB_T34_76 {
    displayName = "T-34-76 (Command)";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Anna";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Borís";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class LIB_T34_76_NRad : LIB_T34_76 {
    displayName = "T-34-76 (No Radio)";

    class AcreRacks {};
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
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class LIB_T34_85;

class LIB_T34_85_Com : LIB_T34_85 {
    displayName = "T-34-85 (Command)";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Anna";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Borís";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};
