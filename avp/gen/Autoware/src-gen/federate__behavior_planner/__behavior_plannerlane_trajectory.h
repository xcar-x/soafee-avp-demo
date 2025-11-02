#ifndef __BEHAVIOR_PLANNERLANE_TRAJECTORY_H
#define __BEHAVIOR_PLANNERLANE_TRAJECTORY_H
extern "C" {
#include "include/core/reactor.h"
}
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
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<autoware_auto_msgs::msg::Trajectory> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} __behavior_plannerlane_trajectory_port0_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<autoware_auto_msgs::msg::Trajectory> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} __behavior_plannerlane_trajectory_port_t;
typedef struct {
    struct self_base_t base;
#line 67 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__behavior_planner/__behavior_plannerlane_trajectory.h"
#line 68 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__behavior_planner/__behavior_plannerlane_trajectory.h"
    __behavior_plannerlane_trajectory_port0_t* _lf_port0;
    // width of -2 indicates that it is not a multiport.
    int _lf_port0_width;
    // Default input (in case it does not get connected)
    __behavior_plannerlane_trajectory_port0_t _lf_default__port0;
    // Array of output ports.
    __behavior_plannerlane_trajectory_port_t* _lf_port;
    int _lf_port_width;
    // An array of pointers to the individual ports. Useful
    // for the lf_set macros to work out-of-the-box for
    // multiports in the body of reactions because their 
    // value can be accessed via a -> operator (e.g.,foo[i]->value).
    // So we have to handle multiports specially here a construct that
    // array of pointers.
    __behavior_plannerlane_trajectory_port_t** _lf_port_pointers;
    trigger_t _lf__port0;
    #ifdef FEDERATED
    
    #endif // FEDERATED
} __behavior_plannerlane_trajectory_self_t;
__behavior_plannerlane_trajectory_self_t* new___behavior_plannerlane_trajectory();
#endif // __BEHAVIOR_PLANNERLANE_TRAJECTORY_H
