extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/federate__p2d_ndt_localizer/federate__p2d_ndt_localizer.h"
#include "_federate__p2d_ndt_localizer_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
_federate__p2d_ndt_localizer_main_main_self_t* new__federate__p2d_ndt_localizer_main() {
    _federate__p2d_ndt_localizer_main_main_self_t* self = (_federate__p2d_ndt_localizer_main_main_self_t*)lf_new_reactor(sizeof(_federate__p2d_ndt_localizer_main_main_self_t));

    return self;
}
