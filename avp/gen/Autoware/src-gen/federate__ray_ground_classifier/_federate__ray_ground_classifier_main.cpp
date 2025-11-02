extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/federate__ray_ground_classifier/federate__ray_ground_classifier.h"
#include "_federate__ray_ground_classifier_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
_federate__ray_ground_classifier_main_main_self_t* new__federate__ray_ground_classifier_main() {
    _federate__ray_ground_classifier_main_main_self_t* self = (_federate__ray_ground_classifier_main_main_self_t*)lf_new_reactor(sizeof(_federate__ray_ground_classifier_main_main_self_t));

    return self;
}
