#ifndef _NETWORKRECEIVER_4_H
#define _NETWORKRECEIVER_4_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_1773141042_H
#define TOP_LEVEL_PREAMBLE_1773141042_H
#include "ray_ground_classifier_cloud_node.hpp"
#include <stdlib.h>
#include <string>
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
    std::shared_ptr<sensor_msgs::msg::PointCloud2> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _networkreceiver_4_msg_t;
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
} _networkreceiver_4_networkMessage_t;
typedef struct {
    struct self_base_t base;
#line 65 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__ray_ground_classifier/_networkreceiver_4.h"
#line 66 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__ray_ground_classifier/_networkreceiver_4.h"
    _networkreceiver_4_networkMessage_t _lf_networkMessage;
    _networkreceiver_4_msg_t _lf_msg;
    int _lf_msg_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__networkMessage;
    reaction_t* _lf__networkMessage_reactions[1];
} _networkreceiver_4_self_t;
_networkreceiver_4_self_t* new__networkreceiver_4();
#endif // _NETWORKRECEIVER_4_H
