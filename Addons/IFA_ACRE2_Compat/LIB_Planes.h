 class LIB_Ju87 : LIB_GER_Plane_base {

  class AcreRacks {
   class Rack_1 {
    name = "Air Radio";
    componentname = "ACRE_VRC111";
    allowed[] = {"driver", "gunner"};
    disabled[] = {};
    defaultComponents[] = {};
    mountedRadio = "ACRE_PRC148";
    isRadioRemovable = 0;
    intercom[] = {"driver", "gunner"};
   };
   class Rack_2 {
    name = "Ground Radio";
    componentname = "ACRE_VRC111";
    allowed[] = {"driver", "gunner"};
    disabled[] = {};
    defaultComponents[] = {};
    mountedRadio = "ACRE_PRC148";
    isRadioRemovable = 0;
    intercom[] = {"driver", "gunner"};
   };
  };
 };

 class LIB_FW190F8 : LIB_GER_Plane_base {

  class AcreRacks {
   class Rack_1 {
    name = "Air Radio";
    componentname = "ACRE_VRC111";
    allowed[] = {"driver"};
    disabled[] = {};
    defaultComponents[] = {};
    mountedRadio = "ACRE_PRC148";
    isRadioRemovable = 0;
    intercom[] = {"driver"};
   };
   class Rack_2 {
    name = "Ground Radio";
    componentname = "ACRE_VRC111";
    allowed[] = {"driver"};
    disabled[] = {};
    defaultComponents[] = {};
    mountedRadio = "ACRE_PRC148";
    isRadioRemovable = 0;
    intercom[] = {"driver"};
   };
  };
 };