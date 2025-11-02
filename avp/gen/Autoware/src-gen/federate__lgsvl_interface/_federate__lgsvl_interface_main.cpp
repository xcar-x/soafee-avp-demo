extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/federate__lgsvl_interface/federate__lgsvl_interface.h"
#include "_federate__lgsvl_interface_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
_federate__lgsvl_interface_main_main_self_t* new__federate__lgsvl_interface_main() {
    _federate__lgsvl_interface_main_main_self_t* self = (_federate__lgsvl_interface_main_main_self_t*)lf_new_reactor(sizeof(_federate__lgsvl_interface_main_main_self_t));

    return self;
}
