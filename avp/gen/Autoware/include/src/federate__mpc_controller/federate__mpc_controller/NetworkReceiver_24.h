#ifndef _networkreceiver_24_H
#define _networkreceiver_24_H
#ifndef _NETWORKRECEIVER_24_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_1745367560_H
#define TOP_LEVEL_PREAMBLE_1745367560_H
/*Correspondence: Range: [(47, 0), (51, 40)) -> Range: [(0, 0), (4, 40)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src/federate__mpc_controller.lf)*/#include "mpc_controller_nodes/mpc_controller_node.hpp" /* This is AUTOWARE node */
    #include "controller_common/controller_base.hpp" /* This is AUTOWARE node */
    #include "utils.hpp"
    #include "constants.hpp"
    #include "websocket_server_sync.hpp"
/*Correspondence: Range: [(54, 0), (70, 40)) -> Range: [(0, 0), (16, 40)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src/federate__mpc_controller.lf)*/#ifdef __cplusplus
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
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/schedule.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct networkreceiver_24_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int end[0]; // placeholder; MSVC does not compile empty structs
} networkreceiver_24_self_t;
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
} networkreceiver_24_msg_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_action_internal_t _base;
    self_base_t* parent;
    bool has_value;
    int source_id;
    uint8_t* value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} networkreceiver_24_networkMessage_t;
#endif
#endif
