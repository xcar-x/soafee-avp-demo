#ifndef __GLOBAL_PLANNERVEHICLE_KINEMATIC_STATE_H
#define __GLOBAL_PLANNERVEHICLE_KINEMATIC_STATE_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_1508292052_H
#define TOP_LEVEL_PREAMBLE_1508292052_H
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
#include "lanelet2_global_planner_node.hpp" /* This is AUTOWARE node */
#include "utils.hpp"
#include "constants.hpp"
#endif
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<autoware_auto_msgs::msg::VehicleKinematicState> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} __global_plannervehicle_kinematic_state_port0_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<autoware_auto_msgs::msg::VehicleKinematicState> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} __global_plannervehicle_kinematic_state_port_t;
typedef struct {
    struct self_base_t base;
#line 60 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__global_planner/__global_plannervehicle_kinematic_state.h"
#line 61 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__global_planner/__global_plannervehicle_kinematic_state.h"
    __global_plannervehicle_kinematic_state_port0_t* _lf_port0;
    // width of -2 indicates that it is not a multiport.
    int _lf_port0_width;
    // Default input (in case it does not get connected)
    __global_plannervehicle_kinematic_state_port0_t _lf_default__port0;
    // Array of output ports.
    __global_plannervehicle_kinematic_state_port_t* _lf_port;
    int _lf_port_width;
    // An array of pointers to the individual ports. Useful
    // for the lf_set macros to work out-of-the-box for
    // multiports in the body of reactions because their 
    // value can be accessed via a -> operator (e.g.,foo[i]->value).
    // So we have to handle multiports specially here a construct that
    // array of pointers.
    __global_plannervehicle_kinematic_state_port_t** _lf_port_pointers;
    trigger_t _lf__port0;
    #ifdef FEDERATED
    
    #endif // FEDERATED
} __global_plannervehicle_kinematic_state_self_t;
__global_plannervehicle_kinematic_state_self_t* new___global_plannervehicle_kinematic_state();
#endif // __GLOBAL_PLANNERVEHICLE_KINEMATIC_STATE_H
