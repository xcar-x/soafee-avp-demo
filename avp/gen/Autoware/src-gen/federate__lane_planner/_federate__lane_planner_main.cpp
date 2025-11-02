extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/federate__lane_planner/federate__lane_planner.h"
#include "_federate__lane_planner_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
_federate__lane_planner_main_main_self_t* new__federate__lane_planner_main() {
    _federate__lane_planner_main_main_self_t* self = (_federate__lane_planner_main_main_self_t*)lf_new_reactor(sizeof(_federate__lane_planner_main_main_self_t));

    return self;
}
