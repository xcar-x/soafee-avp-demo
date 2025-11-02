extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/federate__lanelet2_visualizer/federate__lanelet2_visualizer.h"
#include "_federate__lanelet2_visualizer_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
_federate__lanelet2_visualizer_main_main_self_t* new__federate__lanelet2_visualizer_main() {
    _federate__lanelet2_visualizer_main_main_self_t* self = (_federate__lanelet2_visualizer_main_main_self_t*)lf_new_reactor(sizeof(_federate__lanelet2_visualizer_main_main_self_t));

    return self;
}
