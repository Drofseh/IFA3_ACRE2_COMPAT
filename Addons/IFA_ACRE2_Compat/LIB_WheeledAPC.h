 class LIB_SdKfz251_base : LIB_WheeledTracked_APC_base {
  class AcreRacks {
   class Rack_1 {
    name = "Vehicle Radio";
    componentname = "ACRE_VRC111";
    allowed[] = {"driver", {"cargo", 4}};
    disabled[] = {};
    defaultComponents[] = {};
    mountedRadio = "ACRE_PRC148";
    isRadioRemovable = 0;
    intercom[] = {};
   };
  };
 };

 class LIB_SdKfz251_FFV_base : LIB_SdKfz251_base {
  class AcreRacks {
   class Rack_1 {
    name = "Vehicle Radio";
    componentname = "ACRE_VRC111";
    allowed[] = {"driver", {"cargo", 3}};
    disabled[] = {};
    defaultComponents[] = {};
    mountedRadio = "ACRE_PRC148";
    isRadioRemovable = 0;
    intercom[] = {};
   };
  };
 };






















