#ifndef _FEDERATE__OFF_MAP_OBSTACLES_FILTER_MAIN_H
#define _FEDERATE__OFF_MAP_OBSTACLES_FILTER_MAIN_H
extern "C" {
#include "include/core/reactor.h"
}
#include "_off_map_obstacles_filter.h"
#include "__off_map_obstacles_filtermap.h"
#include "_networkreceiver_33.h"
#include "_networksender_1_1.h"
#include "_networksender_0_0.h"
#include "_networkreceiver_7.h"
#include "__off_map_obstacles_filteroriginal_bounding_boxes.h"
#ifndef TOP_LEVEL_PREAMBLE_2037894431_H
#define TOP_LEVEL_PREAMBLE_2037894431_H
#include "off_map_obstacles_filter_node.hpp"
#include "had_map_utils/had_map_conversion.hpp"
#include "utils.hpp"
#include "constants.hpp"
#include "off_map_obstacles_filter_node.hpp"
#include "had_map_utils/had_map_conversion.hpp"
#include "utils.hpp"
#include "constants.hpp"
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
#endif
typedef struct {
    struct self_base_t base;
#line 44 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__off_map_obstacles_filter/_federate__off_map_obstacles_filter_main.h"
#line 45 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__off_map_obstacles_filter/_federate__off_map_obstacles_filter_main.h"
} _federate__off_map_obstacles_filter_main_main_self_t;
_federate__off_map_obstacles_filter_main_main_self_t* new__federate__off_map_obstacles_filter_main();
#endif // _FEDERATE__OFF_MAP_OBSTACLES_FILTER_MAIN_H
