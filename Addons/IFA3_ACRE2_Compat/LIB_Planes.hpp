class Plane_Base_F;

class LIB_Plane_base : Plane_Base_F {
    acre_hasInfantryPhone = 0;
    acre_infantryPhoneDisableRinging = 1;

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "ICom";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {{"cargo", "all"}};
            masterPositions[] = {"crew"};
            numLimitedPositions = 1;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Air Radio";
            shortName = "Air";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver","copilot"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
        class Rack_2 {
            displayName = "Ground Radio";
            shortName = "Grnd";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver","copilot"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class LIB_GER_Plane_base;
class LIB_SU_Plane_base;
class LIB_US_Plane_base;

class LIB_FW190F8 : LIB_GER_Plane_base {
    class AcreRacks {
        class Rack_1 {
            displayName = "Air Radio";
            shortName = "Air";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
        class Rack_2 {
            displayName = "Ground Radio";
            shortName = "Grnd";
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

class LIB_Ju52 : LIB_GER_Plane_base {
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "ICom";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {{"cargo", "all"}};
            masterPositions[] = {"driver","copilot"};
            numLimitedPositions = 2;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Air Radio";
            shortName = "Air";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver","gunner"}; // This should be changes to  = {"driver","copilot"}; once the copilot is fixed
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Ground Radio";
            shortName = "Grnd";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver","gunner"}; // This should be changes to  = {"driver","copilot"}; once the copilot is fixed
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class LIB_Ju87 : LIB_GER_Plane_base {
    class AcreRacks {
        class Rack_1 {
            displayName = "Air Radio";
            shortName = "Air";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
        class Rack_2 {
            displayName = "Ground Radio";
            shortName = "Grnd";
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

class LIB_P39 : LIB_SU_Plane_base {
    class AcreRacks {
        class Rack_1 {
            displayName = "Air Radio";
            shortName = "Air";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
        class Rack_2 {
            displayName = "Ground Radio";
            shortName = "Grnd";
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

class LIB_Pe2 : LIB_SU_Plane_base {
    class AcreRacks {
        class Rack_1 {
            displayName = "Air Radio";
            shortName = "Air";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
        class Rack_2 {
            displayName = "Ground Radio";
            shortName = "Grnd";
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

class LIB_C47_Skytrain : LIB_US_Plane_base {
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "ICom";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {{"cargo", "all"}};
            masterPositions[] = {"driver","copilot"};
            numLimitedPositions = 2;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Air Radio";
            shortName = "Air";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver","copilot"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Ground Radio";
            shortName = "Grnd";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver","copilot"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class LIB_CG4_WACO : LIB_US_Plane_base {
    class AcreRacks {
        class Rack_1 {
            displayName = "Air Radio";
            shortName = "Air";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver", "gunner"}; // This should be changes to  = {"driver","copilot"}; once the copilot is fixed
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
        class Rack_2 {
            displayName = "Ground Radio";
            shortName = "Grnd";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver", "gunner"}; // This should be changes to  = {"driver","copilot"}; once the copilot is fixed
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class LIB_HORSA : LIB_US_Plane_base {
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "ICom";
            allowedPositions[] = {"driver", "gunner"}; // This should be changes to  = {"driver","copilot"}; once the copilot is fixed
            disabledPositions[] = {};
            limitedPositions[] = {};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Air Radio";
            shortName = "Air";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver", "gunner"}; // This should be changes to  = {"driver","copilot"}; once the copilot is fixed
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
        class Rack_2 {
            displayName = "Ground Radio";
            shortName = "Grnd";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver", "gunner"}; // This should be changes to  = {"driver","copilot"}; once the copilot is fixed
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class LIB_P47 : LIB_US_Plane_base {
    class AcreRacks {
        class Rack_1 {
            displayName = "Air Radio";
            shortName = "Air";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
        class Rack_2 {
            displayName = "Ground Radio";
            shortName = "Grnd";
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
