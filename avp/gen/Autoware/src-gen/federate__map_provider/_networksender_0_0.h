#ifndef _NETWORKSENDER_0_0_H
#define _NETWORKSENDER_0_0_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_335541164_H
#define TOP_LEVEL_PREAMBLE_335541164_H
#include "lanelet2_map_provider_node.hpp" /* This is AUTOWARE node */
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
    std::shared_ptr<autoware_auto_msgs::msg::HADMapBin> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _networksender_0_0_msg_t;
typedef struct {
    struct self_base_t base;
#line 46 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__map_provider/_networksender_0_0.h"
#line 47 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__map_provider/_networksender_0_0.h"
    // Multiport input array will be malloc'd later.
    _networksender_0_0_msg_t** _lf_msg;
    int _lf_msg_width;
    // Default input (in case it does not get connected)
    _networksender_0_0_msg_t _lf_default__msg;
    // Struct to support efficiently reading sparse inputs.
    lf_sparse_io_record_t* _lf_msg__sparse;
    reaction_t _lf__reaction_0;
    trigger_t _lf__msg;
    reaction_t* _lf__msg_reactions[1];
    #ifdef FEDERATED
    trigger_t* _lf__msg_network_port_status;
    
    #endif // FEDERATED
} _networksender_0_0_self_t;
_networksender_0_0_self_t* new__networksender_0_0();
#endif // _NETWORKSENDER_0_0_H
