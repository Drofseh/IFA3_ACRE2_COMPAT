class CfgPatches {
    class IFA3_ACRE2_Compat {
        author = "Wilhelm Haas (Drofseh)";
        authors[] = {"Wilhelm Haas (Drofseh)", "El Tyranos"};
        requiredVersion = 0.1;
        requiredAddons[] = {"acre_main","acre_sys_rack","acre_sys_intercom","WW2_Core_c_WW2_Core_c","ww2_core_c_if_zzz_lastloaded_c"};
        units[] = { "LIB_JS2_43_Com",
                    "LIB_M3A3_Stuart_Com",
                    "LIB_M4A2_SOV_Com",
                    "LIB_M4A3_75_Com",
                    "LIB_M4A3_75_Tubes_Com",
                    "LIB_M4A3_76_Com",
                    "LIB_M4A3_76_HVSS_Com",
                    "LIB_M4A4_FIREFLY_Com",
                    "LIB_M5A1_Stuart_Com",
                    "LIB_M8_Greyhound_Com",
                    "LIB_PzBefWgIV",
                    "LIB_PzBefWgV",
                    "LIB_PzBefWgVI_B",
                    "LIB_PzBefWgVI_E",
                    "LIB_SdKfz234_1_Com",
                    "LIB_SdKfz234_2_Com",
                    "LIB_SdKfz234_3_Com",
                    "LIB_SdKfz234_4_Com",
                    "LIB_SdKfz251_Com",
                    "LIB_T34_76_Com",
                    "LIB_T34_76_NRad",
                    "LIB_T34_85_Com"
        };
        weapons[] = {};
        magazines[] = {};
        ammo[] = {};
    };
};

class cfgVehicles {

    #include "B_LIB_AssaultPack_Base.hpp"

    #include "LIB_Boats.hpp"

    #include "LIB_Planes.hpp"

    // #include "LIB_Props.hpp" Haven't been able to get the static objects working correctly. Will revisit in the future.

    #include "LIB_Tanks.hpp"

    #include "LIB_Wheeled.hpp"

    #include "LIB_WheeledTracked_APC_base.hpp"

};
