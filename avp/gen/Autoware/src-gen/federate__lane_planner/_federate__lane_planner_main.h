#ifndef _FEDERATE__LANE_PLANNER_MAIN_H
#define _FEDERATE__LANE_PLANNER_MAIN_H
extern "C" {
#include "include/core/reactor.h"
}
#include "__lane_plannermap.h"
#include "_networksender_1_1.h"
#include "_networkreceiver_13.h"
#include "__lane_plannerroute.h"
#include "_networkreceiver_34.h"
#include "_lane_planner.h"
#include "_networksender_0_0.h"
#ifndef TOP_LEVEL_PREAMBLE_914849337_H
#define TOP_LEVEL_PREAMBLE_914849337_H
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
#include "lanelet2_core/LaneletMap.h"
#include "had_map_utils/had_map_conversion.hpp"
#include "had_map_utils/had_map_query.hpp"
#include "motion_common/motion_common.hpp"
#include "lane_planner_nodes/lane_planner_node.hpp"
#include "utils.hpp"
#include "constants.hpp"
#include "lanelet2_core/LaneletMap.h"
#include "had_map_utils/had_map_conversion.hpp"
#include "had_map_utils/had_map_query.hpp"
#include "motion_common/motion_common.hpp"
#include "lane_planner_nodes/lane_planner_node.hpp"
#include "utils.hpp"
#include "constants.hpp"
#endif
typedef struct {
    struct self_base_t base;
#line 50 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lane_planner/_federate__lane_planner_main.h"
#line 51 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lane_planner/_federate__lane_planner_main.h"
} _federate__lane_planner_main_main_self_t;
_federate__lane_planner_main_main_self_t* new__federate__lane_planner_main();
#endif // _FEDERATE__LANE_PLANNER_MAIN_H
