#ifndef __MPC_CONTROLLERTRAJECTORY_H
#define __MPC_CONTROLLERTRAJECTORY_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_1745367560_H
#define TOP_LEVEL_PREAMBLE_1745367560_H
#include "mpc_controller_nodes/mpc_controller_node.hpp" /* This is AUTOWARE node */
    #include "controller_common/controller_base.hpp" /* This is AUTOWARE node */
    #include "utils.hpp"
    #include "constants.hpp"
    #include "websocket_server_sync.hpp"
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
} __mpc_controllertrajectory_port0_t;
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
} __mpc_controllertrajectory_port_t;
typedef struct {
    struct self_base_t base;
#line 62 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__mpc_controller/__mpc_controllertrajectory.h"
#line 63 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__mpc_controller/__mpc_controllertrajectory.h"
    __mpc_controllertrajectory_port0_t* _lf_port0;
    // width of -2 indicates that it is not a multiport.
    int _lf_port0_width;
    // Default input (in case it does not get connected)
    __mpc_controllertrajectory_port0_t _lf_default__port0;
    // Array of output ports.
    __mpc_controllertrajectory_port_t* _lf_port;
    int _lf_port_width;
    // An array of pointers to the individual ports. Useful
    // for the lf_set macros to work out-of-the-box for
    // multiports in the body of reactions because their 
    // value can be accessed via a -> operator (e.g.,foo[i]->value).
    // So we have to handle multiports specially here a construct that
    // array of pointers.
    __mpc_controllertrajectory_port_t** _lf_port_pointers;
    trigger_t _lf__port0;
    #ifdef FEDERATED
    
    #endif // FEDERATED
} __mpc_controllertrajectory_self_t;
__mpc_controllertrajectory_self_t* new___mpc_controllertrajectory();
#endif // __MPC_CONTROLLERTRAJECTORY_H
