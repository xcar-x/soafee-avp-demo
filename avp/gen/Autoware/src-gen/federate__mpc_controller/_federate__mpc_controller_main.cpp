extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/federate__mpc_controller/federate__mpc_controller.h"
#include "_federate__mpc_controller_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
_federate__mpc_controller_main_main_self_t* new__federate__mpc_controller_main() {
    _federate__mpc_controller_main_main_self_t* self = (_federate__mpc_controller_main_main_self_t*)lf_new_reactor(sizeof(_federate__mpc_controller_main_main_self_t));

    return self;
}
