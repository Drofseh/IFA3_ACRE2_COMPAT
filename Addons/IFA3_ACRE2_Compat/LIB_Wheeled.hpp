class Car_F;
class LIB_Car_base;

class Truck_F;
class LIB_Truck_base;

class LIB_SdKfz222_base: LIB_Truck_base {
    // The 222 has no infantry phone, no intercom, and a radio with the GUI accessible to the gunner (temporarily set to commander instead)
    acre_hasInfantryPhone = 0;
    acre_infantryPhoneDisableRinging = 1;

    class AcreIntercoms {
        /*
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "ICom";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"commander"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
        */
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Vehicle Radio";
            shortName = "Rack";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"}; // This should be changes to  = {"gunner"}; but for some reason the gunner slot won't accept any radio at all, even with "crew".
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class LIB_SdKfz234_base: LIB_Truck_base {
    // The 234 has no crew intercom, no infantry phone, and a radio accessible by the driver
    // Strictly speaking the radio should be accessed by the rear driver/radio operator
    // Once/if that seat is implemented this config should be changed
    acre_hasInfantryPhone = 0;
    acre_infantryPhoneDisableRinging = 1;

    class AcreIntercoms {
        /*
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "ICom";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"commander"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
        */
    };

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

class LIB_M8_Greyhound_base : LIB_Truck_base {
    // The M8 Greyhound has a crew intercom, no infantry phone, and a radio accessible by the driver
    // Strictly speaking the radio should be accessed by a dedicated radio operator next to the driver
    // Once/if that seat is implemented this config should be changed
    acre_hasInfantryPhone = 0;
    acre_infantryPhoneDisableRinging = 1;

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "ICom";
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

class LIB_Scout_M3_base: LIB_Truck_base {
    // The M3 Scout Car has no infantry phone, no intercom, and a radio with the GUI accessible to the front passenger
    acre_hasInfantryPhone = 0;
    acre_infantryPhoneDisableRinging = 1;

    class AcreRacks {
        class Rack_1 {
            displayName = "Vehicle Radio";
            shortName = "Rack";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver", {"cargo", 0}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class LIB_Scout_M3_FFV: LIB_Scout_M3_base {
    // The FFV version is the same, but the front passenger sear is a different cargo index
    class AcreRacks {
        class Rack_1 {
            displayName = "Vehicle Radio";
            shortName = "Rack";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver", {"cargo", 6}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};
