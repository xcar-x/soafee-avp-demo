#ifndef _FEDERATE__VOXEL_GRID_DOWNSAMPLER_MAIN_H
#define _FEDERATE__VOXEL_GRID_DOWNSAMPLER_MAIN_H
extern "C" {
#include "include/core/reactor.h"
}
#include "_voxel_grid_downsampler.h"
#include "__voxel_grid_downsamplerpoints_in.h"
#include "_networksender_0_0.h"
#include "_networkreceiver_3.h"
#ifndef TOP_LEVEL_PREAMBLE_1231214622_H
#define TOP_LEVEL_PREAMBLE_1231214622_H
#ifdef __cplusplus
extern "C" {
#endif
#include "core/federated/federate.h"
#include "core/federated/network/net_common.h"
#include "core/federated/network/net_util.h"
#include "core/federated/clock-sync.h"
#include "core/threaded/reactor_threaded.h"
#include "core/utils/util.h"
extern federate_instance_t _fed;
#ifdef __cplusplus
}
#endif
#include "rcutils/allocator.h"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp/serialization.hpp"
#include "rclcpp/serialized_message.hpp"
#include "voxel_cloud_node.hpp"
#include "utils.hpp"
#include "constants.hpp"
#include "voxel_cloud_node.hpp"
#include "utils.hpp"
#include "constants.hpp"
#endif
typedef struct {
    struct self_base_t base;
#line 39 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__voxel_grid_downsampler/_federate__voxel_grid_downsampler_main.h"
#line 40 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__voxel_grid_downsampler/_federate__voxel_grid_downsampler_main.h"
} _federate__voxel_grid_downsampler_main_main_self_t;
_federate__voxel_grid_downsampler_main_main_self_t* new__federate__voxel_grid_downsampler_main();
#endif // _FEDERATE__VOXEL_GRID_DOWNSAMPLER_MAIN_H
