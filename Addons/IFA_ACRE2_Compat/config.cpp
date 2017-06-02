class CfgPatches {
 class IFA_ACRE2_COMPAT {
   author = "Wilhelm Haas";
   units[] = {};
   weapons[] = {};
   requiredAddons[] = {"acre_sys_rack.pbo","ace_interaction.pbo","ace_interact_menu.pbo","ww2_assets_c_vehicles_core_c.pbo","ww2_assets_c_vehicles_boats_c.pbo","ww2_assets_c_vehicles_planes_c.pbo","ww2_assets_c_vehicles_tanks_c.pbo","ww2_assets_c_vehicles_wheeled_c.pbo","ww2_assets_c_vehicles_wheeledapc_c.pbo"};
  };
 }; //End CfgPatches

class cfgVehicles {

    //Boats
 class Boat_F;
 class LIB_Boat_base : Boat_F {

  // No Crew Intercom
  acre_hasCrewIntercom = 1;

  // No Passenger intercom
  acre_hasPassengerIntercom = 0;

  // No Infantry Phone
  acre_hasInfantryPhone = 0;
 };

    //Planes
 class Plane_Base_F;
 class LIB_Plane_base : Plane_Base_F {

  // Crew Intercom
  acre_hasCrewIntercom = 1;
  acre_crewIntercomPositions[] = {"default"};

  // No Passenger intercom
  acre_hasPassengerIntercom = 0;

  // Infantry Phone
  acre_hasInfantryPhone = 1;
  acre_infantryPhoneDisableRinging = 1;
  acre_infantryPhoneIntercom[] = {"crew"};
  acre_infantryPhonePosition[] = {0, 0, 0};

  class AcreRacks {
   class Rack_1 {
    name = "Air Radio";
    componentname = "ACRE_VRC111";
    allowed[] = {"driver"};
    disabled[] = {};
    defaultComponents[] = {};
    mountedRadio = "ACRE_PRC148";
    isRadioRemovable = 0;
    intercom[] = {"crew"};
   };
   class Rack_2 {
    name = "Ground Radio";
    componentname = "ACRE_VRC111";
    allowed[] = {"driver"};
    disabled[] = {};
    defaultComponents[] = {};
    mountedRadio = "ACRE_PRC148";
    isRadioRemovable = 0;
    intercom[] = {"crew"};
   };
  };
 };

 class LIB_GER_Plane_base;
 class LIB_SU_Plane_base;

    //Cars
 class Car_F;
 class LIB_Car_base : Car_F {

  // No Crew Intercom
  acre_hasCrewIntercom = 0;

  // No Passenger intercom
  acre_hasPassengerIntercom = 0;

  // No Infantry Phone
  acre_hasInfantryPhone = 0;

  class AcreRacks {
   class Rack_1 {
    name = "Vehicle Radio";
    componentname = "ACRE_VRC111";
    allowed[] = {};
    disabled[] = {};
    defaultComponents[] = {};
    mountedRadio = "ACRE_PRC148";
    isRadioRemovable = 0;
    intercom[] = {};
   };
  };
 };

    //Trucks
 class Truck_F;
 class LIB_Truck_base : Truck_F {

  // No Crew Intercom
  acre_hasCrewIntercom = 0;

  // No Passenger intercom
  acre_hasPassengerIntercom = 0;

  // No Infantry Phone
  acre_hasInfantryPhone = 0;

  class AcreRacks {
   class Rack_1 {
    name = "Vehicle Radio";
    componentname = "ACRE_VRC111";
    allowed[] = {};
    disabled[] = {};
    defaultComponents[] = {};
    mountedRadio = "ACRE_PRC148";
    isRadioRemovable = 0;
    intercom[] = {};
   };
  };
 };

    //Tanks
 class Tank_F;
 class LIB_Tank_base : Tank_F {

  // Crew Intercom
  acre_hasCrewIntercom = 1;
  acre_crewIntercomPositions[] = {"crew", "driver", "commander"};

  // No Passenger intercom
  acre_hasPassengerIntercom = 0;

  // Infantry Phone
  acre_hasInfantryPhone = 1;
  acre_infantryPhoneIntercom[] = {"crew", "driver", "commander"};
  acre_infantryPhonePosition[] = {0, 0, 0};

  class AcreRacks {
   class Rack_1 {
    name = "Tank Radio";
    componentname = "ACRE_VRC111";
    allowed[] = {"commander", {"turret", "all"}};
    disabled[] = {"gunner"};
    defaultComponents[] = {};
    mountedRadio = "ACRE_PRC148";
    isRadioRemovable = 0;
    intercom[] = {"crew", "driver", "commander"};
   };
  };
 };

    //Halftracks, usually
 class LIB_WheeledTracked_APC_base : Tank_F {

  // No Crew Intercom
  acre_hasCrewIntercom = 0;

  // No Passenger intercom
  acre_hasPassengerIntercom = 0;

  // No Infantry Phone
  acre_hasInfantryPhone = 0;

  class AcreRacks {
   class Rack_1 {
    name = "Vehicle Radio";
    componentname = "ACRE_VRC111";
    allowed[] = {};
    disabled[] = {};
    defaultComponents[] = {};
    mountedRadio = "ACRE_PRC148";
    isRadioRemovable = 0;
    intercom[] = {};
   };
  };
 };

 class LIB_Halftrack_base : LIB_WheeledTracked_APC_base {};

 //Inclusions
#include "LIB_Boats.h"

#include "LIB_Planes.h"

#include "LIB_Tanks.h"

#include "LIB_Wheeled.h"

#include "LIB_WheeledAPC.h"

}; //End cfgVehicles

/*class cfgSounds {
 class InFoneGer {
  name = "InFoneGer";
  sound[] = {\IFA_ACRE2_COMPAT\Sounds\InFoneGer.wav};
 };

 class InFoneRus {
  name = "InFoneRus";
  sound[] = {\IFA_ACRE2_COMPAT\Sounds\InFoneRus.wav};
 };

 class InFoneUK {
  name = "InFoneUK";
  sound[] = {\IFA_ACRE2_COMPAT\Sounds\InFoneUK.wav};
 };

 class InFoneUS {
  name = "InFoneUS";
  sound[] = {\IFA_ACRE2_COMPAT\Sounds\InFoneUS.wav};
 };

}; //End cfgSound
*/