extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/federate__ndt_map_publisher/federate__ndt_map_publisher.h"
#include "_federate__ndt_map_publisher_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
_federate__ndt_map_publisher_main_main_self_t* new__federate__ndt_map_publisher_main() {
    _federate__ndt_map_publisher_main_main_self_t* self = (_federate__ndt_map_publisher_main_main_self_t*)lf_new_reactor(sizeof(_federate__ndt_map_publisher_main_main_self_t));

    return self;
}
