class CfgPatches {
 class IFA_ACRE2_COMPAT {
   author = "Wilhelm Haas";
   units[] = {};
   weapons[] = {};
   requiredAddons[] = {"acre_sys_rack.pbo","ace_interaction.pbo","ace_interact_menu.pbo","ww2_assets_c_vehicles_core_c.pbo","ww2_assets_c_vehicles_boats_c.pbo","ww2_assets_c_vehicles_planes_c.pbo","ww2_assets_c_vehicles_tanks_c.pbo","ww2_assets_c_vehicles_wheeled_c.pbo","ww2_assets_c_vehicles_wheeledapc_c.pbo"};
  };
 }; //End CfgPatches

class cfgVehicles {

 class LIB_Boat_base;
 class LIB_Car_base;
 class LIB_Halftrack_base;
 class LIB_Tank_base;
 class LIB_Truck_base;
 class LIB_WheeledTracked_APC_base;
 class LIB_GER_Plane_base;

#include "LIB_Boats.h"

#include "LIB_Planes.h"

#include "LIB_Tanks.h"

#include "LIB_Wheeled.h"

#include "LIB_WheeledAPC.h"

}; //End cfgVehicles
