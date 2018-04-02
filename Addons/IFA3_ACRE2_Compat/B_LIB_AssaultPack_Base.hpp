class B_LIB_AssaultPack_Base;

    class B_LIB_GER_Radio : B_LIB_AssaultPack_Base {
        maximumLoad = 120;
        // None of the Transport classes appear to be able to add ACRE radios, so for now I'm just deleting TransportItems to prevent the vanilla radio item from being turned into a modern ACRE 343 radio.
        delete TransportItems;
        /*
        class TransportWeapons {
            class _xx_ACRE_PRC77 {
                count = 1;
                weapon = "ACRE_PRC77";
            };
        };
        */
    };

    class B_LIB_SOV_RA_Radio : B_LIB_AssaultPack_Base {
        maximumLoad = 120;
        delete TransportItems;
        /*
        class TransportWeapons {
            class _xx_ACRE_PRC77 {
                count = 1;
                weapon = "ACRE_PRC77";
            };
        };
        */
    };

    class B_LIB_US_Radio : B_LIB_AssaultPack_Base {
        maximumLoad = 120;
        delete TransportItems;
        /*
        class TransportWeapons {
            class _xx_ACRE_PRC77 {
                count = 1;
                weapon = "ACRE_PRC77";
            };
        };
        */
    };
