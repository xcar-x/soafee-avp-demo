#ifndef _FEDERATE__PARKING_PLANNER_MAIN_H
#define _FEDERATE__PARKING_PLANNER_MAIN_H
extern "C" {
#include "include/core/reactor.h"
}
#include "_networkreceiver_14.h"
#include "_networksender_1_1.h"
#include "__parking_plannermap.h"
#include "__parking_plannerroute.h"
#include "_parking_planner.h"
#include "_networksender_0_0.h"
#include "_networkreceiver_29.h"
#ifndef TOP_LEVEL_PREAMBLE_1416010329_H
#define TOP_LEVEL_PREAMBLE_1416010329_H
#include "lanelet2_core/LaneletMap.h"
#include "had_map_utils/had_map_conversion.hpp"
#include "had_map_utils/had_map_query.hpp"
#include "parking_planner_nodes/parking_planner_node.hpp"
#include "utils.hpp"
#include "constants.hpp"
#include "lanelet2_core/LaneletMap.h"
#include "had_map_utils/had_map_conversion.hpp"
#include "had_map_utils/had_map_query.hpp"
#include "parking_planner_nodes/parking_planner_node.hpp"
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
#line 48 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__parking_planner/_federate__parking_planner_main.h"
#line 49 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__parking_planner/_federate__parking_planner_main.h"
} _federate__parking_planner_main_main_self_t;
_federate__parking_planner_main_main_self_t* new__federate__parking_planner_main();
#endif // _FEDERATE__PARKING_PLANNER_MAIN_H
