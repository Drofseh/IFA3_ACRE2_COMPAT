class Boat_F;
class LIB_Boat_base : Boat_F {
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "ICom";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {{"cargo", "all"}};
            numLimitedPositions = 2;
            masterPositions[] = {"crew"};
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
            intercom[] = {};
        };
    };
};
