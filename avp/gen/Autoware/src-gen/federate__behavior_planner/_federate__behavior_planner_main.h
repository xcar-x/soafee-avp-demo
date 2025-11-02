#ifndef _FEDERATE__BEHAVIOR_PLANNER_MAIN_H
#define _FEDERATE__BEHAVIOR_PLANNER_MAIN_H
extern "C" {
#include "include/core/reactor.h"
}
#include "_networksender_3_3.h"
#include "_networksender_4_4.h"
#include "_networksender_1_1.h"
#include "__behavior_plannerparking_trajectory.h"
#include "_networksender_2_2.h"
#include "__behavior_plannermap.h"
#include "_networksender_0_0.h"
#include "__behavior_plannermodified_trajectory.h"
#include "__behavior_plannervehicle_kinematic_state.h"
#include "_networkreceiver_26.h"
#include "_networkreceiver_25.h"
#include "__behavior_plannervehicle_state_report.h"
#include "__behavior_plannerlane_trajectory.h"
#include "_networkreceiver_22.h"
#include "_behavior_planner.h"
#include "_networkreceiver_32.h"
#include "_networkreceiver_23.h"
#include "_networkreceiver_19.h"
#include "_networksender_5_5.h"
#include "_networkreceiver_18.h"
#include "__behavior_plannerglobal_path.h"
#ifndef TOP_LEVEL_PREAMBLE_204867874_H
#define TOP_LEVEL_PREAMBLE_204867874_H
#include "lanelet2_core/LaneletMap.h"
#include "had_map_utils/had_map_conversion.hpp"
#include "had_map_utils/had_map_query.hpp"
#include "autoware_auto_msgs/msg/vehicle_kinematic_state.hpp"
#include "autoware_auto_msgs/msg/vehicle_state_report.hpp"
#include "autoware_auto_msgs/msg/vehicle_state_command.hpp"
#include "behavior_planner.hpp"
#include "behavior_planner_node.hpp"
#include "utils.hpp"
#include "constants.hpp"
#include "lanelet2_core/LaneletMap.h"
#include "had_map_utils/had_map_conversion.hpp"
#include "had_map_utils/had_map_query.hpp"
#include "autoware_auto_msgs/msg/vehicle_kinematic_state.hpp"
#include "autoware_auto_msgs/msg/vehicle_state_report.hpp"
#include "autoware_auto_msgs/msg/vehicle_state_command.hpp"
#include "behavior_planner.hpp"
#include "behavior_planner_node.hpp"
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
#line 70 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__behavior_planner/_federate__behavior_planner_main.h"
#line 71 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__behavior_planner/_federate__behavior_planner_main.h"
} _federate__behavior_planner_main_main_self_t;
_federate__behavior_planner_main_main_self_t* new__federate__behavior_planner_main();
#endif // _FEDERATE__BEHAVIOR_PLANNER_MAIN_H
