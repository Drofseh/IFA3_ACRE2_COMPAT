class CfgPatches {
    class IFA3_ACRE2_Compat {
        author = "Wilhelm Haas (Drofseh)";
        authors[] = {"Wilhelm Haas (Drofseh)", "El Tyranos"};
        requiredVersion = 0.1;
        requiredAddons[] = {"acre_main","acre_sys_rack","acre_sys_intercom","WW2_Core_c_WW2_Core_c","ww2_core_c_if_zzz_lastloaded_c"};
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        ammo[] = {};
    };
};

class cfgVehicles {

    #include "B_LIB_AssaultPack_Base.hpp"

    #include "LIB_Boats.hpp"

    #include "LIB_Planes.hpp"

    #include "LIB_Tanks.hpp"

    #include "LIB_Wheeled.hpp"

    #include "LIB_WheeledTracked_APC_base.hpp"

};
