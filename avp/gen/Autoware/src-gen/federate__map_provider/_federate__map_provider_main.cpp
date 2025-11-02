extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/federate__map_provider/federate__map_provider.h"
#include "_federate__map_provider_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
_federate__map_provider_main_main_self_t* new__federate__map_provider_main() {
    _federate__map_provider_main_main_self_t* self = (_federate__map_provider_main_main_self_t*)lf_new_reactor(sizeof(_federate__map_provider_main_main_self_t));

    return self;
}
