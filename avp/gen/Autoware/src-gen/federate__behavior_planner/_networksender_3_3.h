#ifndef _NETWORKSENDER_3_3_H
#define _NETWORKSENDER_3_3_H
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
    std::shared_ptr<autoware_auto_msgs::msg::Route> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _networksender_3_3_msg_t;
typedef struct {
    struct self_base_t base;
#line 53 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__behavior_planner/_networksender_3_3.h"
#line 54 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__behavior_planner/_networksender_3_3.h"
    // Multiport input array will be malloc'd later.
    _networksender_3_3_msg_t** _lf_msg;
    int _lf_msg_width;
    // Default input (in case it does not get connected)
    _networksender_3_3_msg_t _lf_default__msg;
    // Struct to support efficiently reading sparse inputs.
    lf_sparse_io_record_t* _lf_msg__sparse;
    reaction_t _lf__reaction_0;
    trigger_t _lf__msg;
    reaction_t* _lf__msg_reactions[1];
    #ifdef FEDERATED
    trigger_t* _lf__msg_network_port_status;
    
    #endif // FEDERATED
} _networksender_3_3_self_t;
_networksender_3_3_self_t* new__networksender_3_3();
#endif // _NETWORKSENDER_3_3_H
