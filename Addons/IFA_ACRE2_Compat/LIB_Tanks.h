    // German tanks
    // Panzer IV
 class LIB_PzKpfwIV_H_base : LIB_Tank_base {

  // Infantry Phone
  acre_infantryPhonePosition[] = {-0.45, -2.8, -1.1};
  //acre_infantryPhoneCustomRinging[] = {"InFoneGer.wav", 7.0, 1.0, 1.0, 50};
 };

    // Panther
 class LIB_PzKpfwV_base : LIB_Tank_base {

  // Infantry Phone
  acre_infantryPhonePosition[] = {-1.0, -3.6, -0.9};
  //acre_infantryPhoneCustomRinging[] = {"InFoneGer.wav", 7.0, 1.0, 1.0, 50};
 };

    // Kingtiger
 class LIB_PzKpfwVI_B_base : LIB_Tank_base {

  // Infantry Phone
  acre_infantryPhonePosition[] = {1.025, -3.9, -0.8};
  //acre_infantryPhoneCustomRinging[] = {"InFoneGer.wav", 7.0, 1.0, 1.0, 50};
 };

    // Tiger I
 class LIB_PzKpfwVI_E_base : LIB_Tank_base {

  // Infantry Phone
  acre_infantryPhonePosition[] = {0, -3.75, -1.1};
  //acre_infantryPhoneCustomRinging[] = {"InFoneGer.wav", 7.0, 1.0, 1.0, 50};
 };

    // StuG III
 class LIB_StuG_III_G_base : LIB_Tank_base {

  // Infantry Phone
  acre_infantryPhonePosition[] = {0, -2.8, -0.4};
  //acre_infantryPhoneCustomRinging[] = {"InFoneGer.wav", 7.0, 1.0, 1.0, 50};

  class AcreRacks {
   class Rack_1 {
    name = "Tank Radio";
    componentname = "ACRE_VRC111";
    allowed[] = {"crew", "commander", {"turret", "all"}};
    disabled[] = {"driver", "gunner"};
    defaultComponents[] = {};
    mountedRadio = "ACRE_PRC148";
    isRadioRemovable = 0;
    intercom[] = {"crew", "driver", "commander"};
   };
  };
 };

    //Soviet Tanks
    //IS-2-43
 class LIB_JS2_43_base : LIB_Tank_base {

  // Infantry Phone
  acre_infantryPhonePosition[] = {0, -3.9, -0.8};
  //acre_infantryPhoneCustomRinging[] = {"InFoneRus.wav", 7.0, 1.0, 1.0, 50};
 };

    //Su-85
 class LIB_SU85_base : LIB_Tank_base {
     
  // Infantry Phone
  acre_infantryPhonePosition[] = {0, -3.2, -0.8};
  //acre_infantryPhoneCustomRinging[] = {"InFoneRus.wav", 7.0, 1.0, 1.0, 50};
 };

    //T-34-76
 class LIB_T34_76_base : LIB_Tank_base {

  // Crew Intercom
  acre_hasCrewIntercom = 1;
  acre_crewIntercomPositions[] = {"crew", "driver"};

  // Infantry Phone
  acre_hasInfantryPhone = 1;
  acre_infantryPhoneIntercom[] = {"crew", "driver"};
  acre_infantryPhonePosition[] = {0, -2.4, -0.8};
  //acre_infantryPhoneCustomRinging[] = {"InFoneRus.wav", 7.0, 1.0, 1.0, 50};

  class AcreRacks {
   class Rack_1 {
    name = "Tank Radio";
    componentname = "ACRE_VRC111";
    allowed[] = {"crew", "gunner", {"turret", "all"}};
    disabled[] = {"driver"};
    defaultComponents[] = {};
    mountedRadio = "ACRE_PRC148";
    isRadioRemovable = 0;
    intercom[] = {"crew", "driver", "gunner"};
   };
  };
 };

    //T-34-85
 class LIB_T34_85_base : LIB_Tank_base {

  // Infantry Phone
  acre_infantryPhonePosition[] = {0, -3.2, -0.8};
  //acre_infantryPhoneCustomRinging[] = {"InFoneRus.wav", 7.0, 1.0, 1.0, 50};
 };

    //US Tanks
    //M4 Sherman
 class LIB_M4A3_75_base : LIB_Tank_base {
     
  // Infantry Phone
  //acre_infantryPhonePosition[] = {0, -3.2, -0.8};
  // The ACE interaction point that this is based off of is messed up, when that gets fixed in the IFA/ACE compat this should get updated

  class AcreRacks {
   class Rack_1 {
    name = "Tank Radio";
    componentname = "ACRE_VRC111";
    allowed[] = {"commander"};
    disabled[] = {};
    defaultComponents[] = {};
    mountedRadio = "ACRE_PRC148";
    isRadioRemovable = 0;
    intercom[] = {"crew", "driver", "commander"};
   };
  };
 };