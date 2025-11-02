extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/federate__voxel_grid_downsampler/federate__voxel_grid_downsampler.h"
#include "_federate__voxel_grid_downsampler_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
_federate__voxel_grid_downsampler_main_main_self_t* new__federate__voxel_grid_downsampler_main() {
    _federate__voxel_grid_downsampler_main_main_self_t* self = (_federate__voxel_grid_downsampler_main_main_self_t*)lf_new_reactor(sizeof(_federate__voxel_grid_downsampler_main_main_self_t));

    return self;
}
